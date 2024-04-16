cmake_minimum_required(VERSION 2.8)

# set the project name
project(GameOfLife C)

# add the executable

set(CMAKE_C_FLAGS "-lSDL2 -lSDL2_image -std=c99 -Wall -O")
include_directories(../images)
include_directories(unity/include)

add_executable(GameOfLife main.c game.c display.c)
add_executable(unit_tests unit_tests.c game.c display.c unity/src/unity.c)
