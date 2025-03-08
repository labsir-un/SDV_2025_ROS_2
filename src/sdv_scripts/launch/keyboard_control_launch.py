from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    return LaunchDescription([
        # Declare launch arguments
        DeclareLaunchArgument('linear_scale', default_value='0.4',
                              description='Scaling factor for linear velocity'),
        DeclareLaunchArgument('angular_scale', default_value='0.4',
                              description='Scaling factor for angular velocity'),
        DeclareLaunchArgument('linear_accel', default_value='0.5',
                              description='Linear acceleration factor'),
        DeclareLaunchArgument('angular_accel', default_value='0.5',
                              description='Angular acceleration factor'),
        DeclareLaunchArgument('cmd_vel', default_value='mobile_base/commands/velocity',
                              description='Command velocity topic'),
        DeclareLaunchArgument('namespace', default_value='',
                              description='Namespace for topics'),

        # Key publisher node
        Node(
            package='sdv_scripts',
            executable='key_publisher.py',
            name='key_publisher',
            output='screen'
        ),

        # Key to twist conversion node
        Node(
            package='sdv_scripts',
            executable='key2twist.py',
            name='key2twist',
            output='screen',
            parameters=[{
                'linear_scale': LaunchConfiguration('linear_scale'),
                'angular_scale': LaunchConfiguration('angular_scale'),
                'linear_accel': LaunchConfiguration('linear_accel'),
                'angular_accel': LaunchConfiguration('angular_accel'),
            }],
            remappings=[('/cmd_vel', ['/', LaunchConfiguration('namespace'), '/', LaunchConfiguration('cmd_vel')])]
        )
    ])

