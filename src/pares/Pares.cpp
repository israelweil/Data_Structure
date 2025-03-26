//
// Created by cland on 06/03/2025.
//

#include "Pares.h"

#include <iostream>
using namespace std;

int Pares::pares(int n) {
    if (n==1) return suma;

    if (n%2 == 0) {
        suma += n;
    }
    pares(n-1);
    return suma;
}

void Pares::imprimir(int n) {
    cout <<"La suma es: "<< n <<endl;;
}

