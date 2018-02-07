cmake_minimum_required(VERSION 3.5)

set(CMAKE_MACOSX_RPATH 1)

add_library(sqrt SHARED sqrt.cpp)

add_executable(main main.cpp)

target_link_libraries(main sqrt)

