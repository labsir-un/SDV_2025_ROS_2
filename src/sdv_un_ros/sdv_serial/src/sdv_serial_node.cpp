#include <unistd.h>
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <cinttypes>
#include <tools.h>

#include <rclcpp/rclcpp.hpp>
#include <serial_driver/serial_driver.hpp>
#include "io_context/io_context.hpp"
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/bool.hpp>

#include <sensor_msgs/msg/imu.hpp>
#include <sensor_msgs/msg/magnetic_field.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/twist_with_covariance.hpp>
#include <geometry_msgs/msg/twist_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/vector3.hpp>

#include <motor/motor.h>
#include <motor/two_drive_controller.h>
#include <motor/four_drive_controller.h>

#include <sdv_msgs/msg/batteries.hpp>
#include <sdv_msgs/msg/battery.hpp>
#include <sdv_msgs/msg/buzzer.hpp>
#include <sdv_msgs/msg/encoder.hpp>
#include <sdv_msgs/msg/flexiforce.hpp>
#include <sdv_msgs/msg/imu_raw.hpp>
#include <sdv_msgs/msg/led.hpp>
#include <sdv_msgs/msg/two_motors.hpp>
#include <sdv_msgs/msg/four_motors.hpp>
#include <sdv_msgs/msg/panel_button.hpp>
#include <sdv_msgs/msg/sdv_status.hpp>
#include <sdv_msgs/msg/tag_rfid.hpp>
#include <sdv_msgs/msg/ultrasound.hpp>
#include <sdv_msgs/msg/motor_driver.hpp>
#include <sdv_msgs/msg/drivers.hpp>

using namespace std;
using namespace drivers::serial_driver;

/* Constants */
#define PORT "/dev/ttyACM0"
#define GYRO_SENSITIVITY_2000DPS 0.070
#define SENSORS_GRAVITY_EARTH 9.80665 // Earth's gravity in m/s^2
#define SENSORS_GRAVITY_STANDARD SENSORS_GRAVITY_EARTH
#define SENSORS_DPS_TO_RADS 0.01745329251994 // Degrees/s to rad/s multiplier
#define SENSORS_MICROTESLA_TO_TESLA 1.0e-6

// Typedefs

typedef struct
{
    double x;
    double y;
    double z;
} Gyro;
typedef struct
{
    double x;
    double y;
    double z;
} Accel;
typedef struct
{
    double x;
    double y;
    double z;
} MagField;
typedef struct
{
    double x;
    double y;
    double z;
    double w;
} QPose;

// Enums
enum BoardStatus
{
    OK,
    JUST_CONNECTED,
    DISCONNECTED,
    LOCKED
};

enum MotorModel
{
    NONE = 0,
    ESCON = 1,
    POLOLU = 2
};

////////////////////////////////////////////////////////////////////////////////
//
// Prototypes
//
////////////////////////////////////////////////////////////////////////////////
int openSerialPort(const std::string& portx);
void moveMotorsCallback(const geometry_msgs::msg::Twist::SharedPtr msg);
void ledCallback(sdv_msgs::msg::LED::SharedPtr msg);
void buzzerCallback(sdv_msgs::msg::Buzzer::SharedPtr msg);
void superBuzzerCallback(sdv_msgs::msg::Buzzer::SharedPtr msg);
void configSerialCommunication(void);
void readAndProcessCmd();
void sendConfigCommand(const std::string &cmd);
int CMD_IMUMessage(std::vector<std::string> args);
int CMD_SAMessage(std::vector<std::string> args);
int CMD_FlexiforceMessage(std::vector<std::string> args);
int CMD_PanelButtonMessage(std::vector<std::string> args);
int CMD_BatteryMessage(std::vector<std::string> args);
int CMD_DriverStatusMessage(std::vector<std::string> args);
int CMD_OdometryMessage(std::vector<std::string> args);
int CMD_UltrasoundMessage(std::vector<std::string> args);
int CMD_EmptyFunction(std::vector<std::string> args);

//*****************************************************************************
//
// Command line function callback type.
//
//*****************************************************************************
typedef int (*pfnCmdLine)(std::vector<std::string> args);

//*****************************************************************************
//
// Command struct
//
//*****************************************************************************
typedef struct
{
    // A pointer to a string containing the name of the command.
    const int intCmd;

    // A function pointer to the implementation of the command.
    pfnCmdLine pfnCmd;

} CMD_Struct;

//*****************************************************************************
//
// Board Commands Table
//
//*****************************************************************************
CMD_Struct CMD_Table[] = {
    {0, CMD_EmptyFunction},         // Motor: Command, publish nothing
    {1, CMD_IMUMessage},            // IMU: automatic message. Publish at 20Hz
    {2, CMD_OdometryMessage},       // Encoder: automatic message. Publish at 20Hz
    {3, CMD_EmptyFunction},         // SDV Status: automatic message
    {4, CMD_UltrasoundMessage},     // Ultrasound: automatic message. Publish at 20Hz
    {5, CMD_FlexiforceMessage},     // Flexiforce: automatic message. Publish at 2Hz
    {6, CMD_BatteryMessage},        // Battery: automatic message. Publish at 0.5Hz
    {7, CMD_EmptyFunction},         // Time stamp: Service
    {8, CMD_SAMessage},             // Still Alive and Acknowledge of Still Alive Message commands
    {9, CMD_EmptyFunction},         // Code for general message
    {10, CMD_PanelButtonMessage},   // Panel Button: automatic message
    {12, CMD_EmptyFunction},        // Code reset message
    {13, CMD_DriverStatusMessage},  // Drivers Data
};
int cmd_table_size = 13;

////////////////////////////////////////////////////////////////////////////////
//
// Variables
//
////////////////////////////////////////////////////////////////////////////////
drivers::common::IoContext io_context;
drivers::serial_driver::SerialDriver ser(io_context);

std::vector<std::string> buffer_callback;
int baudrate = 921600;
std::string port;
std::string motor_drive_type;
int n_motors = 0;
//variables de escritura

//std::string msg_w= "_";
//std::vector<uint8_t> cmd_w(msg_w.begin(), msg_w.end());
    


BoardStatus board_status = DISCONNECTED;
double initial_stamp_PC;
double initial_stamp_tiva;
unsigned int microseconds = 100000;
double r = 0.075;
double B = 0.44010;
double N = 3.2 * 4;

// Motors
TwoDriveController two_drive_controller;
FourDriveController four_drive_controller;

// Still Alive Messages
double last_sa_msg_time_stamp = -1.0;

// IMU: sensor fusion calculations
double PI = 3.14159265358979323846;
double GyroMeasError = PI * (60.0 / 180.0);      // gyroscope measurement error in rads/s (start at 60 deg/s), then reduce after ~10 s to 3
double beta = sqrt(3.0 / 4.0) * GyroMeasError;   // compute beta
double GyroMeasDrift = PI * (1.0 / 180.0);       // gyroscope measurement drift in rad/s/s (start at 0.0 deg/s/s)
double zeta = sqrt(3.0f / 4.0f) * GyroMeasDrift; // compute zeta, the other free parameter in the Madgwick scheme usually set to a small or zero value
double q[4] = {1.0f, 0.0f, 0.0f, 0.0f};          // vector to hold quaternion
double deltat = 1.0 / 10.0;                      // integration interval for both filter schemes

// Publishers
rclcpp::Publisher<sdv_msgs::msg::Encoder>::SharedPtr encoder_pub;
rclcpp::Publisher<sdv_msgs::msg::SdvStatus>::SharedPtr sdv_status_pub;
rclcpp::Publisher<sdv_msgs::msg::Ultrasound>::SharedPtr ultrasound_pub;
rclcpp::Publisher<sdv_msgs::msg::Flexiforce>::SharedPtr flexiforce_pub;
rclcpp::Publisher<sdv_msgs::msg::Batteries>::SharedPtr batteries_pub;
rclcpp::Publisher<sdv_msgs::msg::TagRfid>::SharedPtr tag_rfid_pub;
rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imu_pub;
rclcpp::Publisher<sdv_msgs::msg::ImuRaw>::SharedPtr imu_raw_pub;
rclcpp::Publisher<sensor_msgs::msg::MagneticField>::SharedPtr mag_pub;
rclcpp::Publisher<sdv_msgs::msg::PanelButton>::SharedPtr panel_button_pub;
rclcpp::Publisher<sdv_msgs::msg::Drivers>::SharedPtr motor_status_pub;

////////////////////////////////////////////////////////////////////////////////
//
// Functions
//
////////////////////////////////////////////////////////////////////////////////
//Función de escritura

void sendMessage(const std::string& msg_w) {
        std::vector<uint8_t> cmd_w(msg_w.begin(), msg_w.end()); // Convertir el texto en un vector de uint8_t
        ser.port()->send(cmd_w); // Enviar el mensaje
    }


//Función de lectura de linea

std::string readline(drivers::serial_driver::SerialDriver &ser)
{
    std::vector<uint8_t> buffer(1); // Crear un buffer de 1 byte
    std::string data_stamp; // Variable para almacenar la línea leída

    // Leer datos byte a byte hasta encontrar un salto de línea
    while (true)
    {
        size_t bytes_received = ser.port()->receive(buffer);
        if (bytes_received > 0) {
            char byte = static_cast<char>(buffer[0]);
            data_stamp += byte;  // Acumula el byte leído

            // Si se recibe un salto de línea, termina la lectura
            if (byte == '\n') {
                break;
            }
        }
    }
    return data_stamp; // Devuelve la línea leída
}

/**
 * Callback function used by this node in "/mobile_base/commands/velocity" topic.
 * This function converts Twist messages into Tiva's command and puts it in buffer.
 *
 * @param cmd Twist message with linear and angular speeds 
 */
void moveMotorsCallback(const geometry_msgs::msg::Twist::SharedPtr cmd)
{
    // Check board status
    if (board_status == DISCONNECTED || board_status == LOCKED)
    {
        RCLCPP_INFO(rclcpp::get_logger("moveMotorsCallback"), "Board is not ok");
        return;
    }

    // Read values from incoming message
    geometry_msgs::msg::Vector3 vel_linear = cmd->linear;
    geometry_msgs::msg::Vector3 vel_angular = cmd->angular;
    std::string msgss;

    // Motor drive type: differential
    if(motor_drive_type == "diferential")
    {
        msgss = two_drive_controller.getCommandString(vel_linear, vel_angular);
        two_drive_controller.publishMotorRefSpeeds();
    }

    // Motor drive type: mecanum
    if(motor_drive_type == "mecanum")
    {
        msgss = four_drive_controller.getCommandString(vel_linear, vel_angular);
        four_drive_controller.publishMotorRefSpeeds();
    }

    if (buffer_callback.size() <= 5)
    {
        buffer_callback.insert(buffer_callback.begin(), msgss);
    }
    else
    {
        RCLCPP_INFO(rclcpp::get_logger("moveMotorsCallback"), "OverStack cmd: %lu", buffer_callback.size());
    }
}

/**
 * Callback function for LED control in ROS 2.
 * This function converts LED messages into Tiva's command and puts it in buffer.
 *
 * @param msg LED message containing RGB values
 */
void ledCallback(const sdv_msgs::msg::LED::SharedPtr msg)
{
    // Generating message string
    std::string msgss = "l " + std::to_string(static_cast<int>(msg->red)) +
                         " " + std::to_string(static_cast<int>(msg->green)) +
                         " " + std::to_string(static_cast<int>(msg->blue)) +
                         "\r";

    if (buffer_callback.size() <= 5)
    {
        buffer_callback.insert(buffer_callback.begin(), msgss);
    }
    else
    {
        RCLCPP_INFO(rclcpp::get_logger("ledCallback"), "OverStack cmd: %lu", buffer_callback.size());
    }
}

/**
 * Callback function for the buzzer command.
 * Generates a command string for the buzzer and adds it to the buffer.
 *
 * @param msg Buzzer message containing time_on, time_off, and cycles.
 */
void buzzerCallback(const sdv_msgs::msg::Buzzer::SharedPtr msg)
{
    // Generating message string
    std::string msgss = "n " + std::to_string(int(msg->time_on)) +
                         " " + std::to_string(int(msg->time_off)) +
                         " " + std::to_string(int(msg->cicles)) +
                         "\r";
    if (buffer_callback.size() <= 5)
    {
        buffer_callback.insert(buffer_callback.begin(), msgss);
    }
    else
    {
        RCLCPP_INFO(rclcpp::get_logger("buzzerCallback"), "OverStack cmd: %lu", buffer_callback.size());
    }
}

void superBuzzerCallback(const sdv_msgs::msg::Buzzer::SharedPtr msg)
{
    // Generating message string
    std::string msgss = "sn " + std::to_string(int(msg->time_on)) +
                          " " + std::to_string(int(msg->time_off)) +
                          " " + std::to_string(int(msg->cicles)) +
                          "\r";
    if (buffer_callback.size() <= 5)
    {
        buffer_callback.insert(buffer_callback.begin(), msgss);
    }
    else
    {
        RCLCPP_INFO(rclcpp::get_logger("superBuzzerCallback"), "OverStack cmd: %lu", buffer_callback.size());
    }
}


/**
 * Configures the connected board: stops board messages and sends reset command.
 * Then, it configures automatic messages and print options.
 */
void configSerialCommunication()
{
    // Send commands to stop sending messages
    RCLCPP_INFO(rclcpp::get_logger("configSerialCommunication"), "Stopping previous messages");
    //ser.write("if 0\r");
    sendMessage("if 0\r"); 
    //msg_w= "if 0\r";
    //cmd_w = std::vector<uint8_t>(msg_w.begin(), msg_w.end());
    //ser.port()->send(cmd_w);
    
    //ser.write("sa 0\r");
    sendMessage("sa 0\r");
    
    usleep(microseconds * 5);
    
    // Reset Board
    RCLCPP_INFO(rclcpp::get_logger("configSerialCommunication"), "Resetting");
//    ser.write("rt\r");
    sendMessage("rt\r");
    
    // Reading Timestamp in a loop
    RCLCPP_INFO(rclcpp::get_logger("configSerialCommunication"), "Reading timestamp");
    bool reseted = false;
    while (!reseted && rclcpp::ok())
    {
        std::string line_start;
        if (ser.port()->is_open())
	{
	    //line_start = ser.read(1);
            std::vector<uint8_t> buffer(1); // Crea un buffer para un solo byte
	    size_t bytes_received = ser.port()->receive(buffer); // Lee un byte
	    line_start = buffer[0]; // Asigna el byte leído a line_start
            
            if (line_start == "#")
            {
                std::string data_stamp = readline(ser);
                std::vector<uint64_t> vd;
                uint64_t d = 0;
                std::stringstream ss(data_stamp);
                while (ss >> d)
                    vd.push_back(d);

                uint64_t t_board = (vd[0] << 32) + vd[1];
                initial_stamp_PC = rclcpp::Clock().now().seconds();
                initial_stamp_tiva = static_cast<double>(t_board) / 1000000;
                
                RCLCPP_INFO_STREAM(rclcpp::get_logger("configSerialCommunication"), "data_stamp: " << data_stamp);
                RCLCPP_INFO(rclcpp::get_logger("configSerialCommunication"), "initial_stamp_PC: %f", initial_stamp_PC);
                RCLCPP_INFO(rclcpp::get_logger("configSerialCommunication"), "initial_stamp_tiva: %f", initial_stamp_tiva);
                
                board_status = JUST_CONNECTED;
                reseted = true;
            }
        }
        else
        {
            RCLCPP_INFO_STREAM(rclcpp::get_logger("configSerialCommunication"), "Waiting for reset message");
            exit(2);
        }
        usleep(microseconds);
    }
    
    RCLCPP_INFO(rclcpp::get_logger("configSerialCommunication"), "Configuring board");
    sendConfigCommand("cf 0");
    sendConfigCommand("mt 1");
    sendConfigCommand("lt 1");
    sendConfigCommand("dt 1");
    sendConfigCommand("sa 1");
    sendConfigCommand("if 1");
    sendConfigCommand("ff 1");
    sendConfigCommand("pf 1");
    sendConfigCommand("bf 1");
    sendConfigCommand("df 1");
    sendConfigCommand("of 1");
    sendConfigCommand("uf 1");
    RCLCPP_INFO(rclcpp::get_logger("configSerialCommunication"), "Finished");
}
/**
 * Sends a configuration command to the serial device.
 * 
 * @param cmd Command string to be sent.
 */
void sendConfigCommand(const std::string &cmd)
{
    std::string command = cmd + "\r";
//    ser.write(command);
    sendMessage(command);
    usleep(microseconds);
}

/**
 * Try to open received serial port or other predefined port. A port string can
 * be "/dev/ttyACM0" in Tiva Boards.
 * 
 * @param portx String with the name of port, e.g. "/dev/ttyACM0"
 * @return Integer, -1 if can't open received or other ports
 */
int openSerialPort(const std::string &portx)
{
    RCLCPP_INFO(rclcpp::get_logger("serial_driver"), "Trying to start serial communication in %s port at %i bauds", portx.c_str(), baudrate);
    try
    {
        drivers::serial_driver::SerialPortConfig config(baudrate, FlowControl::NONE, Parity::NONE, StopBits::ONE);
//      ser.init(portx, baudrate);
	ser.init_port(portx, config);

//      ser.open();
	ser.port()->open();

    }
    catch (const std::exception &e)
    {
        RCLCPP_ERROR(rclcpp::get_logger("serial_driver"), "Unable to open port: %s", portx.c_str());
        return -1;
    }
    return 1;
}

/**
 * Read the serial stream and obtains a command. Then, process the arrived command.
 * Only find and process a command. If board sends many commands at the same time,
 * serial buffer can be overflowed.
 * 
 * @exception SerialException: Exit and close application
 * @exception invalid_argument: ignores the line
 **/
 
 void readAndProcessCmd()
{
    try
    {
        // Verifica si la placa está conectada y el puerto serie está abierto
        if ((board_status == OK || board_status == JUST_CONNECTED) && ser.port()->is_open())
        {
            std::stringstream input_line;
            std::string last_char = "";
            std::string input_msg;
            bool new_line_char = false;
            bool return_line_char = false;
            bool complete_cmd = false;
            double last_read = rclcpp::Clock(RCL_SYSTEM_TIME).now().seconds();
            double delta_time = 0.0;
            bool read_again = true;

            while (read_again && !complete_cmd)
            {
                // Leer un carácter y verificar si es '\n' o '\r'
		std::vector<uint8_t> buffer(1);  // Crear un buffer de un byte
		ser.port()->receive(buffer);      // Leer un byte
		last_char = buffer[0];            // Asignar el byte leído

                if (!last_char.empty())
                {
                    input_line << last_char;
                    last_read = rclcpp::Clock(RCL_SYSTEM_TIME).now().seconds();
                    if (last_char == "\n") new_line_char = true;
                    if (last_char == "\r") return_line_char = true;
                    if (new_line_char && return_line_char) complete_cmd = true;
                }

                // Si la lectura tarda demasiado, se interrumpe
                delta_time = rclcpp::Clock(RCL_SYSTEM_TIME).now().seconds() - last_read;
                if (delta_time > 0.05) read_again = false;
            }

            input_msg = tools::cleanString(input_line.str());

            // Procesar contenido del mensaje
            if (input_msg.length() > 2 && input_msg.at(0) == '<')
            {
                std::vector<std::string> v_args = tools::getArgs(input_msg);

                // Obtener código de comando
                int cmd_code = -1;
                std::string cmd_code_string = v_args[0].substr(1, v_args[0].length() - 1);
                try
                {
                    cmd_code = std::stoi(cmd_code_string);
                }
                catch (const std::invalid_argument &e)
                {
                    RCLCPP_ERROR(rclcpp::get_logger("serial_node"),
                                 "Invalid argument: CMD code = %s, string = %s",
                                 v_args[0].c_str(), cmd_code_string.c_str());
                    cmd_code = -1;
                }

                // Buscar comando en la tabla y ejecutarlo
                for (int i = 0; i < cmd_table_size; i++)
                {
                    if (CMD_Table[i].intCmd == cmd_code)
                    {
                        CMD_Table[i].pfnCmd(v_args);
                    }
                }
            }

            // Procesar comando de reinicio
            int reset_char_pos = input_msg.find("#");
            if (reset_char_pos < static_cast<int>(input_msg.length()) - 1)
            {
                RCLCPP_INFO(rclcpp::get_logger("serial_node"), "Received reset command");
                board_status = DISCONNECTED;
                configSerialCommunication();
            }
        }
    }
    catch (const std::exception &e)
    {
        RCLCPP_ERROR(rclcpp::get_logger("serial_node"), "%s", e.what());
        exit(2);
    }
}

/**
 * Publish a message in IMU topic when a imu messages arrives from board.
 * 
 * @param args String with the IMU values
 * @return Integer, -1 if messsage is wrong
 */
int CMD_IMUMessage(std::vector<std::string> args)
{
    int channels = 3 + 3 + 3 + 4;

    if (args.size() != channels + 1)
    {
        RCLCPP_INFO(rclcpp::get_logger("imu_logger"), "IMU: Error with received data size %zu", args.size());
        return -1;
    }

    double data[channels];
    for (int i = 0; i < channels; i++)
    {
        data[i] = std::stod(args.at(i + 1));
    }

    // Linear acceleration: convert g to m/s^2
    geometry_msgs::msg::Vector3 accel;
    accel.x = data[0] * SENSORS_GRAVITY_EARTH;
    accel.y = data[1] * SENSORS_GRAVITY_EARTH;
    accel.z = data[2] * SENSORS_GRAVITY_EARTH;

    // Angular velocity: convert DPS to rad/s
    geometry_msgs::msg::Vector3 gyro;
    gyro.x = data[3] * SENSORS_DPS_TO_RADS;
    gyro.y = data[4] * SENSORS_DPS_TO_RADS;
    gyro.z = data[5] * SENSORS_DPS_TO_RADS;

    // Magnetic field: convert uT to T and transform from NED to ENU
    geometry_msgs::msg::Vector3 mag_field;
    mag_field.x = data[7] * SENSORS_MICROTESLA_TO_TESLA;
    mag_field.y = data[6] * SENSORS_MICROTESLA_TO_TESLA;
    mag_field.z = data[8] * -SENSORS_MICROTESLA_TO_TESLA;

    // Orientation in quaternion format
    geometry_msgs::msg::Quaternion qpose;
    qpose.x = data[9];
    qpose.y = data[10];
    qpose.z = data[11];
    qpose.w = data[12];

    // IMU Message
    sensor_msgs::msg::Imu imu_msg;
    imu_msg.header.frame_id = "imu_link";
    imu_msg.header.stamp = rclcpp::Clock().now();
    imu_msg.orientation_covariance = {0.0025, 0, 0, 0, 0.0025, 0, 0, 0, 0.0025};
    imu_msg.angular_velocity_covariance = {0.0025, 0, 0, 0, 0.0025, 0, 0, 0, 0.0025};
    imu_msg.linear_acceleration_covariance = {0.0025, 0, 0, 0, 0.0025, 0, 0, 0, 0.0025};

    imu_msg.linear_acceleration = accel;
    imu_msg.angular_velocity = gyro;
    imu_msg.orientation = qpose;

    // Magnetic Field Message
    sensor_msgs::msg::MagneticField mg_msg;
    mg_msg.header.stamp = rclcpp::Clock().now();
    mg_msg.header.frame_id = "imu_link";
    mg_msg.magnetic_field = mag_field;
    mg_msg.magnetic_field_covariance[0] = 0;

    // IMU Raw Message
    sdv_msgs::msg::ImuRaw imu_raw_msg;
    imu_raw_msg.header.stamp = rclcpp::Clock().now();
    imu_raw_msg.linear_acceleration = accel;
    imu_raw_msg.angular_velocity = gyro;
    imu_raw_msg.magnetic_field = mag_field;

    // Publish messages
    imu_pub->publish(imu_msg);
    mag_pub->publish(mg_msg);
    imu_raw_pub->publish(imu_raw_msg);

    return 1;
}

/**
 * Process a message that contains a SA message with timestamp data from the board.
 * 
 * @param args String with the SA message values
 * @return Integer, -1 if messsage is wrong
 */
 int CMD_SAMessage(std::vector<std::string> args)
{
    // Get Time Stamp of arrived message
    last_sa_msg_time_stamp = rclcpp::Clock().now().seconds();

    // Change board status
    if (board_status == JUST_CONNECTED)
    {
        board_status = OK;
    }

    // Push a message in buffer
    std::string msg = "sk\r";
    buffer_callback.insert(buffer_callback.begin(), msg);

    return 1;
}
/**
 * Process a message that contains a Flexiforce data from the board.
 * 
 * @param args String with the Flexiforce message values
 * @return Integer, -1 if messsage is wrong
 */
int CMD_FlexiforceMessage(std::vector<std::string> args)
{
    // String to vector
    int channels = 4;
    if (args.size() != channels + 1) // 5 different values
    {
        RCLCPP_INFO(rclcpp::get_logger("flexiforce"), "Flexiforce: Error with received data size %zu", args.size());
        return -1;
    }

    // Get data from string message
    double data[channels];
    for (int i = 0; i < channels; i++)
    {
        data[i] = std::stod(args.at(i + 1));
    }

    // Init ROS message
    sdv_msgs::msg::Flexiforce flx_msg;
    flx_msg.header.stamp = rclcpp::Clock().now();

    flx_msg.front_left = data[0];
    flx_msg.front_right = data[1];
    flx_msg.back_left = data[2];
    flx_msg.back_right = data[3];

    // Publish
    flexiforce_pub->publish(flx_msg);

    return 1;
}

/**
 * Process a message that contains a PanelButton data from the board.
 * 
 * @param args String with the PanelButton message values
 * @return Integer, -1 if message is wrong
 */
int CMD_PanelButtonMessage(std::vector<std::string> args)
{
    // Check size of vector
    int channels = 1;
    if (args.size() != channels + 1)
    {
        RCLCPP_INFO(rclcpp::get_logger("panel_button"), "CMD_PanelButtonMessage: Error with received data size %zu", args.size());
        return -1;
    }

    // Get data from string message
    uint8_t data = std::stoi(args.at(1));

    // Init ROS message
    sdv_msgs::msg::PanelButton button_msg;
    button_msg.header.stamp = rclcpp::Clock().now();
    button_msg.status = data;

    // Publish
    panel_button_pub->publish(button_msg);
    return 1;
}

/**
 * Process a message that contains the Batteries data.
 * 
 * @param args String with the Batteries message values
 * @return Integer, -1 if message is wrong
 */
int CMD_BatteryMessage(std::vector<std::string> args)
{
    // Get first two arguments
    int n_batteries = 0;
    int n_cells = 0;
    if (args.size() > 3)
    {
        n_batteries = std::stoi(args.at(1));
        n_cells = std::stoi(args.at(2));
    }

    // Check size of vector
    int channels = (n_batteries * n_cells) + 2;
    if (args.size() != channels + 1)
    {
        RCLCPP_INFO(rclcpp::get_logger("battery"), "CMD_BatteryMessage: Error with received data size %zu", args.size());
        return -1;
    }

    // Get data from string message
    std::vector<double> data(channels);
    for (int i = 0; i < channels; i++)
    {
        data[i] = std::stod(args.at(i + 1));
    }

    // Set ROS message
    sdv_msgs::msg::Batteries batteries_msg;
    batteries_msg.header.stamp = rclcpp::Clock().now();

    int counter = 0;
    for (int i = 0; i < n_batteries; i++)
    {
        sdv_msgs::msg::Battery battery;
        battery.name = "Battery " + std::to_string(i + 1);
        for (int j = 0; j < n_cells; j++)
        {
            battery.cell_voltages.push_back(data[counter + 2]);
            counter++;
        }
        batteries_msg.batteries.push_back(battery);
    }

    // Publish
    batteries_pub->publish(batteries_msg);
    
    return 1;
}
/**
 * Process a message that contains the Driver Status data.
 * 
 * @param args String with the Driver Status message values
 * @return Integer, -1 if message is wrong
 */
int CMD_DriverStatusMessage(std::vector<std::string> args)
{
    // Get first two arguments
    int motor_model = MotorModel::NONE;
    int n_drivers = 0;
    if (args.size() > 3)
    {
        motor_model = std::stoi(args.at(1));
        n_drivers = std::stoi(args.at(2));
    }

    // Check size of vector.
    int channels = 0;
    int driver_fields = 0;
    std::array<std::string, 4> motor_names;
    switch (motor_model)
    {
    case MotorModel::POLOLU:
        driver_fields = 3;
        motor_names = {"back_left", "back_right", "front_left", "front_right"};
        break;
    case MotorModel::ESCON:
        driver_fields = 1;
        motor_names = {"left", "right", "", ""}; // Evita valores no definidos
        break;
    default:
        break;
    }
    channels = (n_drivers * driver_fields) + 2;
    
    if (args.size() != channels + 1)
    {
        RCLCPP_INFO(
            rclcpp::get_logger("driver_status"),
            "CMD_DriverStatusMessage: Error with received data size. current = %d, required = %zu",
            channels, args.size()
        );
        return -1;
    }

    // Get data from string message
    std::vector<double> data(channels);
    for (int i = 0; i < channels; i++)
    {
        data[i] = std::stod(args.at(i + 1));
    }

    // Set ROS message
    sdv_msgs::msg::Drivers motors_msg;
    motors_msg.header.stamp = rclcpp::Clock().now();
    
    int counter = 0;
    for (int i = 0; i < n_drivers; i++)
    {
        // Set current value
        sdv_msgs::msg::MotorDriver m_msg;
        m_msg.name = motor_names[i];
        m_msg.driver_status = sdv_msgs::msg::MotorDriver::UNKNOWN;
        m_msg.current = data[counter + 2];

        // Set driver status
        if (motor_model == MotorModel::POLOLU)
        {
            bool half_bridge_a = data[counter + 3];
            bool half_bridge_b = data[counter + 4];
            if (!half_bridge_a || !half_bridge_b)
                m_msg.driver_status = sdv_msgs::msg::MotorDriver::DAMAGED;
            else
                m_msg.driver_status = sdv_msgs::msg::MotorDriver::CORRECT;
            counter += 2;
        }
        counter++;

        // Append driver data to Drivers message
        motors_msg.drivers.push_back(m_msg);
    }

    // Publish
    motor_status_pub->publish(motors_msg);
    
    return 1;
}
/**
 * Process a message that contains the Odometry data.
 * 
 * @param args String with the Odometry message values
 * @return Integer, -1 if message is wrong
 */
int CMD_OdometryMessage(std::vector<std::string> args)
{
    // Check size of vector
    int channels = n_motors;
    if (args.size() != channels + 1)
    {
        RCLCPP_INFO(
            rclcpp::get_logger("odometry"),
            "CMD_OdometryMessage: Error with received data size %zu", 
            args.size()
        );
        return -1;
    }

    // Get data from string message
    std::vector<double> data(channels);
    for (int i = 0; i < channels; i++)
    {
        data[i] = std::stod(args.at(i + 1));
    }

    // Motor drive type: differential
    if (motor_drive_type == "differential")
    {
        two_drive_controller.setActualSpeeds(data.data());
        two_drive_controller.publishMotorActualSpeeds();
    }

    // Motor drive type: mecanum
    if (motor_drive_type == "mecanum")
    {
        four_drive_controller.setActualSpeeds(data.data());
        four_drive_controller.publishMotorActualSpeeds();
    }

    return 1;
}
/**
 * Process a message that contains the Ultrasound data.
 * 
 * @param args String with the Ultrasound message values
 * @return Integer, -1 if message is wrong
 */
int CMD_UltrasoundMessage(std::vector<std::string> args)
{
    // Check size of vector
    constexpr int channels = 6;
    if (args.size() != channels + 1)
    {
        RCLCPP_INFO(
            rclcpp::get_logger("ultrasound"),
            "CMD_UltrasoundMessage: Error with received data size %zu", 
            args.size()
        );
        return -1;
    }

    // Get data from string message
    std::vector<double> data(channels);
    for (int i = 0; i < channels; i++) 
        data[i] = std::stod(args.at(i + 1));
    
    // Set ROS 2 message
    auto ultrasound_msg = std::make_shared<sdv_msgs::msg::Ultrasound>();
    ultrasound_msg->header.stamp = rclcpp::Clock().now();
    ultrasound_msg->sensors.assign(data.begin(), data.end());
    
    // Publish
    ultrasound_pub->publish(*ultrasound_msg);

    return 1;
}
/**
 * Empty function, used to create and test *pfnCmdLine* functions
 * 
 * @param args String with Tiva data
 * @return Integer, -1 if message is wrong
 */
int CMD_EmptyFunction(std::vector<std::string> args)
{
    RCLCPP_INFO(rclcpp::get_logger("empty_function"), "CMD_EmptyFunction: TO-DO.");
    return 1;
}
/**
 * main
 */
int main(int argc, char **argv)
{
    // Initialize ROS 2
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("sdv_serial_node");

    // Reading ROS parameter: port
    if (node->has_parameter("sdv.board_port"))
    {
        node->get_parameter("sdv.board_port", port);
        RCLCPP_INFO(node->get_logger(), "Got port value from ROS parameter: %s", port.c_str());
    }

    // Reading ROS parameter: baudrate
    if (node->has_parameter("sdv.board_baudrate"))
    {
        node->get_parameter("sdv.board_baudrate", baudrate);
        RCLCPP_INFO(node->get_logger(), "Got baudrate value from ROS parameter: %d", baudrate);
    }

    // Reading ROS parameter: wheel_separation
    if (node->has_parameter("sdv.wheel_separation"))
    {
        double separation;
        node->get_parameter("sdv.wheel_separation", separation);
        if (separation != 0.0)
        {
            RCLCPP_INFO(node->get_logger(), "Got 'sdv.wheel_separation' from ROS parameters: %f", separation);
            B = separation;
            two_drive_controller.setWheelSeparation(separation);
            four_drive_controller.setWheelSeparation(separation);
        }
    }

    // Reading ROS parameter: wheel_axis_separation
    if (node->has_parameter("sdv.wheel_axis_separation"))
    {
        double separation;
        node->get_parameter("sdv.wheel_axis_separation", separation);
        if (separation != 0.0)
        {
            RCLCPP_INFO(node->get_logger(), "Got 'sdv.wheel_axis_separation' from ROS parameters: %f", separation);
            B = separation;
            two_drive_controller.setAxisWheelSeparation(separation);
            four_drive_controller.setAxisWheelSeparation(separation);
        }
    }

    // Reading ROS parameter: motor drive type
    if (node->has_parameter("sdv.motor_drive_type"))
    {
        node->get_parameter("sdv.motor_drive_type", motor_drive_type);
        if(motor_drive_type == "diferential")
            n_motors = 2;
        if(motor_drive_type == "mecanum")
            n_motors = 4;
        RCLCPP_INFO(node->get_logger(), "Got motor drive type value from ROS parameter: %s", motor_drive_type.c_str());
    }

    // Subscribing to topics
    auto move_motors_sub = node->create_subscription<geometry_msgs::msg::Twist>(
        "/mobile_base/commands/velocity", 20, moveMotorsCallback);
    auto led_sub = node->create_subscription<sdv_msgs::msg::LED>("/led", 20, ledCallback);

    auto buzzer_sub = node->create_subscription<sdv_msgs::msg::Buzzer>("/buzzer", 20, buzzerCallback);
    auto super_buzzer_sub = node->create_subscription<sdv_msgs::msg::Buzzer>("/super_buzzer", 20, superBuzzerCallback);

    // Publishers
    encoder_pub = node->create_publisher<sdv_msgs::msg::Encoder>("/encoder", 20);
    sdv_status_pub = node->create_publisher<sdv_msgs::msg::SdvStatus>("/sdv_status", 20);
    ultrasound_pub = node->create_publisher<sdv_msgs::msg::Ultrasound>("/ultrasound", 20);
    flexiforce_pub = node->create_publisher<sdv_msgs::msg::Flexiforce>("/flexiforce", 20);
    batteries_pub = node->create_publisher<sdv_msgs::msg::Batteries>("/batteries", 20);
    tag_rfid_pub = node->create_publisher<sdv_msgs::msg::TagRfid>("/read_tag_rfid", 20);
    imu_raw_pub = node->create_publisher<sdv_msgs::msg::ImuRaw>("/imu_raw", 20);
    panel_button_pub = node->create_publisher<sdv_msgs::msg::PanelButton>("/panel_button", 20);
    motor_status_pub = node->create_publisher<sdv_msgs::msg::Drivers>("/motors/drivers", 20);
    mag_pub = node->create_publisher<sensor_msgs::msg::MagneticField>("/imu/mag", 20);
    imu_pub = node->create_publisher<sensor_msgs::msg::Imu>("/imu/data_raw", 20);

    two_drive_controller.setNodeHandle(node);
    four_drive_controller.setNodeHandle(node);

    // Opening serial port
    if (openSerialPort(port) == -1)
    {
        RCLCPP_ERROR(node->get_logger(), "Error opening port. Exit from sdv_serial_node.");
        return -1;
    }

    if (ser.port()->is_open())
    {
        RCLCPP_INFO(node->get_logger(), "Serial Port initialized --> %s", ser.port()->device_name().c_str());
    }
    else
    {
        RCLCPP_ERROR(node->get_logger(), "Unable to open port: %s", ser.port()->device_name().c_str());
        return -1;
    }

    // ROS loop rate
    rclcpp::Rate loop_rate(500);

    // Some variables...
    int i_cmd = 0;
    std::string line_start;

    // ROS Loop
    while (rclcpp::ok())
    {
        // Start serial communication
        if (board_status == DISCONNECTED)
        {
            configSerialCommunication();
            RCLCPP_INFO(node->get_logger(), "sdv_serial_node entering in ROS loop");
        }

        readAndProcessCmd();

        // If buffer is not empty, write messages in serial port
        if (!buffer_callback.empty() && board_status == OK)
        {
            // Get element from vector
            std::string msg = buffer_callback.back();

            // Check that it's readable
            if (msg.find("rt") != std::string::npos)
            {
                RCLCPP_INFO(node->get_logger(), "Not complete msg...");
            }
            else // Write message in serial output
            {
                //ser.write(msg);
                sendMessage(msg);
                buffer_callback.pop_back();
            }
        }

        // Check last SA Stamp Time and change board status
        double now = node->now().seconds();
        double d = now - last_sa_msg_time_stamp;

        if (board_status == OK && d > 3.0)
        {
            RCLCPP_ERROR(node->get_logger(), "Board is not sending Still Alive Messages. Changing status to LOCKED");
            board_status = LOCKED;
        }

        // If board is locked due to a reset, try to reconfigure it
        if (board_status == LOCKED)
        {
            RCLCPP_INFO(node->get_logger(), "Board in locked status. Trying to reset.");
            configSerialCommunication();
            RCLCPP_INFO(node->get_logger(), "sdv_serial_node entering in ROS loop");
        }

        // Spin
        rclcpp::spin_some(node);
        loop_rate.sleep();
    }

    rclcpp::shutdown();
    return 0;
}


