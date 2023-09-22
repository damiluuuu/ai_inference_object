#include <iostream>
#include <openvino/openvino.hpp>
int main(int, char**){

    // -------- Get OpenVINO runtime version --------
    std::cout << ov::get_openvino_version().description << ':' << ov::get_openvino_version().buildNumber << std::endl;
    // -------- Step 1. Initialize OpenVINO Runtime Core --------
    ov::Core core;
    // -------- Step 2. Get list of available devices --------
    std::vector<std::string> availableDevices = core.get_available_devices();
    // -------- Step 3. Query and print supported metrics and config keys --------
    std::cout << "Available devices: " << std::endl;
    for (auto&& device : availableDevices) {
        std::cout << device << std::endl;
    }
}