cmake_minimum_required(VERSION 3.10)
project(calculette)

add_library(Operand src/Operand.cpp)

add_executable(calculette calculette.cpp)
target_link_libraries(calculette PRIVATE Operand)
target_include_directories(calculette PRIVATE src)