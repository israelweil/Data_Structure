//
// Created by cland on 16/02/2025.
//


#include "Voltear_Cadena.h"

#include <iostream>
using namespace std;

void Voltear_Cadena::voltear(string palabra, int i) {
    if (i <= 0) return;

    cout << palabra[i-1];
    voltear(palabra, i - 1);
}
