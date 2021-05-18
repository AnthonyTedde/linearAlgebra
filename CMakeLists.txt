cmake_minimum_required(VERSION 3.19)
project(linearAlgebra)

set(CMAKE_CXX_STANDARD 20)

SET(EIGEN_DIR "/opt/Eigen_3.4")
include_directories(${EIGEN_DIR})


#find_package(Eigen3 REQUIRED)

#add_library(linearAlgebra main.cpp)
add_executable(linearAlgebra main.cpp)

target_link_libraries(linearAlgebra ${EIGEN_DIR})