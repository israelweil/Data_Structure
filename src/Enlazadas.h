//
// Created by cland on 31/03/2025.
//

#ifndef ENLAZADAS_H
#define ENLAZADAS_H

struct Nodo {
    int valor;
    Nodo *siguiente;
    Nodo * anterior;

    explicit Nodo(int valor) : valor(valor), siguiente(nullptr), anterior(nullptr) {}

};

class Enlazadas {
private:
    Nodo *cabeza;
    Nodo *cola;
public:
    Enlazadas();

    ~Enlazadas();

    bool empty();

    void insertarFinal(int dato);

    int numeroNodos();

    void insertarPosicion(int dato, int posicion);

    void eliiminarPosicion(int posicion);

    void mostrar();


    void ejecutar();
};



#endif //ENLAZADAS_H
