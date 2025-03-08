#!/bin/bash
rosparam load $(rospack find sdv_nav)/sdv_params.yaml
NAME=$(rosparam get /sdv/robot_model) node $(rospack find sdv_process)/src/ros-coms/dist/src/index.js
