#include <unistd.h>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <inttypes.h>
#include <std_msgs/String.h>

#include <ros/ros.h>
#include <serial/serial.h>
#include <std_msgs/String.h>
#include <std_msgs/Empty.h>
#include <sensor_msgs/Imu.h>
#include <sensor_msgs/MagneticField.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/TwistWithCovariance.h>
#include <geometry_msgs/TwistWithCovarianceStamped.h>
#include <geometry_msgs/Vector3.h>
#include <motor/motor.h>

#include <sdv_serial/sdv_status.h>
#include <sdv_serial/battery.h>
#include <sdv_serial/flexiforce.h>
#include <sdv_serial/encoder.h>
#include <sdv_serial/tag_rfid.h>
#include <sdv_serial/ultrasound.h>
#include <sdv_serial/motors.h>

#define PORT "/dev/ttyACM0"

using namespace std;

////////////////////////////////////////////////////////////////////////////////
//
// Prototypes
//
////////////////////////////////////////////////////////////////////////////////
void move_motors_callback(const geometry_msgs::Twist &cmd);
int open_serial_port(string portx);
void start_serial_communication(void);
double constrain(double, double, double);
vector<string> get_args(string data);
string clear_string(string s);
int CMD_IMU_Publisher(string args);
int CMD_SA_Message(string args);
int CMD_Empty_Function(string args);
int CMD_Flexiforce_Message(string args);

//*****************************************************************************
//
// Command line function callback type.
//
//*****************************************************************************
typedef int (*pfnCmdLine)(string arg);

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
    {0, CMD_Empty_Function}, // Motor: Command, publish nothing
    {1, CMD_IMU_Publisher},  // IMU: Publish at 20Hz
    {2, CMD_Empty_Function}, // Encoder: Publish at 20Hz
    {3, CMD_Empty_Function}, // SDV Status: Service
    {4, CMD_Empty_Function}, // Ultrasound: Publish at 20Hz
    {5, CMD_Flexiforce_Message}, // Flexiforce: Publish at 2Hz
    {6, CMD_Empty_Function}, // Battery: Publish at 0.5Hz
    {7, CMD_Empty_Function}, // Time stamp: Service
    {8, CMD_SA_Message},     // Still Alive and Aknowledge of Still Alive Message commands
    {9, CMD_Empty_Function}  // Code for general message
};

//*****************************************************************************
//
// Variables
//
//*****************************************************************************
serial::Serial ser;
vector<string> buffer_callback;
int baudrate = 115200;
string port;

uint64_t step = 0;

bool board_is_ok = false;
double initial_stamp_PC;
double initial_stamp_tiva;
unsigned int microseconds = 100000;
double r = 0.075;
double B = 0.44010;
double N = 3.2 * 4;

// Motors
motor::Motor left_motor(r, false);
motor::Motor right_motor(r, true);

// Still Alive Messages
double last_sa_msg_time_stamp;

// Publishers
ros::Publisher imu_pub;
ros::Publisher mag_pub;
ros::Publisher encoder_pub;
ros::Publisher sdv_status_pub;
ros::Publisher ultrasound_pub;
ros::Publisher flexiforce_pub;
ros::Publisher battery_pub;
ros::Publisher tag_rfid_pub;
ros::Publisher motors_pub;

/**
 * move_motors_callback
 *
 * Callback function used by this node in "/mobile_base/commands/velocity" topic.
 * This function converts Twist messages into Tiva's command and puts it in buffer.
 *
 * @param cmd Twist message with linear and angular speeds 
 */
void move_motors_callback(const geometry_msgs::Twist &cmd)
{

    if (!board_is_ok)
    {
        ROS_INFO("move_motors_callback: board is not ok");
        return;
    }

    // Message to publish in motors topic
    sdv_serial::motors motors_msg;
    motors_msg.header.stamp = ros::Time::now();

    // Read values from incoming message
    geometry_msgs::Vector3 vel_linear;
    geometry_msgs::Vector3 vel_angular;
    vel_linear = cmd.linear;
    vel_angular = cmd.angular;

    // Get PWM percents of every wheel
    double wL = left_motor.get_pwm_percent(vel_linear.x, vel_angular.z);
    double wR = right_motor.get_pwm_percent(vel_linear.x, vel_angular.z);

    // Constraining wheel speeds
    wL = constrain(wL, -40.0, 40.0);
    wR = constrain(wR, -40.0, 40.0);

    // Storing percent values in motors message
    motors_msg.left_percent = wL;
    motors_msg.right_percent = wR;

    // Generaring message string
    string msgss;
    msgss = "m 1 " + std::to_string(int(wL)) + " " + std::to_string(int(wR)) + "\r";

    if (buffer_callback.size() <= 5)
    {
        buffer_callback.insert(buffer_callback.begin(), msgss);
        //ROS_INFO("move_motors_callback: Sending motor command: wL = %f, wR = %f", wL, wR);
    }
    else
    {
        ROS_INFO("move_motors_callback: OverStack cmd: %i", int(buffer_callback.size()));
    }

    // Publish motors data in a topic, for debuging
    motors_pub.publish(motors_msg);
}

/**
 * start_serial_communication
 *
 * This function stops Board messages and send reset command.
 */
void start_serial_communication(void)
{
    // Send commands to stop sending messages
    ROS_INFO("start_serial_communication: stoping prev messages");
    ser.write("if 0\r");
    ser.flushOutput();
    ser.write("sa 0\r");
    ser.flushOutput();
    ser.readline(ser.available());
    ser.flushInput();
    usleep(microseconds * 5);

    // Reset Board
    ROS_INFO("start_serial_communication: reseting");
    ser.write("rt\r");
    ser.flushOutput();

    // Reading Timestamp in a loop
    ROS_INFO("start_serial_communication: reading timestamp");
    bool reseted = false;
    while (!reseted and ros::ok())
    {
        if (ser.available())
        {
            std::string line_start = ser.read(1);
            //ROS_INFO_STREAM("line_strat: " << line_start);

            if (line_start == "#") // Wait for start message and read some values
            {
                // Reading stamp time from Serial input
                std::string data_stamp = ser.readline();
                ser.flushInput();

                // Stores data in a vector of big integers
                std::vector<uint64_t> vd;
                uint64_t d = 0;
                std::stringstream ss(data_stamp);
                while (ss >> d)
                    vd.push_back(d);

                // Apply Bit shifting to get complete number
                uint64_t t_board = (vd[0] << 32) + vd[1];

                // Time stamp of PC and Board
                double initial_stamp_PC = ros::Time::now().toSec();
                double initial_stamp_tiva = (double)(t_board) / 1000000;

                // Print obtained Time Stamp Data
                ROS_INFO_STREAM("data_stamp: " << clear_string(data_stamp));
                ROS_INFO("initial_stamp_PC: %f", initial_stamp_PC);
                ROS_INFO("initial_stamp_tiva: %f", initial_stamp_tiva);

                // Set 'board_is_ok' flag, allowing main loop to run
                board_is_ok = true;
                reseted = true;
            }
        }
        else
        {
            ROS_INFO("Waiting for reset message...");
        }
        //ros::spinOnce();
        usleep(microseconds);
    }

    ROS_INFO("start_serial_communication: configuring board");

    // Config Board to don't send message received confirmation
    ser.write("cf 0\r");
    ser.flushOutput();
    usleep(microseconds);

    // Config board to auto stop if not receives motor commands
    ser.write("mt 1\r");
    ser.flushOutput();
    usleep(microseconds);

    // Config board to disable Sensor Data Messages if this node don't send akn msg
    ser.write("dt 1\r");
    ser.flushOutput();
    usleep(microseconds);

    // Config board to send "Still Alive Messages" to PC
    ser.write("sa 1\r");
    ser.flushOutput();
    usleep(microseconds);

    // Config board to send IMU data: TODO, disable until get working IMUs for SDV robots
    ser.write("if 1\r");
    ser.flushOutput();
    usleep(microseconds);
    ROS_INFO("start_serial_communication: finished");
}

/**
 * open_serial_port
 *
 * Try to open received serial port or other predefined port. A port string can
 * be "/dev/ttyACM0" in Tiva Boards.
 * 
 * @param portx String with the name of port, e.g. "/dev/ttyACM0"
 * @return Integer, -1 if can't open received or other ports
 */
int open_serial_port(string portx)
{
    //string msg = "Trying to start serial communication in %s port at %i bauds";
    //msg = snprintf("Trying to start serial communication in %s port at %i bauds", portx, baudrate);
    ROS_INFO("Trying to start serial communication in %s port at %i bauds", portx.c_str(), baudrate);
    try
    {
        ser.setPort(portx);
        ser.setBaudrate(baudrate);
        serial::Timeout to = serial::Timeout::simpleTimeout(10);
        ser.setTimeout(to);
        ser.open();
    }
    catch (serial::IOException &e)
    {
        ROS_ERROR_STREAM("Unable to open port: " << ser.getPort());
    }
    return 1;
}

int CMD_IMU_Publisher(string args)
{
    vector<string> vdata = get_args(args);
    if (vdata.size() != 10)
    {
        ROS_INFO_STREAM("IMU: Error with received data size " << vdata.size());
        return -1;
    }

    //ROS_INFO("IMU: Correct data");
    double data[9];
    for (int i = 1; i < 10; i++)
    {
        data[i - 1] = stod(vdata.at(i));
        //ROS_INFO("IMU[%i] = %f", i, data[i-1]);
    }

    // IMU message: Angular Velocity and Linear Acceleration
    sensor_msgs::Imu imu_msg;
    imu_msg.header.stamp = ros::Time::now();

    // Linear acceleration
    imu_msg.linear_acceleration.x = data[0];
    imu_msg.linear_acceleration.y = data[1];
    imu_msg.linear_acceleration.z = data[2];
    imu_msg.linear_acceleration_covariance[0] = -1;

    // Angular velocity
    imu_msg.angular_velocity.x = data[3];
    imu_msg.angular_velocity.y = data[4];
    imu_msg.angular_velocity.z = data[5];
    imu_msg.angular_velocity_covariance[0] = -1;

    // Unknown orientation: set 0 element to -1
    imu_msg.orientation.x = -1;
    imu_msg.orientation_covariance[0] = -1;

    // Magnetic Data
    sensor_msgs::MagneticField mg_msg;
    mg_msg.header.stamp = ros::Time::now();
    mg_msg.magnetic_field.x = data[6];
    mg_msg.magnetic_field.y = data[7];
    mg_msg.magnetic_field.z = data[8];
    mg_msg.magnetic_field_covariance[0] = -1;

    // Publish messages
    imu_pub.publish(imu_msg);
    mag_pub.publish(mg_msg);
    return 1;
}

int CMD_SA_Message(string args)
{
    // Get Time Stamp of arrived message
    last_sa_msg_time_stamp = ros::Time::now().toSec();

    // Push a message in buffer
    string msg = "sk\r";
    buffer_callback.insert(buffer_callback.begin(), msg);

    return 1;
}

int CMD_Flexiforce_Message(string args)
{
    // String to vector
    vector<string> vdata = get_args(args);
    if (vdata.size() != 5)  // 5 diferent values
    {
        ROS_INFO_STREAM("Flexiforce: Error with received data size " << vdata.size());
        return -1;
    }

    // Get data from string massage
    uint32_t data[4];
    for (int i = 1; i < 4; i++)
    {
        data[i - 1] = stod(vdata.at(i));
    }

    // Init ROS message
    sdv_serial::flexiforce flx_msg;
    flx_msg.header.stamp = ros::Time::now();

    flx_msg.front_left = data[0];
    flx_msg.front_right = data[1];
    flx_msg.back_left = data[2];
    flx_msg.back_right = data[3];

    // Publish
    flexiforce_pub.publish(flx_msg);

    return 1;
}

int CMD_Empty_Function(string args)
{
    ROS_INFO("CMD_Empty_Function: TO-DO");
    return 1;
}

/**
 * main
 */
int main(int argc, char **argv)
{
    // Configuring node
    ros::init(argc, argv, "sdv_serial_node");
    ros::NodeHandle nh("~");

    // Reading ROS parameter: port
    if (ros::param::has("/sdv/board_port"))
    {
        nh.getParam("/sdv/board_port", port);
        ROS_INFO_STREAM("Got port value from ROS parameter: " << port);
    }

    // Reading ROS parameter: sdv_wheel_separation
    if (ros::param::has("/sdv/wheel_separation"))
    {
        double separation;
        nh.getParam("/sdv/wheel_separation", separation);
        if (separation != 0.0)
        {
            ROS_INFO_STREAM("Got '/sdv/wheel_separation' from ROS parameters: " << separation);
            B = separation;
            left_motor.set_wheel_separation(separation);
            right_motor.set_wheel_separation(separation);
        }
    }

    // Subscribing to topics
    ros::Subscriber move_motors_sub = nh.subscribe("/mobile_base/commands/velocity", 20, move_motors_callback);

    // Publishers
    imu_pub = nh.advertise<sensor_msgs::Imu>("/imu", 20);
    encoder_pub = nh.advertise<sdv_serial::encoder>("/encoder", 20);
    sdv_status_pub = nh.advertise<sdv_serial::sdv_status>("/sdv_status", 20);
    ultrasound_pub = nh.advertise<sdv_serial::ultrasound>("/ultrasound", 20);
    flexiforce_pub = nh.advertise<sdv_serial::flexiforce>("/flexiforce", 20);
    battery_pub = nh.advertise<sdv_serial::battery>("/battery", 20);
    tag_rfid_pub = nh.advertise<sdv_serial::tag_rfid>("/read_tag_rfid", 20);
    mag_pub = nh.advertise<sensor_msgs::MagneticField>("/mag", 20);
    motors_pub = nh.advertise<sdv_serial::motors>("/motors", 20);

    // Opening serial port
    if (open_serial_port(port) == -1)
    {
        ROS_ERROR("Error opening port. Exit from sdv_serial_node.");
        return -1;
    }

    if (ser.isOpen())
    {
        ROS_INFO_STREAM("Serial Port initialized --> " << ser.getPort());
    }
    else
    {
        ROS_ERROR_STREAM("Unable to open port: " << ser.getPort());
        return -1;
    }

    // Configuring ROS loop rate
    ros::Rate loop_rate(500);

    // Some variables...
    int i_cmd = 0;
    string line_start;

    // ROS Loop
    while (ros::ok())
    {
        // Start serial communication
        if (!board_is_ok)
        {
            start_serial_communication();
            ROS_INFO("sdv_serial_node entering in ROS loop");
        }

        // Search for available data in serial port
        if (ser.available())
        {
            // Store serial input in a String
            std::stringstream input_line;
            string last_char = "";
            string input_msg;
            while (last_char.compare("\n"))
            {
                last_char = ser.read(1);
                input_line << last_char;
            }
            input_msg = clear_string(input_line.str());;

            // Process String content
            if (input_msg.length() > 2 and input_msg.at(0) == '<')
            {
                // Get command code
                int cmd_code;
                stringstream ss;
                ss << input_msg.at(1);
                ss >> cmd_code;

                // Search in CMD Table and send to pointed function
                for (int i = 0; i < 10; i++)
                {
                    if (CMD_Table[i].intCmd == cmd_code)
                    {
                        CMD_Table[i].pfnCmd(input_msg);
                    }
                }
            }
        } // End of "if(ser.available())"

        // If buffer is not empty, write messages in serial port
        if (buffer_callback.size() > 0 and board_is_ok)
        {
            // Get element from vector
            string msg = buffer_callback.back();

            // Check that ins readable
            if (msg.find("rt") != string::npos)
            {
                ROS_INFO("Not complete msg...");
            }
            else // Write message in serial output
            {
                ser.write(msg);
                ser.flushOutput();
                buffer_callback.pop_back();
                //ROS_INFO_STREAM("Writing serial port --> " << msg);
            }
        }

        // TO-DO: Check last SA Stamp Time and change board status
        ros::spinOnce();
        loop_rate.sleep();

    } // End of ROS Loop
}

////////////////////////////////////////////////////////////////////////////////
//
// Utils
//
////////////////////////////////////////////////////////////////////////////////

/**
 * Constrain a value between a minimum value and maximum value.
 * 
 * @param value Value to be constrained
 * @param minval Min value. Must be smaller than maxvalue
 * @param maxval Max value. Must be greater than minvalue
 */
double constrain(double value, double minval, double maxval)
{
    double r = value;
    if (value > maxval)
        r = maxval;
    if (value < minval)
        r = minval;
    return r;
}

/**
 * Return a vector where every element is a argument in received data string.
 * 
 * @param data String with arguments
 */
vector<string> get_args(string data)
{
    stringstream ss(data);
    string d;
    vector<string> vdata;

    while (ss >> d)
        vdata.push_back(d);

    return vdata;
}

string clear_string(string s)
{
    s.erase( std::remove(s.begin(), s.end(), '\r'), s.end() );
    s.erase( std::remove(s.begin(), s.end(), '\n'), s.end() );

    return s;
}