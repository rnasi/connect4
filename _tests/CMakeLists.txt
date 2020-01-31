cmake_minimum_required(VERSION 3.15)
project(connect4 C)

set(CMAKE_C_STANDARD 99)

add_executable(connect4 test-runner.c ../utils.h ../utils.c test.h utils-test.c)