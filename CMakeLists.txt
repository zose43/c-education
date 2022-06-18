cmake_minimum_required(VERSION 3.22)
project(univer C)

set(CMAKE_C_STANDARD 17)

add_executable(univer main.c)
target_link_libraries(univer m)