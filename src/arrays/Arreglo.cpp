//
// Created by cland on 04/03/2025.
//

#include "Arreglo.h"

#include <iostream>
using namespace std;
void Arreglo::clase() {
    //cambiar el valor de una posicion usando el puntero
    *(p+2) = 10;
    for (int i = 0; i < 5; i++) {
        cout << rreglo[i] << endl;
        cout << *(p+i) << endl;
    }
    cout << "-----------------" << endl;
    //imprimir el array al reverso usando el puntero
    for (int i = 4; i >= 0; i--) {
        cout << *(p+i) << endl;
    }
}