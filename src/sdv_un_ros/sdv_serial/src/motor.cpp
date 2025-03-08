#include <cmath>
#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <motor/motor.h>
#include "sdv_msgs/msg/two_motors.hpp"
#include "sdv_msgs/msg/four_motors.hpp"

Motor::Motor(double r, bool right_motor)
{
    wheel_radius = r;
    setRightMotor(right_motor);
}

Motor::Motor()
{
    wheel_radius = 0.075;
    setRightMotor(true);
}

double Motor::getRadSecs(double x, double z)
{
    double vx = x * 0.9;
    double om = z * 1.8;
    double r = wheel_radius;
    double B = wheel_separation;
    double w_rad_s = (vx / r) + (motorPosition() * ((om * B) / (2.0 * r)));
    return w_rad_s;
}

double Motor::getPwmPercent(double x, double z)
{
    double w_rad_s = getRadSecs(x, z);
    if (w_rad_s >= 0.0)
        w_rad_s = 80.0 * w_rad_s / N + 10.0;
    else
        w_rad_s = 80.0 * w_rad_s / N - 10.0;

    last_speed_time_stamp = rclcpp::Clock().now().seconds();  // Migrado desde ROS 1
    return w_rad_s;
}

double Motor::getWheelRadius()
{
    return 0;
}

void Motor::setWheelSeparation(double sep)
{
    wheel_separation = sep;
}

void Motor::setAxisWheelSeparation(double sep)
{
    axis_wheel_separation = sep;
}

double Motor::motorPosition()
{
    return is_right_motor ? 1.0 : -1.0;
}

void Motor::setRightMotor(bool right_motor)
{
    is_right_motor = right_motor;
}

void Motor::setRefSpeed(double speed_rps)
{
    ref_speed_rps = speed_rps;
}

void Motor::setActualSpeed(double speed_rps)
{
    actual_speed_rps = speed_rps;
}

double Motor::getRefSpeedRps()
{
    return ref_speed_rps;
}

double Motor::getActualSpeedRps()
{
    return actual_speed_rps;
}

