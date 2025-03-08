import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, GroupAction, IncludeLaunchDescription
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    # Declare arguments
    map_file = LaunchConfiguration("map_file")
    laser_position = LaunchConfiguration("laser_position")
    camera_position = LaunchConfiguration("camera_position")
    request_source = LaunchConfiguration("request_source")
    mapping = LaunchConfiguration("mapping")
    localization = LaunchConfiguration("localization")
    rtabmap = LaunchConfiguration("rtabmap")

    return LaunchDescription([
        DeclareLaunchArgument(
            "map_file",
            default_value=[FindPackageShare("sdv_nav"), "/maps/LabFabEx.yaml"]
        ),
        DeclareLaunchArgument(
            "laser_position",
            default_value="0.275 0 0.05 0 0 0 base_link laser 20"
        ),
        DeclareLaunchArgument(
            "camera_position",
            default_value="0.3 -0.034 0.114 0 0 0 base_link camera_link 20"
        ),
        DeclareLaunchArgument("request_source", default_value="True"),
        DeclareLaunchArgument("mapping", default_value="False"),
        DeclareLaunchArgument("localization", default_value="slam_toolbox"),
        DeclareLaunchArgument("rtabmap", default_value="false"),

        # TF Static Transforms
        Node(
            package="tf2_ros",
            executable="static_transform_publisher",
            name="tf_sdv",
            arguments=[laser_position]
        ),
        Node(
            package="tf2_ros",
            executable="static_transform_publisher",
            name="tf_camera",
            arguments=[camera_position]
        ),

        # Map Server (only if mapping is False)
        GroupAction([
            UnlessCondition(mapping),
            Node(
                package="nav2_map_server",
                executable="map_server",
                name="map_server",
                parameters=[{"yaml_filename": map_file}]
            ),
        ]),

        # Localization
        GroupAction([
            IfCondition(localization == "slam_toolbox"),
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource([
                    FindPackageShare("slam_toolbox"),
                    "/launch/localization_launch.py"
                ]),
                launch_arguments={"use_sim_time": "false"}.items()
            )
        ]),
        GroupAction([
            IfCondition(localization == "amcl"),
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource([
                    FindPackageShare("sdv_nav"),
                    "/launch/amcl_launch.py"
                ])
            )
        ]),

        # RTAB-Map (if enabled)
        GroupAction([
            IfCondition(rtabmap),
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource([
                    FindPackageShare("sdv_nav"),
                    "/launch/rtab_map_launch.py"
                ]),
                launch_arguments={"mapping": mapping}.items()
            )
        ]),

        # Navigation2 (Replaces move_base)
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                FindPackageShare("sdv_nav"),
                "/launch/move_base_launch.py"
            ])
        ),

        # Costmap Cleaner
        Node(
            package="sdv_nav",
            executable="costmap_cleaner",
            name="costmap_cleaner",
            parameters=[{"request_source": request_source}],
            output="screen"
        ),
    ])

