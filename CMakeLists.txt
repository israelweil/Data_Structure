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
        src/arrays/Arreglo.h
        src/pares/Pares.cpp
        src/pares/Pares.h
        src/arregloSuma/Suma.cpp
        src/arregloSuma/Suma.h
        src/examen/ComunDiv.cpp
        src/examen/ComunDiv.h
        src/pilas/OnceMarzo.cpp
        src/pilas/OnceMarzo.h
        src/pilasDinamicas/Dinamicas.cpp
        src/pilasDinamicas/Dinamicas.h
        src/colas/ColasEstaticas.cpp
        src/colas/ColasEstaticas.h
        src/colasDinamicas/ColasSimples.cpp
        src/colasDinamicas/ColasSimples.h
        src/tarea/Tarea3.cpp
        src/tarea/Tarea3.h
        src/bicolas/Bicolas.cpp
        src/bicolas/Bicolas.h)
