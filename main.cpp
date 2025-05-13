#include <iostream>
using namespace std;

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
Nodo * raiz;

void insertar(int dato, Nodo * &nodo) {
    if (nodo == nullptr) {
        nodo = new Nodo(dato);
        cout << "Se inserto un nuevo dato: "<< nodo ->valor<<endl;   // eliminar al final esta linea
    } else if (dato < nodo ->valor) {
        insertar(dato, nodo -> izquierda);
    } else {
        insertar(dato, nodo -> derecha);
    }
}

void destruir(Nodo * &nodo) {
    if (nodo == nullptr) {
        return;
    }
    cout<<"Se destruyo el nodo: " << nodo -> valor <<" "<<endl; // eliminar al final esta linea
    destruir(nodo -> izquierda);
    destruir(nodo -> derecha);
    delete nodo;
    nodo = nullptr;
}





int main() {
    int codigos[15] = {30, 15, 50, 10, 20, 40, 60, 5, 12, 18, 25, 35, 45, 55, 70};
    for (int i = 0; i < 15; ++i) {
        insertar(codigos[i],raiz);
    }


    cout << "************************************************************************************************";
    destruir(raiz);
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.