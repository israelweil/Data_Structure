#include <iostream>
//
// Created by cland on 28/02/2025.
//
using namespace std;
#include "Anagrama.h"
bool Anagrama::cadena(string palabra1,int longitud1, string palabra2, int longitud2) {
    if(longitud1!=longitud2) return false;
    if(longitud1 == 0) return true;

    for (int i = 1; i<=longitud2; i= i+1) {
        if (palabra1[longitud1]==palabra2[i]) {
            cadena(palabra1,longitud1-1,palabra2,longitud2);
            return true;
        }
        return true;
    }
}
void Anagrama::imprimir(bool anagrama) {
    if (anagrama) {
        cout << "La palabra SI es un anagrama" << endl;
    } else {
        cout << "La palabra NO es un anagrama" << endl;
    }
}
