cmake_minimum_required(VERSION 3.15)
project(conan_json_example)

find_package(nlohmann_json)

add_executable(conan_json_example main.cpp)
target_link_libraries(conan_json_example nlohmann_json::nlohmann_json)

# make sure we have input file in build folder
configure_file(student.json ${CMAKE_BINARY_DIR}/student.json COPYONLY)