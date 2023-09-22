cmake_minimum_required(VERSION 3.17)
project(Test_Inference)

set(CMAKE_CXX_STANDARD 14)

# 设置环境变量
set(INC_DIR /home/damilu1/wonpeace/work_tools/OpenVINO-2023.0.1/intel/openvino_2023.0.1/runtime/include)
set(LINK_DIR /home/damilu1/wonpeace/work_tools/OpenVINO-2023.0.1/intel/openvino_2023.0.1/runtime/lib/intel64/)

include_directories(${INC_DIR})
link_directories(${LINK_DIR})
link_libraries(libopenvino.so)

# 添加可执行文件
add_executable(openvino_test src/test_openvino.cpp)

# 链接 openvino 库
target_link_libraries(openvino_test libopenvino.so)