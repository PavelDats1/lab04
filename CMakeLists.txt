cmake_policy(SET CMP0000 NEW)
cmake_policy(VERSION 3.10)
cmake_minimum_required(VERSION 3.10)
project(lab03)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_EXAMPLES "Build examples" OFF)

add_subdirectory(formatter_lib)
add_subdirectory(formatter_ex_lib)
add_subdirectory(solver_lib)
add_subdirectory(hello_world_application)
add_subdirectory(solver_application)

if(BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()

# Добавляем banking только на Linux (где есть GTest)
if(NOT WIN32)
    add_subdirectory(banking)
endif()
