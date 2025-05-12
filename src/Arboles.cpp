#include <iostream>
//
// Created by cland on 30/04/2025.
//
using namespace std;
#include "Arboles.h"

Arboles::Arboles() : raiz(nullptr) {}

void Arboles::insertar(int dato, Nodo *&nodo) {
    if (nodo == nullptr) {
        nodo = new Nodo(dato);
        cout << "Se inserto un nuevo dato: " << dato << endl;
    } else if (dato < nodo -> valor) {
        insertar(dato, nodo -> izquierda);
    } else {
        insertar(dato, nodo -> derecha);
    }
}



void Arboles::inOrden(Nodo * nodo) {
    if (nodo == nullptr) {
        return;
    } else {
        inOrden(nodo ->izquierda);
        cout << nodo -> valor << " ";
        inOrden(nodo -> derecha);
    }
}

void Arboles::posOrden(Nodo * nodo) {
    if (nodo == nullptr) {
        return;
    } else {
        posOrden(nodo -> izquierda);
        posOrden(nodo -> derecha);
        cout << nodo -> valor << " ";
    }
}


void Arboles::preOrden(Nodo * nodo) {
    if (nodo == nullptr) {
        return;
    } else {
        cout << nodo -> valor << " ";
        preOrden(nodo -> izquierda);
        preOrden(nodo -> derecha);
    }
}
Nodo * Arboles::sucesor(Nodo * nodo) {
    while (nodo -> izquierda != nullptr) {
        nodo = nodo -> izquierda;
    }
    return nodo;
}
Nodo * Arboles::eliminar(Nodo * nodo, int valor) {
    // buscar el nodo eliminar
    if (nodo == nullptr) {
        cout<<"El nodo no existe" << endl;
        return  nullptr;
    } else if (valor < nodo -> valor) {
        nodo -> izquierda = eliminar(nodo -> izquierda, valor);
    } else if (valor > nodo -> valor) {
        nodo -> derecha = eliminar(nodo -> derecha, valor);
    } else {
        // caso 1: no tiene hijos
        if (nodo -> izquierda == nullptr && nodo -> derecha == nullptr) {
            delete nodo;
            nodo = nullptr;
        }
        // caso 2: un hijo
        else if (nodo -> derecha == nullptr) {
            Nodo * temp = nodo-> izquierda;
            delete nodo;
            return temp;
        } else if (nodo -> izquierda == nullptr) {
            Nodo * temp = nodo-> derecha;
            delete nodo;
            return temp;
        }
        // caso 3: dos hijos
        else {
            Nodo * temp = sucesor(nodo -> derecha);
            nodo -> valor = temp -> valor;
            nodo -> derecha = eliminar(nodo -> derecha, temp -> valor);

        }
    }
}


void Arboles::destruir(Nodo *&nodo) {
    if (nodo == nullptr) {
        return;
    }

    cout << "Se destruyo el nodo: " << nodo -> valor << "  ";
    destruir(nodo -> izquierda);
    destruir(nodo -> derecha);
    delete nodo;
    nodo = nullptr;
}


void Arboles::ejecutar() {
    insertar(10, raiz);
    insertar(8, raiz);
    insertar(9, raiz);
    insertar(12, raiz);
    insertar(11, raiz);
    insertar(13, raiz);
    cout << "Recorrido en inOrden: ";
    inOrden(raiz);
    cout << endl;
    cout << "Recorrido en preOrden: ";
    preOrden(raiz);
    cout << endl;
    cout << "Recorrido en posOrden: ";
    posOrden(raiz);
    cout << endl;
    eliminar(raiz, 10);
    cout << "Recorrido en inOrden: ";
    inOrden(raiz);
    cout << endl;
    destruir(raiz);
}