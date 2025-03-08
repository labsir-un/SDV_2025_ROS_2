#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/empty.hpp"

#include "sensor_msgs/msg/imu.hpp"
#include "sensor_msgs/msg/magnetic_field.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "geometry_msgs/msg/twist_with_covariance.hpp"
#include "geometry_msgs/msg/twist_with_covariance_stamped.hpp"
#include "geometry_msgs/msg/vector3.hpp"

// sdv_serial messages
#include "sdv_serial/msg/battery.hpp"
#include "sdv_serial/msg/encoder.hpp"
#include "sdv_serial/msg/flexiforce.hpp"
#include "sdv_serial/msg/motors.hpp"
#include "sdv_serial/msg/sdv_status.hpp"
#include "sdv_serial/msg/tag_rfid.hpp"
#include "sdv_serial/msg/ultrasound.hpp"

#include "rclcpp/rclcpp.hpp"

// Librería para comunicación serial
#include <serial_driver/serial_driver.hpp>
#include "io_context/io_context.hpp"
#include "serial_driver/serial_port.hpp"


// Librería para la clase Motor (asumiendo que ya está portada a ROS 2)
#include "motor/motor.h"

// Librerías estándar
#include <string>
#include <sstream>
#include <vector>
#include <chrono>
#include <thread>
#include <algorithm>


using namespace std::chrono_literals;

class SDVSerialNode : public rclcpp::Node
{
public:
  SDVSerialNode() : Node("sdv_serial_node"), board_is_ok_(false), baudrate_(115200), 
                    io_context_(std::make_shared<drivers::IoContext>())
  {
    // Declarar y obtener parámetros (por ejemplo, el puerto de comunicación)
    this->declare_parameter<std::string>("board_port", "/dev/ttyACM0");
    this->get_parameter("board_port", port_);

    // Crear publishers
    imu_pub_           = this->create_publisher<sensor_msgs::msg::Imu>("imu", 20);
    encoder_pub_       = this->create_publisher<sdv_serial::msg::Encoder>("encoder", 20);
    sdv_status_pub_    = this->create_publisher<sdv_serial::msg::SdvStatus>("sdv_status", 20);
    ultrasound_pub_    = this->create_publisher<sdv_serial::msg::Ultrasound>("ultrasound", 20);
    flexiforce_pub_    = this->create_publisher<sdv_serial::msg::Flexiforce>("flexiforce", 20);
    battery_pub_       = this->create_publisher<sdv_serial::msg::Battery>("battery", 20);
    tag_rfid_pub_      = this->create_publisher<sdv_serial::msg::TagRfid>("read_tag_rfid", 20);
    mag_pub_           = this->create_publisher<sensor_msgs::msg::MagneticField>("mag", 20);
    motors_pub_        = this->create_publisher<sdv_serial::msg::Motors>("motors", 20);

    // Crear subscriber para recibir comandos de velocidad (tipo Twist)
    twist_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
      "/mobile_base/commands/velocity", 20,
      std::bind(&SDVSerialNode::move_motors_callback, this, std::placeholders::_1));

    // Inicializar objetos Motor
    double r = 0.075;
    left_motor_  = std::make_shared<motor::Motor>(r, false);
    right_motor_ = std::make_shared<motor::Motor>(r, true);

    // Inicializar SerialDriver
    serial_driver_ = std::make_shared<drivers::serial_driver::SerialDriver>(*io_context_);
    
    // Configurar puerto serial
    drivers::serial_driver::SerialPortConfig config;
    config.get_baud_rate() = baudrate_;
    
    try {
      serial_driver_->init_port(port_, config);
      
      if (serial_driver_->port()->is_open()) {
        RCLCPP_INFO(this->get_logger(), "Puerto serial inicializado -> %s", port_.c_str());
      } else {
        RCLCPP_ERROR(this->get_logger(), "No se pudo abrir el puerto: %s", port_.c_str());
        rclcpp::shutdown();
        return;
      }
    } catch (const std::exception & e) {
      RCLCPP_ERROR(this->get_logger(), "Error al abrir el puerto: %s", e.what());
      rclcpp::shutdown();
      return;
    }

    // Crear timer para el ciclo principal de comunicación serial (a 500 Hz, ~2ms de periodo)
    timer_ = this->create_wall_timer(2ms, std::bind(&SDVSerialNode::process_serial, this));

    RCLCPP_INFO(this->get_logger(), "sdv_serial_node iniciado.");
  }

private:
  // Variables miembro
  std::shared_ptr<io_context::IoContext> io_context_;
  std::shared_ptr<drivers::serial_driver::SerialDriver> serial_driver_;
  std::string port_;
  int baudrate_;
  bool board_is_ok_;
  std::vector<std::string> buffer_callback_;

  // Publishers y Subscriber
  rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imu_pub_;
  rclcpp::Publisher<sensor_msgs::msg::MagneticField>::SharedPtr mag_pub_;
  rclcpp::Publisher<sdv_serial::msg::Encoder>::SharedPtr encoder_pub_;
  rclcpp::Publisher<sdv_serial::msg::SdvStatus>::SharedPtr sdv_status_pub_;
  rclcpp::Publisher<sdv_serial::msg::Ultrasound>::SharedPtr ultrasound_pub_;
  rclcpp::Publisher<sdv_serial::msg::Flexiforce>::SharedPtr flexiforce_pub_;
  rclcpp::Publisher<sdv_serial::msg::Battery>::SharedPtr battery_pub_;
  rclcpp::Publisher<sdv_serial::msg::TagRfid>::SharedPtr tag_rfid_pub_;
  rclcpp::Publisher<sdv_serial::msg::Motors>::SharedPtr motors_pub_;

  rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr twist_sub_;

  // Timer para el ciclo principal
  rclcpp::TimerBase::SharedPtr timer_;

  // Objetos Motor
  std::shared_ptr<motor::Motor> left_motor_;
  std::shared_ptr<motor::Motor> right_motor_;

  // Otros parámetros de comunicación
  unsigned int microseconds_ = 100000;
  double last_sa_msg_time_stamp_ = 0.0;

  // --- CALLBACK DE RECEPCIÓN DE COMANDOS DE VELOCIDAD ---
  void move_motors_callback(const geometry_msgs::msg::Twist::SharedPtr cmd)
  {
    if (!board_is_ok_) {
      RCLCPP_INFO(this->get_logger(), "move_motors_callback: La placa no está lista");
      return;
    }

    // Preparar mensaje para publicar el estado de motores
    auto motors_msg = sdv_serial::msg::Motors();
    motors_msg.header.stamp = this->now();

    double linear  = cmd->linear.x;
    double angular = cmd->angular.z;

    // Calcular porcentaje PWM para cada rueda usando la clase Motor
    double wL = left_motor_->get_pwm_percent(linear, angular);
    double wR = right_motor_->get_pwm_percent(linear, angular);

    // Limitar valores entre -40 y 40
    wL = constrain(wL, -40.0, 40.0);
    wR = constrain(wR, -40.0, 40.0);

    // Rellenar el mensaje
    motors_msg.left_percent  = static_cast<int>(wL);
    motors_msg.right_percent = static_cast<int>(wR);

    // Generar cadena de comando para enviar por serial
    std::stringstream ss;
    ss << "m 1 " << static_cast<int>(wL) << " " << static_cast<int>(wR) << "\r";
    std::string msg_str = ss.str();

    if (buffer_callback_.size() <= 5) {
      buffer_callback_.insert(buffer_callback_.begin(), msg_str);
    } else {
      RCLCPP_INFO(this->get_logger(), "move_motors_callback: Exceso de comandos en buffer: %zu", buffer_callback_.size());
    }

    // Publicar mensaje (para depuración)
    motors_pub_->publish(motors_msg);
  }

  // --- FUNCION PARA ABRIR EL PUERTO SERIAL ---
  int open_serial_port(const std::string &portx)
  {
    RCLCPP_INFO(this->get_logger(), "Intentando iniciar comunicación serial en %s a %d baudios", portx.c_str(), baudrate_);
    try {
      ser_.setPort(portx);
      ser_.setBaudrate(baudrate_);
      serial::Timeout to = serial::Timeout::simpleTimeout(10);
      ser_.setTimeout(to);
      ser_.open();
    } catch (serial::IOException &e) {
      RCLCPP_ERROR(this->get_logger(), "No se pudo abrir el puerto: %s", portx.c_str());
      return -1;
    }
    return 1;
  }

  // --- FUNCION PARA INICIAR LA COMUNICACION SERIAL ---
  void start_serial_communication()
  {
    RCLCPP_INFO(this->get_logger(), "start_serial_communication: Deteniendo mensajes previos");
    ser_.write("if 0\r");
    ser_.flush();
    ser_.write("sa 0\r");
    ser_.flush();
    ser_.read(ser_.available());
    ser_.flush();
    std::this_thread::sleep_for(std::chrono::microseconds(microseconds_ * 5));

    RCLCPP_INFO(this->get_logger(), "start_serial_communication: Reiniciando placa");
    ser_.write("rt\r");
    ser_.flush();

    RCLCPP_INFO(this->get_logger(), "start_serial_communication: Leyendo timestamp");
    bool reseted = false;
    while (!reseted && rclcpp::ok()) {
      if (ser_.available()) {
        std::string line_start = ser_.read(1);
        if (line_start == "#") {
          std::string data_stamp = ser_.readline();
          ser_.flush();
          std::vector<uint64_t> vd;
          uint64_t d = 0;
          std::stringstream ss(data_stamp);
          while (ss >> d) {
            vd.push_back(d);
          }
          if (vd.size() >= 2) {
            uint64_t t_board = (vd[0] << 32) + vd[1];
            double initial_stamp_PC   = this->now().seconds();
            double initial_stamp_tiva = static_cast<double>(t_board) / 1000000.0;
            RCLCPP_INFO(this->get_logger(), "data_stamp: %s", clear_string(data_stamp).c_str());
            RCLCPP_INFO(this->get_logger(), "initial_stamp_PC: %f", initial_stamp_PC);
            RCLCPP_INFO(this->get_logger(), "initial_stamp_tiva: %f", initial_stamp_tiva);
            board_is_ok_ = true;
            reseted = true;
          }
        }
      } else {
        RCLCPP_INFO(this->get_logger(), "Esperando mensaje de reinicio...");
      }
      std::this_thread::sleep_for(std::chrono::microseconds(microseconds_));
    }

    RCLCPP_INFO(this->get_logger(), "start_serial_communication: Configurando placa");
    ser_.write("cf 0\r");
    ser_.flush();
    std::this_thread::sleep_for(std::chrono::microseconds(microseconds_));
    ser_.write("mt 1\r");
    ser_.flush();
    std::this_thread::sleep_for(std::chrono::microseconds(microseconds_));
    ser_.write("dt 1\r");
    ser_.flush();
    std::this_thread::sleep_for(std::chrono::microseconds(microseconds_));
    ser_.write("sa 1\r");
    ser_.flush();
    std::this_thread::sleep_for(std::chrono::microseconds(microseconds_));
    ser_.write("if 1\r");
    ser_.flush();
    std::this_thread::sleep_for(std::chrono::microseconds(microseconds_));
    RCLCPP_INFO(this->get_logger(), "start_serial_communication: Finalizado");
  }

  // --- TIMER CALLBACK: CICLO PRINCIPAL DE COMUNICACIÓN SERIAL ---
  void process_serial()
  {
    if (!board_is_ok_) {
      start_serial_communication();
      RCLCPP_INFO(this->get_logger(), "sdv_serial_node ingresando al ciclo principal");
    }

    // Procesar datos entrantes del puerto serial
    if (ser_.available()) {
      std::stringstream input_line;
      std::string last_char = "";
      std::string input_msg;
      // Leer hasta encontrar salto de línea
      while (last_char != "\n" && ser_.available()) {
        last_char = ser_.read(1);
        input_line << last_char;
      }
      input_msg = clear_string(input_line.str());
      if (input_msg.length() > 2 && input_msg[0] == '<') {
        // Extraer el código de comando (asumimos que está en el segundo caracter)
        int cmd_code = input_msg[1] - '0';
        // Según el código, llamar a la función correspondiente
        switch (cmd_code) {
          case 1:
            CMD_IMU_Publisher(input_msg);
            break;
          case 5:
            CMD_Flexiforce_Message(input_msg);
            break;
          case 8:
            CMD_SA_Message(input_msg);
            break;
          default:
            RCLCPP_INFO(this->get_logger(), "Código de comando desconocido: %d", cmd_code);
            break;
        }
      }
    }

    // Enviar mensajes pendientes en buffer
    if (!buffer_callback_.empty() && board_is_ok_) {
      std::string msg = buffer_callback_.back();
      if (msg.find("rt") != std::string::npos) {
        RCLCPP_INFO(this->get_logger(), "Mensaje incompleto...");
      } else {
        ser_.write(msg);
        ser_.flush();
        buffer_callback_.pop_back();
      }
    }
  }

  // --- FUNCIONES DE COMANDOS (implementación simplificada) ---

  int CMD_IMU_Publisher(const std::string &args)
  {
    std::vector<std::string> vdata = get_args(args);
    if (vdata.size() != 10) {
      RCLCPP_INFO(this->get_logger(), "IMU: Tamaño de datos recibido incorrecto: %zu", vdata.size());
      return -1;
    }
    double data[9];
    for (int i = 1; i < 10; i++) {
      data[i - 1] = std::stod(vdata.at(i));
    }
    auto imu_msg = sensor_msgs::msg::Imu();
    imu_msg.header.stamp = this->now();
    imu_msg.linear_acceleration.x = data[0];
    imu_msg.linear_acceleration.y = data[1];
    imu_msg.linear_acceleration.z = data[2];
    imu_msg.linear_acceleration_covariance[0] = -1;
    imu_msg.angular_velocity.x = data[3];
    imu_msg.angular_velocity.y = data[4];
    imu_msg.angular_velocity.z = data[5];
    imu_msg.angular_velocity_covariance[0] = -1;
    // Orientación desconocida
    imu_msg.orientation.x = -1;
    imu_msg.orientation_covariance[0] = -1;

    auto mg_msg = sensor_msgs::msg::MagneticField();
    mg_msg.header.stamp = this->now();
    mg_msg.magnetic_field.x = data[6];
    mg_msg.magnetic_field.y = data[7];
    mg_msg.magnetic_field.z = data[8];
    mg_msg.magnetic_field_covariance[0] = -1;

    imu_pub_->publish(imu_msg);
    mag_pub_->publish(mg_msg);
    return 1;
  }

  int CMD_SA_Message(const std::string &args)
  {
    last_sa_msg_time_stamp_ = this->now().seconds();
    std::string msg = "sk\r";
    buffer_callback_.insert(buffer_callback_.begin(), msg);
    return 1;
  }

  int CMD_Flexiforce_Message(const std::string &args)
  {
    std::vector<std::string> vdata = get_args(args);
    if (vdata.size() != 5) {
      RCLCPP_INFO(this->get_logger(), "Flexiforce: Tamaño de datos recibido incorrecto: %zu", vdata.size());
      return -1;
    }
    uint32_t data[4];
    for (int i = 1; i < 5; i++) {
      data[i - 1] = static_cast<uint32_t>(std::stod(vdata.at(i)));
    }
    auto flx_msg = sdv_serial::msg::Flexiforce();
    flx_msg.header.stamp = this->now();
    flx_msg.front_left  = data[0];
    flx_msg.front_right = data[1];
    flx_msg.back_left   = data[2];
    flx_msg.back_right  = data[3];
    flexiforce_pub_->publish(flx_msg);
    return 1;
  }

  // --- FUNCIONES DE UTILIDAD ---

  // Limitar un valor entre un mínimo y un máximo
  double constrain(double value, double minval, double maxval)
  {
    if (value > maxval) return maxval;
    if (value < minval) return minval;
    return value;
  }

  // Separar una cadena en argumentos
  std::vector<std::string> get_args(const std::string &data)
  {
    std::stringstream ss(data);
    std::string item;
    std::vector<std::string> tokens;
    while (ss >> item) {
      tokens.push_back(item);
    }
    return tokens;
  }

  // Eliminar caracteres de nueva línea y retorno de carro de una cadena
  std::string clear_string(const std::string &s)
  {
    std::string result = s;
    result.erase(std::remove(result.begin(), result.end(), '\r'), result.end());
    result.erase(std::remove(result.begin(), result.end(), '\n'), result.end());
    return result;
  }
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<SDVSerialNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
