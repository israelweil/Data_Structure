# CMakeLists.txt
cmake_minimum_required(VERSION 3.30)
project(Unidad_2)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Unidad_2
        main.cpp
        src/Ejercicio.cpp
        src/Ejercicio.h
)

target_include_directories(Unidad_2
        PRIVATE ${PROJECT_SOURCE_DIR}/include
)
