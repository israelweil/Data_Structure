#include <iostream>
//
// Created by cland on 27/02/2025.
//
using namespace std;
#include "Voltear.h"
string Voltear::cadena(string palabra, int longitud) {
    if (longitud == 0) return nueva+=palabra[0];
    nueva+= palabra[longitud];
    cadena(palabra,longitud -1);
    return nueva;
}

void Voltear::imprimir(string palabra,string nueva) {
    cout << "Palabra original: "<< palabra <<
        " palabra al reves: " << nueva<< endl;
}
