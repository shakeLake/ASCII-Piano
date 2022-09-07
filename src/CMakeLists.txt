cmake_minimum_required(VERSION 3.23)

project(midi_src)

add_subdirectory(midi_in_out)
add_subdirectory(ui)

add_executable(letGo main.cpp)

target_link_libraries(letGo midiInOut midiUi Winmm)