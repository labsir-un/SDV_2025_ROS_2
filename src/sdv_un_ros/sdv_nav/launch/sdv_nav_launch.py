import os
import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration
from launch.substitutions import PythonExpression
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    # Declare arguments
    laser_position = LaunchConfiguration("laser_position")
    camera_position = LaunchConfiguration("camera_position")
    request_source = LaunchConfiguration("request_source")
    mapping = LaunchConfiguration("mapping")
    localization = LaunchConfiguration("localization")
    rtabmap = LaunchConfiguration("rtabmap")

    return LaunchDescription([
        # Declare launch arguments
        DeclareLaunchArgument("laser_position", default_value="0.275 0 0.05 0 0 0 base_link laser 20"),
        DeclareLaunchArgument("camera_position", default_value="0.3 -0.034 0.114 0 0 0 base_link camera_link 20"),
        DeclareLaunchArgument("request_source", default_value="True"),
        DeclareLaunchArgument("mapping", default_value="False"),
        DeclareLaunchArgument("localization", default_value="slam"),  # Default to slam since Hector is removed
        DeclareLaunchArgument("rtabmap", default_value="false"),

        # Serial Communication with Tiva Board
        Node(
            package="sdv_serial",
            executable="sdv_serial_node",
            name="sdv_serial_node",
            output="screen"
        ),

        # Laser Node
        Node(
            package="sdv_nav",
            executable="run_laser_node.sh",
            name="laser"
        ),

        # Use camera if localization is ICP
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([FindPackageShare("sdv_nav"), "/launch/camera_launch.py"]),
            condition=IfCondition(PythonExpression(["'", LaunchConfiguration('localization'), "' == 'icp'"]))


        ),

        # Navigation Stack
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([FindPackageShare("sdv_nav"), "/launch/nav_stack_launch.py"]),
            launch_arguments={
                "laser_position": laser_position,
                "request_source": request_source,
                "mapping": mapping,
                "localization": localization,
                "rtabmap": rtabmap,
            }.items()
        ),

        # ROSBridge Server
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([FindPackageShare("rosbridge_server"), "/launch/rosbridge_websocket_launch.xml"]),
            launch_arguments={"port": "9090"}.items()
        ),
    ])

