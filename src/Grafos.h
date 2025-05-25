//
// Created by cland on 12/05/2025.
//

#ifndef GRAFOS_H
#define GRAFOS_H
#include <string>
struct Arista;
using namespace std;
struct Vertice {
    string nombre;
    Vertice * siguiente; // apuntador
    //estructura tipo arista
    Arista * arista;


    explicit Vertice(string n): nombre(n),siguiente(nullptr),arista(nullptr){};
};

struct Arista {
    Arista * siguiente; // apuntador
    Vertice * destino;

    Arista(Vertice *  d) {
        destino = d;
        siguiente = nullptr;
    }
};

class Grafos {
private:
    Vertice * principio;


public:
    Grafos();

    ~Grafos();

    Vertice * obtenerVertice(string n);

    void insertarVertice(string n);

    void insertarArista(string origen, string destino);

    void listaAdyacencia();

    void eliminarArista(string origen, string destino);


    void ejecutar();
};



#endif //GRAFOS_H
