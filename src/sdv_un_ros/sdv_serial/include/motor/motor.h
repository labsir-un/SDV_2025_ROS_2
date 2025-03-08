
#pragma once

class Motor
{

public:
    Motor();
    Motor(double r, bool right_motor);
    double getRadSecs(double x, double z);
    double getPwmPercent(double x, double z);
    double getWheelRadius();
    double getRefSpeedRps();
    double getActualSpeedRps();
    void setWheelSeparation(double sep);
    void setAxisWheelSeparation(double sep);
    void setRightMotor(bool is_right_motor);
    void setRefSpeed(double speed_rps);
    void setActualSpeed(double speed_rps);

private:
    double const N = 3.2 * 4.0;

    bool is_right_motor = true;
    double wheel_radius = 0.1;
    double wheel_separation = 0.44010;
    double axis_wheel_separation = 0.1;
    double last_speed_time_stamp = 0;
    double ref_speed_rps = 0.0;
    double actual_speed_rps = 0.0;
    
    double motorPosition();
};
