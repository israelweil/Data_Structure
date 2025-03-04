cmake_minimum_required(VERSION 3.30)
project(Unidad_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Unidad_2 main.cpp
        src/Factorial/Factorial.cpp
        src/Factorial/Factorial.h
        src/voltear_cadena/Voltear.cpp
        src/voltear_cadena/Voltear.h
        src/anagrama/Anagrama.cpp
        src/anagrama/Anagrama.h
        src/arrays/Arreglo.cpp
        src/arrays/Arreglo.h)
