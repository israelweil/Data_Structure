//
// Created by cland on 06/03/2025.
//

#include "ComunDiv.h"

#include <iostream>
using namespace std;
// OPCION 2
int ComunDiv::maximo(int divisor, int dividendo) {
    if (dividendo == 0) {
        return divisor;

    }

    return maximo(dividendo, divisor%dividendo);
}

// OPCION 1
void ComunDiv::sacarDivisores(int num, int arreglo[], int divisor, int contador) {
    if (divisor > num) return;

    if (num%divisor == 0) {
        arreglo[contador] = divisor;
        ++contador;
    }
    sacarDivisores(num,arreglo,divisor+1,contador);
}
int ComunDiv::maximo2(int arregloA[], int arregloB[]) {
    int maximo2 = 1;
    for (int i = 0; i < 100; ++i) {
        if (arregloA[i] == 0) break;
        for (int j = 0; j < 100; ++j) {
            if (arregloB[j] == 0) break;
            if (arregloA[i] == arregloB[j]) {
                maximo2 = arregloA[i];
            }
        }
    }
    return maximo2;
}


