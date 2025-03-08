from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    return LaunchDescription([
        # Declare launch arguments
        DeclareLaunchArgument('linear_scale', default_value='0.5',
                              description='Scaling factor for linear velocity'),
        DeclareLaunchArgument('angular_scale', default_value='1',
                              description='Scaling factor for angular velocity'),
        DeclareLaunchArgument('cmd_vel', default_value='mobile_base/commands/velocity',
                              description='Command velocity topic'),
        DeclareLaunchArgument('namespace', default_value='',
                              description='Namespace for topics'),

        # Joy node
        Node(
            package='joy',
            executable='joy_node',
            name='joy_node',
            output='screen',
            parameters=[{'dev': '/dev/input/js0'}]  # Joy device parameter
        ),

        # joy2twist node
        Node(
            package='sdv_scripts',
            executable='joy2twist.py',
            name='joy2twist',
            output='screen',
            parameters=[{
                'linear_scale': LaunchConfiguration('linear_scale'),
                'angular_scale': LaunchConfiguration('angular_scale')
            }],
            remappings=[('/cmd_vel', ['/', LaunchConfiguration('namespace'), '/', LaunchConfiguration('cmd_vel')])]
        )
    ])

