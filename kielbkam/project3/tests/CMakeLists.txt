cmake_minimum_required(VERSION 3.5)
project(WordsGeneratorTests)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic")

add_executable(WordsGeneratorTests WordsGeneratorTests.cpp $<TARGET_OBJECTS:temp>)

target_link_libraries(WordsGeneratorTests gtest_main gtest pthread)
