cmake_minimum_required(VERSION 3.10)

project(CalculatorProject)

set(CMAKE_CXX_STANDARD 11)

add_library(calculator_lib STATIC calculator.cpp)
add_executable(main main.cpp)

target_link_libraries(main calculator_lib)

set(CMAKE_MAKE_PROGRAM "ninja")

