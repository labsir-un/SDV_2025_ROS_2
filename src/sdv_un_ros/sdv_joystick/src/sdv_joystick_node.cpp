#include <string>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/int32.hpp>
#include <sensor_msgs/msg/joy.hpp>
#include <iostream>
#include <sstream>

using std::placeholders::_1;

class JoystickAGVNode : public rclcpp::Node
{
public:
    JoystickAGVNode() : Node("joystick_agv_node"), on_off_joystick(false), enable(0), wL(0.0), wR(0.0)
    {
        joy_sub_ = this->create_subscription<sensor_msgs::msg::Joy>(
            "joy", 20, std::bind(&JoystickAGVNode::joy_callback, this, _1));

        serial_pub_ = this->create_publisher<std_msgs::msg::String>("write_serial", 20);

        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(40),  // 25 Hz loop rate
            std::bind(&JoystickAGVNode::publish_command, this));
    }

private:
    void joy_callback(const sensor_msgs::msg::Joy::SharedPtr joy_msg)
    {
        float forward, rotation;
        float B = 1.0;
        float r = 1.0;

        if (joy_msg->buttons[0] == 1)
        {
            forward = joy_msg->axes[1];       // Define a % of forward velocity
            rotation = -1 * joy_msg->axes[0]; // Define % of turn
        }
        else
        {
            forward = 0;
            rotation = 0;
        }

        // Calculate the % of PWM for motors
        if (rotation == 0)
        {
            wL = forward;
            wR = wL;
        }
        else
        {
            wL = (2 * forward / r - rotation * B / r) / 2;
            wR = rotation * B / r + wL;
            if (forward == 0)
            {
                wL *= 2;
                wR = -wL;
            }
            else
            {
                wL /= 1.5;
                wR /= 1.5;
            }
        }

        // Define 3 levels of speed
        double duty = (0.5 * (joy_msg->axes[2] + 1)) * 0.6;
        wL *= duty;
        wR *= duty;

        wL = (wL < 0) ? (80 * wL - 10) : (80 * wL + 10);
        wR = (wR < 0) ? (80 * wR - 10) : (80 * wR + 10);

        enable = joy_msg->buttons[0];
        if (joy_msg->buttons[1] == 1)
        {
            on_off_joystick = !on_off_joystick;
        }
    }

    void publish_command()
    {
        if (on_off_joystick)
        {
            std_msgs::msg::String msg;
            std::stringstream command;
            command << "m " << enable << " " << wR << " " << wL;
            msg.data = command.str();

            RCLCPP_INFO(this->get_logger(), "%s", msg.data.c_str());
            serial_pub_->publish(msg);
        }
    }

    bool on_off_joystick;
    int enable;
    float wL, wR;

    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr joy_sub_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr serial_pub_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<JoystickAGVNode>());
    rclcpp::shutdown();
    return 0;
}

