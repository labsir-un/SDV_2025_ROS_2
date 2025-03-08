import launch
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="sick_scan_xd",
            executable="sick_generic_caller",
            name="sick_lidar",
            output="screen",
            parameters=[{
                "hostname": "192.168.0.1",
                "frame_id": "laser",
                "sensor_type": "lms1xx"  # Ensure correct model type
            }]
        )
    ])

