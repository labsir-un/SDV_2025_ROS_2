#include <string>
#include <rclcpp/rclcpp.hpp>  // Cambiar de ROS1 a ROS2
#include <geometry_msgs/msg/vector3.hpp>
#include <motor/motor.h>
#include "sdv_msgs/msg/four_motors.hpp"

#pragma once

using namespace std;

class FourDriveController
{
public:
    FourDriveController();
    void setWheelSeparation(double distance);
    void setAxisWheelSeparation(double distance);
    std::string getCommandString(const geometry_msgs::msg::Vector3& linear, const geometry_msgs::msg::Vector3& angular);
    void setNodeHandle(rclcpp::Node::SharedPtr node);  // Cambiar a rclcpp::Node::SharedPtr
    void setActualSpeeds(double speeds[]);
    void publishMotorRefSpeeds();
    void publishMotorActualSpeeds();

private:
    std::unique_ptr<Motor> back_left_motor;
    std::unique_ptr<Motor> back_right_motor;
    std::unique_ptr<Motor> front_left_motor;
    std::unique_ptr<Motor> front_right_motor;
    std::unique_ptr<Motor> motors[4];

    double wheel_radius = 0.05;
    double wheel_separation = 0.415;
    double wheel_axis_separation = 0.39;
    double N = 3.2 * 4;

    rclcpp::Node::SharedPtr node;  // Cambiar a rclcpp::Node::SharedPtr
    rclcpp::Publisher<sdv_msgs::msg::FourMotors>::SharedPtr ref_speed_pub;  // Cambiar tipo de Publisher
    rclcpp::Publisher<sdv_msgs::msg::FourMotors>::SharedPtr actual_speed_pub;  // Cambiar tipo de Publisher
};

