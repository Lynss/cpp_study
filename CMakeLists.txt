cmake_minimum_required(VERSION 3.10)
project(cpp_study)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

add_executable(cpp_study main.cpp 1/p_1.cc 1/p_1.h 2/p_2.cc 2/p_3.h 2/Sales_data.h 3/p_3.cc 3/p_3.cc 3/p_3_r.h 4/p_4.cpp 4/p_4.h)
