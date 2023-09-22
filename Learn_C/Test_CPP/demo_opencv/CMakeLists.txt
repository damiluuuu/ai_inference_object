cmake_minimum_required(VERSION 3.17)
project(demo_opecv)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(CV_DisplayImg demo_opencv.cpp)

target_link_libraries(CV_DisplayImg ${OpenCV_LIBS})
