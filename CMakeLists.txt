cmake_minimum_required(VERSION 3.22.3)

project(PrinterProper VERSION 1.0.0)

include_directories(include)

add_executable(${PROJECT_NAME} src/printer.cpp src/main.cpp)