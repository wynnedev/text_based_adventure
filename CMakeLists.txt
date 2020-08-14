cmake_minimum_required(VERSION 3.16)
project(text_based_adventure)

set(CMAKE_CXX_STANDARD 14)
set(Sources item.cpp inventory.cpp room.cpp)

add_executable(text_based_adventure main.cpp ${Sources})