cmake_minimum_required(VERSION 3.13)
project(test_game)

set(CMAKE_CXX_STANDARD 17)


add_executable(
    test_game 
    src/main.cpp 
    src/helper.cpp
)
target_link_directories(test_game PRIVATE ${CMAKE_SOURCE_DIR}/src/classes/build/)
target_link_libraries(test_game classes)