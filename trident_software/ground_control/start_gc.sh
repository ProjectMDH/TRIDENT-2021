#!/usr/bin/env bash

#Check if target argument exists
if [[ "$*" =~ "index" ]] || [[ "$*" =~ "tester" ]]
then
    #nothing to do here
    echo "---Start ground control---"
else
    echo "Need to specify valid target (index/tester)"
    exit
fi

#Source ROS2 environment
echo "Sourcing ROS2 environment"
source /opt/ros/foxy/setup.bash

#Check if build argument is set
if [[ "$*" =~ "-b" ]]
then
    echo "Building Trident project"
    #Go to trident workspace root folder
    cd ../
    #Build workspace
    colcon build
    #Go back to ground control folder
    cd ground_control/
fi

#Source project
echo "Sourcing Trident workspace"
source ../install/setup.bash

#Check if generate ros message argument is set
if [[ "$*" =~ "-g" ]]
then

    cd gui_backend_ws/
    npx generate-ros-messages
    cd ../
fi

echo "Starting teleop in new terminal"
gnome-terminal -e 'bash -c "source /opt/ros/foxy/setup.bash; ros2 run teleop_twist_keyboard teleop_twist_keyboard"'

#Start selected target
cd gui_backend_ws/

if [[ "$*" =~ "index" ]]
then
    node index.js
elif [[ "$*" =~ "tester" ]]
then
    node tester.js
fi