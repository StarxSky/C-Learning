cmake_minimum_required(VERSION 4.2)
project(C)


set(CMAKE_CXX_STANDARD 20)

add_executable(C main.cpp)

#add_executable(C main.cpp
#        blender.cpp)
#include_directories(${PROJECT_SOURCE_DIR}/metal-cpp)
#if(APPLE)

#    target_link_libraries(C PRIVATE
#            "-framework Metal"
#            "-framework Foundation"
#            "-framework QuartzCore"
#    )


#endif()