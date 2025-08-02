cmake_minimum_required(VERSION 3.31)

project(capsule LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cap)

add_subdirectory(src)

target_link_libraries(cap PRIVATE antlr4_shared)