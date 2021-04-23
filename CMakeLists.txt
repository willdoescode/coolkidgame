cmake_minimum_required(VERSION 3.19)
project(coolkidgame)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(${PROJECT_SOURCE_DIR}/libs/glfw)
include_directories(${PROJECT_SOURCE_DIR}/libs/glfw/deps/)

add_executable(coolkidgame main.cpp ${PROJECT_SOURCE_DIR}/libs/glfw/deps/glad_gl.c)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(OpenGL REQUIRED)
target_link_libraries(coolkidgame OpenGL::GL)

target_link_libraries(coolkidgame glfw)
