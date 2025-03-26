//
// Created by cland on 12/03/2025.
//

#ifndef DINAMICAS_H
#define DINAMICAS_H

struct Nodo {
    int valor;
    Nodo* siguiente; // a donde es el siguiente que se apunta
};

class Dinamicas {
private:
    Nodo* pila;
public:
    Dinamicas();
    //~Dinamicas();
    bool vacia();
    void push(int valor);
    void pop();
    void mostrar();
    void destruir();
    void ejecutar();
    void tamanio();
};



#endif //DINAMICAS_H
