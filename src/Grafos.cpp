#include <iostream>
//
// Created by cland on 12/05/2025.
//
using namespace std;
#include "Grafos.h"

Grafos::Grafos():principio(nullptr){}

Vertice * Grafos::obtenerVertice(string n) {
    Vertice * temp = principio;
    while (temp -> siguiente != nullptr) {
        if (temp ->nombre == n) {
            return temp;
        }
        temp = temp -> siguiente;
    }
    return nullptr;
}

void Grafos::insertarVertice(string n) {
    if (obtenerVertice(n) != nullptr) {
        cout << "ya existe ese vertice"<<endl;
        return;
    }

    Vertice * nuevo = new Vertice(n);
    if (principio == nullptr) {
        principio = nuevo;
    } else {
        Vertice * temp = principio;
        while (temp -> siguiente != nullptr) { // me coloca en el ultimo valor
            temp = temp ->siguiente;
        }
        temp -> siguiente = nuevo;
        cout << "se inserto el vertice" << n << endl;
    }
}