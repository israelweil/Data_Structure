//
// Created by cland on 16/05/2025.
//

#include "Ejercicio.h"

#include <algorithm>
#include <iostream>
using namespace std;
void Ejercicio::ejecutar() {
    std::sort(std::begin(array), std::end(array));
    for (int i: array) {
        std::cout << i<<" ";
    }
}
