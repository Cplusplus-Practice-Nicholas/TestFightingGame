cmake_minimum_required(VERSION 3.10)
project(test_game)

set(CMAKE_CXX_STANDARD 17)


add_executable(
    test_game 
    src/main.cpp 
    src/helper.cpp
)
target_link_libraries(test_game classes)