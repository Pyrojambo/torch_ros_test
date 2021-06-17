cmake_minimum_required(VERSION 3.0.2)
project(torch_ros)

add_compile_options(-std=c++14)

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

find_package(Torch REQUIRED)

###################################
## catkin specific configuration ##
###################################

catkin_package(
  INCLUDE_DIRS include
)

###########
## Build ##
###########

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

#message(#WARNING "torch libraries ${TORCH_LIBRARIES}")
#message(#WARNING "catkin libraries ${catkin_LIBRARIES}")

add_library(torch_wo_ros src/torch_wo_ros.cpp)
add_dependencies(torch_wo_ros ${catkin_EXPORTED_TARGETS})
target_link_libraries(torch_wo_ros
    ${TORCH_LIBRARIES}
    ) 

add_executable(torch_ros src/torch_ros.cpp)
add_dependencies(torch_ros ${catkin_EXPORTED_TARGETS})
target_link_libraries(torch_ros
    #torch_wo_ros
    
    ${catkin_LIBRARIES}
    )

