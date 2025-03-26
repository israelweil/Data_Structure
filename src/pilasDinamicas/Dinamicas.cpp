//
// Created by cland on 12/03/2025.
//

#include "Dinamicas.h"

#include <iostream>
using namespace std;



//Nodo *pila; //Pila dinamica

// Inicializar
/**void inicializar() {
    pila = nullptr;
}*/
Dinamicas::Dinamicas() {
    pila = nullptr;
}

// Vacia
bool Dinamicas:: vacia() {
    if (pila == nullptr) {
        return true;
    } else {
        return false;
    }
}
// push
void Dinamicas::push(int valor) {
    Nodo * aux = new Nodo();// variable que sera un apuntador y sera n nodo
    aux -> valor = valor;
    aux -> siguiente = pila;
    pila = aux;
    cout<<"Valor " << valor << " se inserto en la pila" << endl;
}
// pop (quitar cosas)
void Dinamicas::pop() {
    if (vacia()) {
        cout << "La pila esta vacia" << endl;
    } else {
        Nodo * aux =  pila; // va a la pila original y toma el elemento de hasta arriba temporalmente
        pila = pila -> siguiente;
        delete aux;
        cout<<"Nodo eliminado"<<endl;
    }
}
// tamanio
void Dinamicas::tamanio() {
    cout<<"El tamanio de la pila es: ";
    int contador = 0;
    Nodo * aux = pila;
    while (aux != nullptr) {
        contador++;
        aux = aux -> siguiente;
    }
    cout<<contador<<endl;
}


// mostrar
void Dinamicas::mostrar() {
    if (vacia()) {
        cout<<"La pila esta vacia" << endl;
    } else {
        Nodo * aux = pila;
        cout<< "Los elementos de la pila son: "<<endl;
        while (aux != nullptr) {//no puedo usar for porque no tiene tamanio  definido
            cout<<aux -> valor << endl;
            aux = aux -> siguiente;
        }
    }
}

//destruir
void Dinamicas::destruir() {
    while (!vacia()) {
        pop();
    }
}

void Dinamicas::ejecutar() {

    push(10);
    push(20);
    push(30);
    cout << "Lista enlazada: ";
    mostrar();
    pop();
    mostrar();
    push(56);
    tamanio();
    destruir();
}
