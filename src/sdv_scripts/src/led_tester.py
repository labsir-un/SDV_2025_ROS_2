#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sdv_msgs.msg import LED

class LedTesterNode(Node):
    def __init__(self):
        super().__init__('led_tester_node')
        self.led_pub = self.create_publisher(LED, '/led', 5)
        # Timer at 10 Hz (0.1 seconds period)
        self.timer_period = 0.1  
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        # Set up initial parameters
        self.rate = 10.0
        self.red = 0.0
        self.green = 0.0
        self.blue = 0.0
        self.steps = [0.0, 0.0, 0.0]
        self.current_step = 0
        self.total_steps = int(self.rate * 5)  # 5 seconds worth of steps at 10 Hz
        
        self.current_trans = 0

        # Transition definitions: [transition_index, init_color_index, final_color_index]
        self.transitions = {
            "black_to_red": [0, 9, 1],
            "red_to_green": [1, 1, 2],
            "green_to_blue": [2, 2, 3],
            "blue_to_red": [3, 3, 1],
            "red_to_cyan": [4, 1, 4],
            "cyan_to_purple": [5, 4, 5],
            "purple_to_yellow": [6, 5, 6],
            "yellow_to_orange": [7, 6, 7],
            "orange_to_white": [8, 7, 8],
            "white_to_black": [9, 8, 9],
            "balck_to_black": [10, 9, 9],
        }

        # Color definitions: [color_index, red, green, blue]
        self.colors = {
            "red":    [1, 255, 0, 0],
            "green":  [2, 0, 255, 0],
            "blue":   [3, 0, 0, 255],
            "cyan":   [4, 0, 255, 255],
            "purple": [5, 255, 0, 255],
            "yellow": [6, 255, 255, 0],
            "orange": [7, 255, 165, 0],
            "white":  [8, 255, 255, 255],
            "black":  [9, 0, 0, 0],
        }

        self.get_steps()

    def send_led_message(self, r, g, b):
        led_msg = LED()
        # If the message has a header, set its timestamp.
        if hasattr(led_msg, 'header'):
            led_msg.header.stamp = self.get_clock().now().to_msg()
        led_msg.red = int(r)
        led_msg.green = int(g)
        led_msg.blue = int(b)
        self.led_pub.publish(led_msg)

    def get_steps(self):
        """Calculate the incremental steps for transitioning from the initial color to the final color."""
        init_color = None
        final_color = None
        init_color_rgb = None
        final_color_rgb = None

        # Identify the transition based on the current transition index.
        for key, value in self.transitions.items():
            if value[0] == self.current_trans:
                init_color = value[1]
                final_color = value[2]
                break

        # Look up the corresponding RGB values for the initial and final colors.
        for color_name, color_values in self.colors.items():
            if color_values[0] == init_color:
                init_color_rgb = [color_values[1], color_values[2], color_values[3]]
            if color_values[0] == final_color:
                final_color_rgb = [color_values[1], color_values[2], color_values[3]]

        if init_color_rgb is None or final_color_rgb is None:
            self.get_logger().error("Could not find color values for transition.")
            return

        # Calculate steps for each RGB channel.
        for i in range(3):
            self.steps[i] = (final_color_rgb[i] - init_color_rgb[i]) / self.total_steps

        # Reset the current color values to the starting color.
        self.red, self.green, self.blue = init_color_rgb[0], init_color_rgb[1], init_color_rgb[2]
        self.get_logger().info(
            f"Transition from {init_color_rgb} to {final_color_rgb} with steps {self.steps}"
        )

    def timer_callback(self):
        # Publish the current LED color.
        self.send_led_message(self.red, self.green, self.blue)

        # Update the color values by adding the incremental steps.
        self.red += self.steps[0]
        self.green += self.steps[1]
        self.blue += self.steps[2]

        self.current_step += 1

        # Once the current transition completes, update to the next transition.
        if self.current_step >= self.total_steps:
            self.current_trans += 1
            if self.current_trans >= len(self.transitions):
                self.current_trans = 0
            self.get_steps()
            self.current_step = 0

def main(args=None):
    rclpy.init(args=args)
    node = LedTesterNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
