cmake_minimum_required(VERSION 3.15)
project(conan_example)

# Include Conan setup
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(conan_example main.cpp)
target_link_libraries(conan_example ${CONAN_LIBS})
