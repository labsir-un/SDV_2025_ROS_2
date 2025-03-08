#!/bin/bash

ros2 param load $(rospack find sdv_nav)/sdv_params.yaml
ROBOT_PARAM=$(rosparam get /sdv/robot_model)

SDV1="SDV1"
SDV2="SDV2"
SDV3="SDV3"

if [ "$ROBOT_PARAM" = "$SDV1" ]; then
    $(ros2 launch sicknav350 sicknav350_launch.py)
fi

if [ "$ROBOT_PARAM" = "$SDV2" ] || [ "$ROBOT_PARAM" = "$SDV3" ]; then
    $(roslaunch sdv_nav lms1xx_launch.py)
fi



if [ "$ROBOT_PARAM" = "$SDV4" ]; then
    $(echo "There's not a Sick Lidar installed in this SDV")
    # TODO: Add Zed-Mini camera nodes
fi

