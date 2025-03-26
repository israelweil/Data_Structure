#include <iostream>
//
// Created by cland on 24/03/2025.
//
using namespace std;
// te da la opcion de legir por donde insertas o eliminas
#include "Bicolas.h"
Bicolas::Bicolas() {
    frente = nullptr;
    final = nullptr;
}
bool Bicolas:: empty() {
    return (frente == nullptr && final == nullptr);
}

void Bicolas::enqueueFinal(int x) {
    Nodo * aux = new Nodo();
    aux -> valor = x;
    aux -> siguiente = nullptr;
    aux -> anterior = nullptr;

    if (empty()) {
        frente = aux;
        final = aux;
    } else {
        final -> siguiente = aux;
        aux ->anterior = final;
        final = aux;
    }
    cout << "Elemento insertado" <<endl;
}
void Bicolas::dequeueFinal() {
    if (empty()) {
        cout<< "La Bicola esta vacia"<< endl;
    } else {
        Nodo * aux = final;
        final = final -> anterior;
        if (final !=nullptr) {
            final -> siguiente= nullptr;
        } else {
            frente = nullptr;
        }
        delete aux;
    }
}

// insertar por el frente
void Bicolas::enqueueFrente(int x) {
    Nodo * aux = new Nodo();
    aux -> valor = x;
    aux -> anterior = nullptr;
    if (empty()) {
        frente = aux;
        final = aux;
    } else {// que pasa si no es el primer nodo
        frente -> anterior = aux;
        frente = aux;
    }
    cout<< "Elemento insertado" << endl;
}

// eliminar por el frente
void Bicolas:: dequeueFrente() {
    if (empty()) {
        cout<<"La Bicola esta vacia"<< endl;
    } else {
        Nodo * aux = frente;
        frente = frente -> siguiente;
        if (frente != nullptr) {
            frente -> anterior = nullptr;
        } else {// si entre aqui es que ya no hay ningun elemento mas
            final= nullptr;
        }
        delete aux;
    }
}
void Bicolas::show() {
    if (empty()) {
        cout<<"La Bicola esta vacia"<< endl;
    } else {
        Nodo *aux = frente;
        while (aux != nullptr) {
            cout << aux -> valor << " "<< endl;
            aux = aux -> siguiente;
        }
    }
}

void Bicolas::destroy() {
    while (!empty()) {
        dequeueFinal();
    }
}

void Bicolas::ejecutar() {
    enqueueFinal(18);
    enqueueFinal(20);
    enqueueFrente(10);
    show();
    dequeueFinal();
    show();
    enqueueFrente(56);
    enqueueFrente(7);
    cout<<"imprimir desde el frente"<< endl;
    show();

    destroy();
}