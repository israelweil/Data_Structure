//
// Created by cland on 20/03/2025.
//

#ifndef COLASSIMPLES_H
#define COLASSIMPLES_H

struct Nodo {
    int valor;
    Nodo *siguiente;
};

class ColasSimples {
private:
    Nodo * frente;
    Nodo * final;
public:
    ColasSimples();
    void ejecutar();
    bool empty();
    void enqueue(int x);
    void dequeue();
    void show();
    void destroy();
};



#endif //COLASSIMPLES_H
