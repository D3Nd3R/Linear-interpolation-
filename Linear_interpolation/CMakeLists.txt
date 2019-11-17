cmake_minimum_required(VERSION 3.5)

project(Linear_interpolation LANGUAGES C)

set(SRC main.c linear_interpolation.c test.c)
set(HDR linear_interpolation.h test.h)
set(CMAKE_C_FLAGS "-Wall -Wextra -Wpedantic -Werror")

add_executable(Linear_interpolation ${SRC} ${HDR})
