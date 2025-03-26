#include <iostream>
#include <string.h>
//
// Created by cland on 23/03/2025.
//
using namespace std;
#include "Tarea3.h"
Tarea3::Tarea3() {
    pila = nullptr;
}

bool Tarea3::vacia() {
    if (pila == nullptr) {
        return true;
    } else {
        return false;
    }
}

void Tarea3::push(Item x) {
    Nodo * aux = new Nodo();
    aux -> valor = x;
    aux -> siguiente = pila;
    pila = aux;
}

void Tarea3:: pop() {
    if (vacia()) {
        cout << "La pila esta vacia" << endl;
    } else {
        Nodo * aux = pila;
        pila = pila -> siguiente;
        delete aux;
    }
}

void Tarea3::destruir() {
    if (!vacia()) {
        pop();
    }
    cout << "La pila ha sido destruida" << endl;
}


bool Tarea3::esCorrectaLaExpresion(char cad[]) {
    int i = 0;
    while (cad[i] != '\0') {
        if (cad[i] == '(') push(cad[i]);
        if (cad[i] == ')') {
            if (vacia()) {
                return false;
            }
            pop();
        }
        i++;
    }
    if (vacia()) {// la expresion cumplio con todos los requisitos
        return true;
    } else {
        return false;
    }
}

void Tarea3::imprimr(bool a) {
    if (a) {
        cout << "La expresion es correcta" << endl;
    } else {
        cout << "La expresion es incorrecta" << endl;
    }
}


void Tarea3::ejecutar() {
    Item cad[50];
    strcpy(cad, "(hola y) hoal)");
    imprimr(esCorrectaLaExpresion(cad));
    destruir();
}
