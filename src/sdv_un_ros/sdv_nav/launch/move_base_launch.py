import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    # Declare arguments
    odom_frame_id = LaunchConfiguration("odom_frame_id")
    base_frame_id = LaunchConfiguration("base_frame_id")
    global_frame_id = LaunchConfiguration("global_frame_id")
    odom_topic = LaunchConfiguration("odom_topic")
    laser_topic = LaunchConfiguration("laser_topic")

    # Path to the converted ROS2 parameters
    params_file = LaunchConfiguration("params_file", default="~/ros2_ws/src/sdv_un_ros/sdv_nav/params/nav2_params.yaml")

    return LaunchDescription([
        DeclareLaunchArgument("odom_frame_id", default_value="base_link"),
        DeclareLaunchArgument("base_frame_id", default_value="base_link"),
        DeclareLaunchArgument("global_frame_id", default_value="map"),
        DeclareLaunchArgument("odom_topic", default_value="scanmatch_odom"),
        DeclareLaunchArgument("laser_topic", default_value="scan"),
        DeclareLaunchArgument("params_file", default_value="~/ros2_ws/src/sdv_un_ros/sdv_nav/params/nav2_params.yaml"),

        # Navigation2 (Nav2) Stack
        Node(
            package="nav2_bringup",
            executable="bringup_launch",
            name="nav2",
            output="screen",
            parameters=[params_file],
            remappings=[
                ("/cmd_vel", "/mobile_base/commands/velocity"),
                ("/odom", odom_topic),
                ("/scan", laser_topic)
            ]
        )
    ])

