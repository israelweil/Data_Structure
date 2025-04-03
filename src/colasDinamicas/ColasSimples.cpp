//
// Created by cland on 20/03/2025.
//

#include "ColasSimples.h"

#include <iostream>
using namespace std;
ColasSimples::ColasSimples() {
    frente = nullptr;
    final = nullptr;
}

bool ColasSimples::empty() {
    return (frente == nullptr && final == nullptr);
}

void ColasSimples::enqueue(int x) {
    Nodo * aux = new Nodo();
    aux -> valor = x;
    aux -> siguiente = nullptr;
    if (empty()) {// si es el primer nodo a insertar
        // colocar frente en ese nodo
        frente = aux;
    } else {
        // mover a final a la derecha
        final -> siguiente = aux;
    }
    final = aux;
}

void ColasSimples::dequeue() {
    if (empty()) {
        cout << "La cola esta vacia"<< endl;
    } else {
        Nodo * aux = frente;
        frente = frente -> siguiente;
        if (frente==nullptr) {
            final = nullptr;
        }
    delete aux;
    }
}

void ColasSimples::show() {
    if (empty()) {
        cout << "La cola esta vacia"<< endl;

    } else {
        Nodo *aux = frente;
        while (aux != nullptr) {
            cout << aux -> valor << " "<< endl;
            aux = aux -> siguiente;
        }
    }
}
void ColasSimples :: destroy() {
    while (!empty()) {
        dequeue();
    }
}

void ColasSimples::ejecutar() {
    enqueue(18);
    enqueue(19);
    enqueue(56);
    show();
    dequeue();
    show();
    destroy();
}

