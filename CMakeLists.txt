cmake_minimum_required(VERSION 2.8.7)

project(Neural-Networks)

add_definitions(-std=c++11 -Wall 'xml2-config --cflags' -pthread)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build/lib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${CMAKE_SOURCE_DIR})

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/program)
