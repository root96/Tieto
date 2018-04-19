cmake_minimum_required(VERSION 3.5)
project(WordsGenerator)
include(ClangTools.cmake)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic")

file(GLOB_RECURSE SOURCES src/*.cpp)
file(GLOB_RECURSE HEADERS inc/*.hpp)
include_directories(inc)

add_library(temp OBJECT src/WordsGenerator.cpp)
add_executable(${PROJECT_NAME} src/main.cpp $<TARGET_OBJECTS:temp>)
add_clang_tool_targets(${PROJECT_NAME} "${SOURCES}" "${HEADERS}")
add_subdirectory(tests)
