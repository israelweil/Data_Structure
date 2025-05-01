//
// Created by cland on 30/04/2025.
//

#ifndef ARBOLES_H
#define ARBOLES_H

struct Nodo {
    int valor;
    Nodo * izquierda;
    Nodo * derecha;

    Nodo(int dato) {
        valor = dato;
        izquierda = nullptr;
        derecha = nullptr;
    }
};

class Arboles {
private:
    Nodo * raiz;
public:
    Arboles();

    void insertar(int dato, Nodo *&nodo);

    void destruir(Nodo *&nodo);

    ~Arboles();
};



#endif //ARBOLES_H
