//
// Created by cland on 24/03/2025.
//
// sera dinamica
#ifndef BICOLAS_H
#define BICOLAS_H
struct Nodo {
    int valor;
    Nodo * siguiente;  // apunta a null
    // apuntador
    Nodo * anterior; //apunta a null

};
// creo los 2 apuntaodres que ocupo

class Bicolas {
private:
    Nodo  * frente;
    Nodo * final;
public:
    Bicolas();

    bool empty();

    void enqueueFinal(int x);

    void dequeueFinal();

    void enqueueFrente(int x);

    void dequeueFrente();

    void show();

    void destroy();

    void ejecutar();
};



#endif //BICOLAS_H
