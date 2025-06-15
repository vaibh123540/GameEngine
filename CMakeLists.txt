cmake_minimum_required(VERSION 3.10)
project(GameEngine VERSION 0.1 LANGUAGES CXX)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add our executable
add_executable(engine src/main.cpp)