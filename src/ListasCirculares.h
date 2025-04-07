//
// Created by cland on 02/04/2025.
//

#ifndef LISTASCIRCULARES_H
#define LISTASCIRCULARES_H

struct Nodo{
    int valor;
    Nodo * siguiente;
    Nodo(int dato){
        valor=dato;
        siguiente=nullptr;
    }
};

class ListasCirculares {
private:
    Nodo * cabeza;
public:

    ListasCirculares();

    ~ListasCirculares();

    void buscarDato(int dato);

    bool empty();

    void insertarFinal(int dato);

    void eliminarFinal();

    int size();

    void insertarPosicion(int dato, int posicion);

    void eliminarPosicion(int posicion);

    void mostrar();

    void ejecutar();
};



#endif //LISTASCIRCULARES_H
