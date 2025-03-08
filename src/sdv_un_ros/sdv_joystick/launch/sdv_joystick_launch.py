from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package="joy",
            executable="joy_node",
            name="joy_node"
        ),
        Node(
            package="joystick_agv",
            executable="joystick_agv_node",
            name="joystick_agv_node",
            output="screen"
        ),
    ])

