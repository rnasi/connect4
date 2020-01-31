cmake_minimum_required(VERSION 3.15)
project(connect4 C)

set(CMAKE_C_STANDARD 99)

add_executable(connect4 main.c utils.h utils.c)

find_package(SDL2 REQUIRED SDL2
        SDL_image REQUIRED SDL_image)

target_link_libraries(connect4
        PRIVATE SDL2
        PRIVATE SDL2_image)