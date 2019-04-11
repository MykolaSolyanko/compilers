cmake_minimum_required(VERSION 3.6)

project(logining C CXX)

set (PROJECT_LINK_LIBS liblog.so)

link_directories(../work_with_shared_library)

include_directories(../work_with_shared_library)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(main main.cpp)

target_link_libraries(main ${PROJECT_LINK_LIBS})