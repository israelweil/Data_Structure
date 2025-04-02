//
// Created by cland on 31/03/2025.
//

#include "Enlazadas.h"

#include <iostream>
#include <ostream>
using namespace std;

Enlazadas::Enlazadas(): cabeza(nullptr), cola(nullptr) {}

bool Enlazadas::empty() {
    return (cabeza == nullptr && cola == nullptr);
}

void Enlazadas::insertarFinal(int dato) {
    Nodo * nuevo = new Nodo(dato);

    if (empty()) {
        cabeza = nuevo;
        cola = nuevo;
    } else {
        cola -> siguiente = nuevo;
        nuevo -> anterior = cola;
        cola = nuevo;
    }
    cout << "Dato insertado: " << dato <<endl;
}

int Enlazadas::numeroNodos() {
    if (empty()) {
        return 0;
    } else {
        Nodo * aux = cabeza;
        int contador =1;
        while (aux != nullptr) {
            aux =  aux -> siguiente;
            ++contador;
        }
        return contador;
    }
}

void Enlazadas::insertarPosicion(int dato, int posicion) {
    int tamano = numeroNodos();
    if (tamano > posicion) {
        cout << "Posicion esta fuera de rango, lo vamos a insertar al final" << endl;
        insertarFinal(dato);
        return;
    }
    // aqui ya sabemos que esta dentro de la posicion
    Nodo * nuevo = new Nodo(dato);
    if (posicion == 1) {
        nuevo -> siguiente = cabeza;
        if (cabeza != nullptr) {
            cabeza -> anterior = nuevo;
        }
        cabeza = nuevo;
        if (cabeza -> siguiente == nullptr) {
            cola = cabeza;
        }
        cout << "Dato insertado: " << dato << endl;
        return;
    }
    Nodo * aux = cabeza;
    int contador = 1;
    while (aux != nullptr && contador < posicion -1) {
        aux = aux -> siguiente;
        ++contador;
    }
    nuevo -> siguiente  = aux -> siguiente;
    nuevo -> anterior = aux;
    aux -> siguiente = nuevo;
    if (aux -> siguiente != nullptr) {
        nuevo -> siguiente -> anterior = nuevo;
    } else {
        cola = nuevo;
    }
    cout << "Dato: " << dato <<" insertado" << endl;
}

void Enlazadas::eliiminarPosicion(int posicion) {
    if (empty()) {
        cout << "Lista vacia" << endl;
        return;
    }
    Nodo * aux = cabeza;
    if (posicion == 1) {
        cabeza = cabeza -> siguiente;
        if (cabeza!=nullptr) {
            //desanclar el nodo
            cabeza -> anterior = nullptr;
        } else {
            cola = nullptr;
        }
        delete aux;
        cout << "Nodo eliminado" << endl;
        return;
    }

    int contador = 1;
    while (aux != nullptr && contador < posicion) {
        aux = aux -> siguiente;
        ++contador;
    }
    if (aux == nullptr) {
        cout<< "Posicion fuera de rango" << endl;
        return;
    }
    if (aux -> siguiente != nullptr) {
        aux -> siguiente -> anterior = aux -> anterior;
    }

    if (aux -> anterior != nullptr) {
        aux -> anterior -> siguiente = aux -> siguiente;
    }
    if (aux == cola) {
        // si es el ultimo nodo
        cola = cola -> anterior;
    }
    delete aux;
    cout << "Nodo eliminado" << endl;
}

void Enlazadas::mostrar() {
    if (empty()) {
        cout << "Lista vacia" << endl;
        return;
    }else {
        Nodo * aux = cabeza;
        while (aux != nullptr) {
            cout << aux -> valor << " ";
            aux = aux -> siguiente;
        }
        cout << endl;
    }
}

Enlazadas::~Enlazadas() {
    Nodo * aux = cabeza;
    Nodo * siguiente;
    while (aux != nullptr) {
        siguiente = aux -> siguiente;
        delete aux;
        aux = siguiente;
    }
    cout << "♫ Memoria liberada ♫" << endl;
}

void Enlazadas::ejecutar() {
    insertarFinal(40);
    insertarFinal(50);
    mostrar();
    insertarPosicion(10,2);
    mostrar();

}