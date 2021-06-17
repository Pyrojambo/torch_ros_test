# torch_ros_test
A quick repository to see if Pytorch and ROS work together

Currently fails when linking torch libraries to ROS node. The torch libraries seem to displace all other linked libraries
(Un)comment https://github.com/Pyrojambo/torch_ros_test/blob/35ebf3cef0292f830ebf1d3b698cc274574e73b8/CMakeLists.txt#L41 to cause/stop error on catkin_make
