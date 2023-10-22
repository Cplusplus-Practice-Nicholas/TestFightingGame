cmake_minimum_required(VERSION 3.10)
project(test_game)

set(CMAKE_CXX_STANDARD 17)


add_executable(
    test_game 
    src/main.cpp 
    src/classes/Player.cpp 
    src/classes/Enemy.cpp
    src/helper.cpp
    src/headers/Player.h
    src/headers/Enemy.h
    src/headers/helper.h 
    src/json/nlohmann/json.hpp
)
