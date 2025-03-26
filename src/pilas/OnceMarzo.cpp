#include <codecvt>
#include <iostream>
//
// Created by cland on 11/03/2025.
//
using namespace std;
#include "OnceMarzo.h"
// usando ESTRUCTURAS
const int MAX = 5;
void OnceMarzo::clase() {


}
struct Pila {
    int valores[MAX];
    int posicion;

};

Pila pila;
// Inicializar la pila
void inicializar(){
    pila.posicion = -1;
}
// preguntar si la pila esta vacia
bool vacia(){
    return pila.posicion == -1;
}
// si esta llena
bool llena(){
    return pila.posicion == MAX-1;
}
// insertar elementos
void push() {
    if (llena()) {
        cout << "La pila esta llena"<<endl;
    } else {
    }
    {

    }
}
// sacar elementos
void pop() {
    if (vacia()) {
        cout << "La pila esta vacia"<<endl;
    } else {
        int x = pila.valores[pila.posicion];
        pila.valores;
    }
}
// mostrar los elementos
