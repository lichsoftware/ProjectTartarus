cmake_minimum_required(VERSION 3.25)
project(ProjectTartarus C)
set(CMAKE_C_STANDARD 11)

set(PT_src "PT/src/main/main.c")

add_executable(PT ${PT_src})
