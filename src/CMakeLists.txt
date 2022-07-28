cmake_minimum_required(VERSION 3.23)

project(midi_tool)

add_library(midi_in_out midi_in.cpp midi_in.hpp midi_out.cpp midi_out.hpp)

add_executable(letGo main.cpp)

target_link_libraries(letGo midi_in_out)