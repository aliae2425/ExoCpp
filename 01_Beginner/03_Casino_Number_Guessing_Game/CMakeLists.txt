cmake_minimum_required(VERSION 3.10)
project(CasinoNumberGuessingGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_library(Roulette src/Roulette.cpp)

add_executable(CasinoNumberGuessingGame roulette.cpp)