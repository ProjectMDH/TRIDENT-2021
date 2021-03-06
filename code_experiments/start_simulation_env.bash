#!/bin/bash
# Initialize the different paths used in sourcing installs
trident_dir_path=$(find ~ -wholename "*/TRIDENT-2021/trident_software" -type d)
simulator_ws_path=$(find ~ -wholename "*/catkin_ws/src/TRIDENT-2021-SIM" -type d | xargs dirname | xargs dirname)
ros2_install=/opt/ros/foxy/setup.bash
ros1_install=/opt/ros/noetic/setup.bash
ros2_local_install="install/local_setup.bash"
ros1_local_install="devel/setup.bash"



shopt -s expand_aliases
set -a # Export the following quality of life functions (usable in subshells)
start_bridge() { ros2 run ros1_bridge dynamic_bridge --bridge-all-topics; }
start_sim() { roslaunch trident_sim trident_simulation.launch camera_show:=false; }
athena_start_core() { ros2 launch athena_bringup sim.system.launch.py; }
naiad_start_naiad_core() { ros2 launch naiad_bringup sim.system.launch.py; }
athena_start_mission() { ros2 action send_goal /athena/mission_control/mission/start trident_msgs/action/StartMission "{}"; }
naiad_start_mission() { ros2 action send_goal /naiad/mission_control/mission/start trident_msgs/action/StartMission "{}"; }
naiad_enable_teleop() { ros2 service call /naiad/motor_control/manual_override std_srvs/srv/SetBool '{data: true}'; }
naiad_disable_teleop() { ros2 service call /naiad/motor_control/manual_override std_srvs/srv/SetBool '{data: false}'; }
athena_enable_teleop() { ros2 service call /athena/motor_control/manual_override std_srvs/srv/SetBool '{data: true}'; }
athena_disable_teleop() { ros2 service call /athena/motor_control/manual_override std_srvs/srv/SetBool '{data: false}'; }
naiad_start_teleop() { ros2 launch naiad_bringup teleop.launch.py; }
athena_start_teleop() { ros2 launch athena_bringup teleop.launch.py; }
set +a # Stop exporting

# # Set up quality of life aliases
# aliases=(
#     "alias start_bridge=\"ros2 run ros1_bridge dynamic_bridge --bridge-all-topics\""
#     "alias start_sim=\"roslaunch trident_sim trident_simulation.launch camera_show:=false\""
#     "alias start_athena_core=\"ros2 launch athena_bringup sim.system.launch.py\""
#     "alias start_naiad_core=\"ros2 launch naiad_bringup sim.system.launch.py\""
#     "alias start_athena_mission=\"ros2 action send_goal /athena/mission_control/mission/start trident_msgs/action/StartMission \"{}\"\""
#     "alias start_naiad_mission=\"ros2 action send_goal /naiad/mission_control/mission/start trident_msgs/action/StartMission \"{}\"\""
#     "alias start_naiad_teleop=\"ros2 launch naiad_bringup teleop.launch.py\""
#     "alias start_athena_teleop=\"ros2 launch athena_bringup teleop.launch.py\""
#     "alias enable_naiad_teleop=\"ros2 service call /naiad/motor_control/manual_override std_srvs/srv/SetBool '{data: True}'\""
#     "alias disable_naiad_teleop=\"ros2 service call /naiad/motor_control/manual_override std_srvs/srv/SetBool '{data: False}'\""
#     "alias enable_athena_teleop=\"ros2 service call /athena/motor_control/manual_override std_srvs/srv/SetBool '{data: True}'\""
#     "alias disable_athena_teleop=\"ros2 service call /athena/motor_control/manual_override std_srvs/srv/SetBool '{data: False}'\""
#     # Add aditional aliases here ...
# )
# # Create the actual command for aliasing all the aliases
# alias_command=${aliases[0]}
# for ((i = 1; i < ${#aliases[@]}-1; i++)) do
#     alias_command="${alias_command} && ${aliases[$i]}"
# done

# Start the bridge
gnome-terminal --tab --title="ROS1 Bridge" -- bash -c "source ${ros2_install} &&
                                                       source ${ros1_install} &&
                                                       source ${trident_dir_path}/${ros2_local_install} &&
                                                       ros2 run ros1_bridge dynamic_bridge --bridge-all-topics; 
                                                       bash
                                                       "  
# Start the simulator
gnome-terminal --tab --title="Stonefish simulator" -- bash -c "source ${ros1_install} &&
                                                               source ${simulator_ws_path}/${ros1_local_install} &&
                                                               roslaunch trident_sim trident_simulation.launch camera_show:=false;
                                                               bash"  

# Start athena core (for simulation)
gnome-terminal --window --title="Athena core" -- bash -c "source ${ros2_install} &&
                                                          source ${trident_dir_path}/${ros2_local_install} &&
                                                          ros2 launch athena_bringup sim.system.launch.py;
                                                          bash"  

# Start athena core (for simulation)
gnome-terminal --window --title="NAIAD core" -- bash -c "source ${ros2_install} &&
                                                         source ${trident_dir_path}/${ros2_local_install} &&
                                                         ros2 launch naiad_bringup sim.system.launch.py;
                                                         bash"  

# Prepare the start mission command for athena
gnome-terminal --window --title="Athena mission" -- bash -c "source ${ros2_install} &&
                                                             source ${trident_dir_path}/${ros2_local_install} &&
                                                             read -p 'Press [enter] to start the loaded mission for Athena' &&
                                                             ros2 action send_goal /athena/mission_control/mission/start trident_msgs/action/StartMission '{}';
                                                             bash"

# Prepare the start mission command for athena
gnome-terminal --window --title="Naiad mission" -- bash -c "source ${ros2_install} &&
                                                            source ${trident_dir_path}/${ros2_local_install} &&
                                                            read -p 'Press [enter] to start the loaded mission for Athena' &&
                                                            ros2 action send_goal /naiad/mission_control/mission/start trident_msgs/action/StartMission '{}';
                                                            bash;"