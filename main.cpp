#include <iostream>
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
    Grafos():principio(nullptr){}

    Vertice * obtenerVertice(string n) {
        Vertice * temp = principio;
        while (temp != nullptr) {
            if (temp ->nombre == n) {
                return temp;
            }
            temp = temp -> siguiente;
        }
        return nullptr;

    }

    void insertarVertice(string n) {
        if (obtenerVertice(n) != nullptr) {
            cout << "ya existe ese vertice"<<endl;
            return;
        }

        Vertice * nuevo = new Vertice(n);
        if (principio == nullptr) {
            principio = nuevo;
            cout<<"Se inserto el primer vertice:   "<< n<<endl;
        } else {
            Vertice * temp = principio;
            while (temp -> siguiente != nullptr) { // me coloca en el ultimo valor
                temp = temp ->siguiente;
            }
            temp -> siguiente = nuevo;
            cout << "se inserto el vertice:  " << n << endl;
        }
    }

    void insertarArista(string origen, string destino) {
        Vertice * vorigen = obtenerVertice(origen);
        Vertice * vdestino = obtenerVertice(destino);

        if (vorigen == nullptr || vdestino == nullptr) {
            cout << "Uno o ambos vertices no existen" << endl;
            return;
        }

        Arista * nuevaOrigen = new Arista(vdestino);
        nuevaOrigen -> siguiente = vorigen -> arista;
        vorigen -> arista = nuevaOrigen;

        Arista * nuevaDestino = new Arista(vorigen);
        nuevaDestino -> siguiente = vdestino -> arista;
        vdestino -> arista = nuevaDestino;

        cout << "Se inserto la arista de " << origen << " y " << destino << endl;
    }


    void listaAdyacencia() {
        Vertice * v = principio;
        while (v != nullptr) {
            cout<< v -> nombre<< "->";
            Arista * a = v->arista;
            while (a != nullptr) {
                cout<< a -> destino->nombre;
                a = a-> siguiente;
            }
            cout << endl;
            v = v->siguiente;

        }
        cout <<endl;
    }

    void eliminarVertice(string nombre) {
        Vertice * v = obtenerVertice(nombre);
        if (v == nullptr) {
            cout << "Error" << endl;
            return;
        }
        // Primero eliminar todas las aristas que apuntan a este vertice
        Vertice * temp = principio;
        while (temp != nullptr) {
            if (temp != v) {
                Arista * arista = temp ->arista;
                Arista * anterior = nullptr;

                while (arista !=  nullptr) {
                    if (arista->destino == v) {
                        if (anterior == nullptr) {
                            temp -> arista = arista -> siguiente;
                        } else {
                            anterior -> siguiente = arista -> siguiente;
                        }
                        delete arista;
                        break; // Salimos del bucle una vez que eliminamos la arista
                    }

                    anterior = arista;
                    arista = arista->siguiente;
                }
            }
            temp = temp -> siguiente;
        }
        // eliminar sus aristas siguientes
        Arista * a = v->arista;
        while (a !=nullptr) {
            Arista * temp = a;
            a = a -> siguiente;
            delete temp;
        }

        // eliminar e vertice
        if (principio == v) {
            principio = v -> siguiente;
        } else {
            Vertice * anterior = principio;
            while (anterior -> siguiente != v) {
                anterior = anterior -> siguiente;
            }
            anterior -> siguiente = v -> siguiente;
        }
        delete v;
        cout << "Se elimino el vertice: " << nombre << endl;
    }


    ~Grafos() {
        Vertice * v = principio;

        while (v != nullptr) {
            Arista * a = v -> arista; // aqui entro a la lista de aristas de este vertice
            while (a != nullptr) {
                Arista * tempA = a;
                a = a -> siguiente;
                delete tempA;
            }
            Vertice * tempV = v;
            v =v-> siguiente;
            delete tempV;
        }
        cout<<"Memoria Liberada"<< endl;
    }
};


int main() {
    Grafos grafo;
    grafo.insertarVertice("A");
    grafo.insertarVertice("B");
    grafo.insertarVertice("C");
    grafo.insertarArista("A","C");
    grafo.insertarArista("A","B");
    grafo.insertarArista("B","C");

    grafo.listaAdyacencia();

    grafo.eliminarVertice("C");
    grafo.listaAdyacencia();

    grafo.eliminarVertice("D");
    grafo.insertarVertice("D");
    grafo.insertarArista("B","D");
    grafo.insertarArista("A","D");
    grafo.eliminarVertice("A");
    grafo.listaAdyacencia();

    return 0;
}
