#include <string>
#include "Eigen/Dense"
#include "geometry_msgs/msg/vector3.hpp"
#include "motor/four_drive_controller.h"
#include "motor/motor.h"
#include "sdv_msgs/msg/four_motors.hpp"  // Asegurarse de que la ruta sea correcta
#include "tools.h"  

#define _USE_MATH_DEFINES // for C++
#include <cmath>

using namespace Eigen;
using namespace std;

FourDriveController::FourDriveController()
{
    back_left_motor = std::make_unique<Motor>(wheel_radius, false);
    back_right_motor = std::make_unique<Motor>(wheel_radius, true);
    front_left_motor = std::make_unique<Motor>(wheel_radius, false);
    front_right_motor = std::make_unique<Motor>(wheel_radius, true);
	
	motors[0] = std::move(back_left_motor);
	motors[1] = std::move(back_right_motor);
	motors[2] = std::move(front_left_motor);
	motors[3] = std::move(front_right_motor);
}

std::string FourDriveController::getCommandString(
    const geometry_msgs::msg::Vector3 &linear, 
    const geometry_msgs::msg::Vector3 &angular)
{
    std::string cmd = "";

    // Inverse Kinematics of Mecanum Platform. Using extra variables for simplicity
    double a = wheel_axis_separation / 2.0;
    double b = wheel_separation / 2.0;
    double r = wheel_radius;

    VectorXd v(3);
    v(0) = linear.x;
    v(1) = linear.y;
    v(2) = angular.z;

    MatrixXd m(4, 3);
    m << 1, -1, -(a + b),
         1,  1,  (a + b),
         1,  1, -(a + b),
         1, -1,  (a + b);

    VectorXd w_wheels(4);
    w_wheels << (1/r) * m * v;

    // Converting from rad/s to rps
    w_wheels << w_wheels / (2 * M_PI);

    // Storing values
    front_left_motor->setRefSpeed(w_wheels(0));
    front_right_motor->setRefSpeed(w_wheels(1));
    back_left_motor->setRefSpeed(w_wheels(2));
    back_right_motor->setRefSpeed(w_wheels(3));

    // Generate command string for Tiva board
    cmd = "m 1 " + std::to_string(back_left_motor->getRefSpeedRps())
           + " " + std::to_string(back_right_motor->getRefSpeedRps())
           + " " + std::to_string(front_left_motor->getRefSpeedRps())
           + " " + std::to_string(front_right_motor->getRefSpeedRps())
           + "\r";

    return cmd;
}

void FourDriveController::setWheelSeparation(double distance)
{
    wheel_separation = distance;
    for(uint8_t i = 0; i < 4; i++)
    {
        motors[i]->setWheelSeparation(distance);
    }
}

void FourDriveController::setAxisWheelSeparation(double distance)
{
    wheel_axis_separation = distance;
    for(uint8_t i = 0; i < 4; i++)
    {
        motors[i]->setAxisWheelSeparation(distance);
    }
}

void FourDriveController::setNodeHandle(rclcpp::Node::SharedPtr node)  // Cambiar a rclcpp::Node::SharedPtr
{
    this->node = node;
    // Publicadores para los mensajes correspondientes
    ref_speed_pub = node->create_publisher<sdv_msgs::msg::FourMotors>("/motors/odom/four_motors/ref_speed", 20);
    actual_speed_pub = node->create_publisher<sdv_msgs::msg::FourMotors>("/motors/odom/four_motors/actual_speed", 20);

}

void FourDriveController::setActualSpeeds(double speeds[]) 
{
    for(uint8_t i = 0; i < 4; i++)
    {
        motors[i]->setActualSpeed(speeds[i]);
    }
}

void FourDriveController::publishMotorRefSpeeds()
{
    // Message to publish in motors topic
    sdv_msgs::msg::FourMotors motors_msg;  // Cambiar a msg::FourMotors
    motors_msg.header.stamp = rclcpp::Time();  // Usar rclcpp::Time para ROS2
    motors_msg.back_left_rps = back_left_motor->getRefSpeedRps();
    motors_msg.back_right_rps = back_right_motor->getRefSpeedRps();
    motors_msg.front_left_rps = front_left_motor->getRefSpeedRps();
    motors_msg.front_right_rps = front_right_motor->getRefSpeedRps();
    ref_speed_pub->publish(motors_msg);  // Usar método de publicación de ROS2
}

void FourDriveController::publishMotorActualSpeeds()
{
    // Message to publish in motors topic
    sdv_msgs::msg::FourMotors motors_msg;  // Cambiar a msg::FourMotors
    motors_msg.header.stamp = rclcpp::Time();  // Usar rclcpp::Time para ROS2
    motors_msg.back_left_rps = back_left_motor->getActualSpeedRps();
    motors_msg.back_right_rps = back_right_motor->getActualSpeedRps();
    motors_msg.front_left_rps = front_left_motor->getActualSpeedRps();
    motors_msg.front_right_rps = front_right_motor->getActualSpeedRps();
    actual_speed_pub->publish(motors_msg);  // Usar método de publicación de ROS2
}

