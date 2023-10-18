cmake_minimum_required(VERSION 3.10)
project(test_game)

set(CMAKE_CXX_STANDARD 17)
find_library(JSON_LIBRARY jsoncpp HINTS ../../../usr/include/jsoncpp/json)

add_executable(
    test_game 
    src/main.cpp 
    src/classes/Player.cpp 
    src/classes/Enemy.cpp
    src/helper.cpp
    src/headers/Player.h
    src/headers/Enemy.h
    src/headers/helper.h 
)

target_link_libraries(test_game PRIVATE ${JSON_LIBRARY})