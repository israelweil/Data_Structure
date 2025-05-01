#include <iostream>
//
// Created by cland on 30/04/2025.
//
using namespace std;
#include "Arboles.h"
Arboles::Arboles() : raiz(nullptr) {}

void Arboles::insertar(int dato, Nodo *& nodo) {
    if (nodo == nullptr) {
        nodo = new Nodo(dato);
        cout <<"Se inserto un nuevo dato: " << dato << endl;
    }else if (dato < nodo -> valor) {
        insertar(dato, nodo -> izquierda);
    } else {
        insertar(dato, nodo -> derecha);
    }
}

// la mejo opcion para destruir es con el post orden que es izquierda, derecha, raiz
void Arboles::destruir(Nodo * & nodo) {
    if (nodo == nullptr) {
        return;
    } else {
        //recorrido en posorden
        destruir(nodo -> izquierda);
        destruir(nodo -> derecha);
        delete nodo;
        nodo = nullptr;
    }
}