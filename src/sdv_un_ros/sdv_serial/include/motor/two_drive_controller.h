#include <string>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/vector3.hpp>  // Correcto para ROS2
#include <motor/motor.h>
#include <sdv_msgs/msg/two_motors.hpp>   // Asegúrate de incluir el mensaje adecuado para publicar las velocidades de los motores

#pragma once

using namespace std;

class TwoDriveController
{
public:
    TwoDriveController();
    void setWheelSeparation(double distance);
    void setAxisWheelSeparation(double distance);
    std::string getCommandString(
    const geometry_msgs::msg::Vector3 &vel_linear, 
    const geometry_msgs::msg::Vector3 &vel_angular);  // Usa const para parámetros de referencia
    void setNodeHandle(rclcpp::Node::SharedPtr node);
    void setActualSpeeds(double speeds[]);
    void publishMotorRefSpeeds();
    void publishMotorActualSpeeds();

private:
    std::unique_ptr<Motor> left_motor;  // Cambié a unique_ptr
    std::unique_ptr<Motor> right_motor;  // Cambié a unique_ptr
    double r = 0.075;
    double B = 0.44010;
    double N = 3.2 * 4;
    double wL;
    double wR;
    
    rclcpp::Node::SharedPtr node;
    rclcpp::Publisher<sdv_msgs::msg::TwoMotors>::SharedPtr ref_speed_pub;  // Cambié el tipo de mensaje
    rclcpp::Publisher<sdv_msgs::msg::TwoMotors>::SharedPtr actual_speed_pub;  // Cambié el tipo de mensaje
};

