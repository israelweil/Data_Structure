//
// Created by
#include "ListasCirculares.h"
#include <iostream>
using namespace std;
void ListasCirculares::inicializar(){
    cabeza = NULL;
}

bool ListasCirculares::empty(){
    return cabeza==NULL;
}

void ListasCirculares::insertarFinal(int dato) {
    Nodo * nuevo = new Nodo(dato);
    if (empty()) {
        cabeza = nuevo;
        cabeza -> siguiente = cabeza;
    } else {
        Nodo * aux = cabeza;
        while (aux -> siguiente != cabeza) {
            aux = aux -> siguiente;
        }
        aux -> siguiente = nuevo;
        nuevo -> siguiente = cabeza;
    }
    cout << "Elemento insertado: " << dato << endl;
}

void ListasCirculares::eliminarFinal() {
    if (empty()) {
        cout<<"Lista vacia"<<endl;
        return;
    }
    // que solo haya un nodo en la lista
    if (cabeza -> siguiente == cabeza) {
        delete cabeza;
        cabeza = nullptr;
        cout<<"Se elimino la cabeza" << endl;
    }
    // eliminar el ultimo nodo
    Nodo * aux = cabeza;
    while (aux -> siguiente -> siguiente != cabeza ) {
        aux = aux -> siguiente;
    }
    Nodo * ultimo = aux -> siguiente;
    // ya tenemos el ultimo nodo
    // reapuntamos el ultimo nodo en cabeza
    aux -> siguiente = cabeza;
    delete ultimo;
    cout<<"Se elimino un valor" << endl;

}
int ListasCirculares::size() {
    if (empty()) {
        return 0;
    } else {
        Nodo * aux= cabeza;
        int contador = 0;
        while (aux-> siguiente != cabeza) {
            ++contador;
            aux = aux -> siguiente;
        }
        return contador;
    }
}

void ListasCirculares::insertarPosicion(int dato, int posicion) {
    if (posicion > size()) {
        cout << "Posicion no valida, insertado al final..." << endl;
        insertarFinal(dato);
        return;
    }
    Nodo * nuevo = new Nodo(dato);
    if (posicion == 1) {
        Nodo * aux = cabeza;
        while (aux -> siguiente != cabeza) {
            aux = aux -> siguiente;
        }
        nuevo -> siguiente = cabeza;
        aux ->siguiente = nuevo;
        cabeza = nuevo;
        cout << "Elemento insertado: " << dato << endl;
        return;
    }
    // si llego a este if esta dentro del rango y que la posicion no es 1
    int  contador = 1;
    Nodo * aux = cabeza;
    while (contador < posicion -1) {
        aux = aux -> siguiente;
        ++contador;
    }
    //hago conexion
    nuevo -> siguiente = aux -> siguiente;
    aux -> siguiente = nuevo;
    cout << "Elemento insertado: " << dato << endl;
}

void ListasCirculares::eliminarPosicion(int posicion) {
    if (empty()) {
        cout << "Lista vacia" << endl;
        return;
    }

    if (posicion > size()) {
        cout << "Posicion no valida, eliminamos al final" << endl;
        eliminarFinal();
        return;
    }
    if (posicion == 1) {
        if (cabeza -> siguiente = cabeza) {
            delete cabeza;
            cabeza = nullptr;
            cout<<"Se elimino la cabeza" << endl;
        } else {
            Nodo * aux = cabeza;
            while (aux -> siguiente != cabeza) {
                aux = aux -> siguiente;
            }
            Nodo * primero = aux -> siguiente;
            cabeza = cabeza -> siguiente;
            delete primero;
            aux -> siguiente = cabeza;
        }
        cout << "Se elimino un nodo" << endl;
        return;
    }
    Nodo * aux = cabeza;
    Nodo * anterior;
    int contador = 1;
    while (contador < posicion) {
        anterior = aux;
        aux = aux -> siguiente;
        ++contador;
    }
    anterior -> siguiente = aux -> siguiente;
    delete aux;
    cout << "Se elimino un dato" << endl;
}