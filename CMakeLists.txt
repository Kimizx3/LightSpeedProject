cmake_minimum_required(VERSION 3.28)
project(LightSpeedProject)

set(CMAKE_CXX_STANDARD 20)

set(LightSpeedProject main.cpp)
add_executable(LightSpeedProject main.cpp)

find_package(SFML 2.6.1 COMPONENTS system window graphics network audio REQUIRED)

include_directories(C:/SFML-2.6.1/imgui)
include_directories(C:/SFML-2.6.1/imgui-sfml)
include_directories(C:/SFML-2.6.1/include/SFML)
target_link_libraries(LightSpeedProject sfml-system sfml-window sfml-graphics sfml-network sfml-audio)
