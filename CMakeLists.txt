cmake_minimum_required(VERSION 3.1)

project(mahjong-score)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -Wall -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -Wall")

add_library(player_impl STATIC src/player_impl.cpp)
set_target_properties(player_impl PROPERTIES 
  PUBLIC_HEADER "src/player_impl.hpp;src/player_core.hpp")
install(TARGETS player_impl EXPORT PlayerImpl)
install(EXPORT PlayerImpl FILE PlayerImplConfig.cmake DESTINATION share/cmake)
