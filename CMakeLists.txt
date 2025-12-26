cmake_minimum_required(VERSION 3.16)
project(EchoMind)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS graphics window system audio REQUIRED)

add_executable(echomind
    src/main.cpp
)

target_link_libraries(echomind sfml-graphics sfml-window sfml-system sfml-audio)
