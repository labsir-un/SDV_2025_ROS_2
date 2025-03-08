#include <string>
#include "geometry_msgs/msg/vector3.hpp"
#include "motor/two_drive_controller.h"
#include "motor/motor.h"
#include "sdv_msgs/msg/two_motors.hpp"
#include "tools.h"  
#include <cmath>  // Para funciones matemáticas como M_PI

using namespace std;

TwoDriveController::TwoDriveController()
{
    left_motor = std::make_unique<Motor>(r, false);  // Cambié a make_unique
    right_motor = std::make_unique<Motor>(r, true);  // Cambié a make_unique
}

std::string TwoDriveController::getCommandString(
    const geometry_msgs::msg::Vector3 &vel_linear, 
    const geometry_msgs::msg::Vector3 &vel_angular)
{
    string cmd;

    // Obtener los PWM de cada rueda
    wL = left_motor->getPwmPercent(vel_linear.x, vel_angular.z);
    wR = right_motor->getPwmPercent(vel_linear.x, vel_angular.z);

    // Limitar las velocidades de las ruedas
    wL = tools::constrain(wL, -40.0, 40.0);
    wR = tools::constrain(wR, -40.0, 40.0);

    // Almacenar los valores
    left_motor->setRefSpeed(wL);
    right_motor->setRefSpeed(wR);

    // Generar la cadena de comando
    cmd = "m 1 " + std::to_string(int(wL)) + " " + std::to_string(int(wR)) + "\r";

    return cmd;
}

void TwoDriveController::setWheelSeparation(double distance)
{
    left_motor->setWheelSeparation(distance);
    right_motor->setWheelSeparation(distance);
}

void TwoDriveController::setAxisWheelSeparation(double distance)
{
    left_motor->setAxisWheelSeparation(distance);
}

void TwoDriveController::setNodeHandle(rclcpp::Node::SharedPtr node)
{
    this->node = node;
    ref_speed_pub = node->create_publisher<sdv_msgs::msg::TwoMotors>("/motors/odom/two_motors/ref_speed", 20);
    actual_speed_pub = node->create_publisher<sdv_msgs::msg::TwoMotors>("/motors/odom/two_motors/actual_speed", 20);
}

void TwoDriveController::setActualSpeeds(double speeds[]) 
{
    left_motor->setActualSpeed(speeds[0]);
    right_motor->setActualSpeed(speeds[1]);
}

void TwoDriveController::publishMotorRefSpeeds()
{
    // Crear el mensaje a publicar en el topic de motores
    sdv_msgs::msg::TwoMotors motors_msg;
    motors_msg.header.stamp = node->now();  // Usar el tiempo del nodo en lugar de ros::Time
    motors_msg.left = left_motor->getRefSpeedRps();
    motors_msg.right = right_motor->getRefSpeedRps();
    ref_speed_pub->publish(motors_msg);
}

void TwoDriveController::publishMotorActualSpeeds()
{
    // Crear el mensaje a publicar en el topic de motores
    sdv_msgs::msg::TwoMotors motors_msg;
    motors_msg.header.stamp = node->now();  // Usar el tiempo del nodo en lugar de ros::Time
    motors_msg.left = left_motor->getActualSpeedRps();
    motors_msg.right = right_motor->getActualSpeedRps();
    actual_speed_pub->publish(motors_msg);
}

