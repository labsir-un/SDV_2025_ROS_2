#!/usr/bin/env python
# -*- coding: utf-8 -*-
'''
This aplication allows to control a ROS Based Mobile Robot with the keyboard,
and needs the 'keyboard_publisher.py' script, that publishes 'keys' messages. 
This node converts messages from 'keys' topic to 'Twist' messages, that are 
sended over 'cmd_vel' topic, by default.

This aplication sends 'Twist' messages, that contains linear and angular 
speeds. Changes in speed values are made with acelerations (ramps).

Parameters that you can configure (speeds and accelerations) are:
 - linear_scale: sets linear speed in m/s
 - angular_scale: sets angular speed in rad/s
 - linear_accel: sets linear acceleration in m/s²
 - angular_accel: sets angular acceleration in rad/s²

Example of use:
rosrun sdv_scripts key_to_twist.py _linear_scale:=1.0 _angular_scale:=1.0
'''
#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rclpy
from rclpy.node import Node
import math
from std_msgs.msg import String
from geometry_msgs.msg import Twist

class KeyToTwist(Node):

    def __init__(self):
        super().__init__('keys_to_twist')

        # Key mapping
        self.key_mapping = {
            'w': [ 1,  0],  # Forward
            's': [-1,  0],  # Backward
            'a': [ 0,  1],  # Turn counterclockwise
            'd': [ 0, -1],  # Turn clockwise
            'x': [ 0,  0]   # Stop
        }

        # Publishers & Subscribers
        self.twist_pub = self.create_publisher(Twist, 'cmd_vel', 10)
        self.create_subscription(String, 'keys', self.keys_cb, 10)

        # Parameters (replaces fetch_param function)
        self.vel_scales = [
            self.declare_parameter('linear_scale', 0.1).value,
            self.declare_parameter('angular_scale', 0.1).value
        ]
        self.vel_ramps = [
            self.declare_parameter('linear_accel', 1.0).value,
            self.declare_parameter('angular_accel', 1.0).value
        ]

        # Twist messages
        self.target_twist = Twist()
        self.last_twist = Twist()
        self.last_send_time = self.get_clock().now()
        self.key_stamp = self.get_clock().now()

        # Timer to send twist messages at 20Hz
        self.create_timer(1.0 / 20, self.send_twist)

    def ramped_vel(self, v_prev, v_target, t_prev, t_now, ramp_rate):
        step = ramp_rate * (t_now - t_prev).nanoseconds * 1e-9  # Convert ns to seconds
        sign = 1.0 if v_target > v_prev else -1.0
        error = abs(v_target - v_prev)
        return v_target if error < step else v_prev + sign * step

    def ramped_twist(self, prev, target, t_prev, t_now):
        tw = Twist()
        tw.angular.z = self.ramped_vel(prev.angular.z, target.angular.z, t_prev, t_now, self.vel_ramps[0])
        tw.linear.x = self.ramped_vel(prev.linear.x, target.linear.x, t_prev, t_now, self.vel_ramps[1])
        return tw

    def send_twist(self):
        now = self.get_clock().now()
        self.last_twist = self.ramped_twist(self.last_twist, self.target_twist, self.last_send_time, now)
        self.last_send_time = now
        self.twist_pub.publish(self.last_twist)

    def keys_cb(self, msg):
        if len(msg.data) == 0 or msg.data[0] not in self.key_mapping:
            return  # Ignore unknown keys

        vels = self.key_mapping[msg.data[0]]
        self.target_twist.linear.x = vels[0] * self.vel_scales[0]
        self.target_twist.angular.z = vels[1] * self.vel_scales[1]
        self.key_stamp = self.get_clock().now()

    def zero_twist(self):
        self.target_twist.linear.x = 0.0
        self.target_twist.angular.z = 0.0

def main(args=None):
    rclpy.init(args=args)
    node = KeyToTwist()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

