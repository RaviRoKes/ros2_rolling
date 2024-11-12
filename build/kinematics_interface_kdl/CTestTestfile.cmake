# CMake generated Testfile for 
# Source directory: /home/ravik/ros2_rolling/src/kinematics_interface/kinematics_interface_kdl
# Build directory: /home/ravik/ros2_rolling/build/kinematics_interface_kdl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_kinematics_interface_kdl "/usr/bin/python3" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/home/ravik/ros2_rolling/build/kinematics_interface_kdl/test_results/kinematics_interface_kdl/test_kinematics_interface_kdl.gtest.xml" "--package-name" "kinematics_interface_kdl" "--output-file" "/home/ravik/ros2_rolling/build/kinematics_interface_kdl/ament_cmake_gmock/test_kinematics_interface_kdl.txt" "--command" "/home/ravik/ros2_rolling/build/kinematics_interface_kdl/test_kinematics_interface_kdl" "--gtest_output=xml:/home/ravik/ros2_rolling/build/kinematics_interface_kdl/test_results/kinematics_interface_kdl/test_kinematics_interface_kdl.gtest.xml")
set_tests_properties(test_kinematics_interface_kdl PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/ravik/ros2_rolling/build/kinematics_interface_kdl/test_kinematics_interface_kdl" TIMEOUT "60" WORKING_DIRECTORY "/home/ravik/ros2_rolling/build/kinematics_interface_kdl" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/ament_cmake_gmock/cmake/ament_add_gmock_test.cmake;98;ament_add_test;/opt/ros/rolling/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;90;ament_add_gmock_test;/home/ravik/ros2_rolling/src/kinematics_interface/kinematics_interface_kdl/CMakeLists.txt;45;ament_add_gmock;/home/ravik/ros2_rolling/src/kinematics_interface/kinematics_interface_kdl/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
