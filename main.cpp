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

void inOrden(Nodo * nodo) {
    if (nodo == nullptr) {
        return;
    }
    inOrden(nodo->izquierda);
    cout<< nodo->valor<<" ";
    inOrden(nodo->derecha);
}

void PreOrden(Nodo * nodo) {
    if (nodo == nullptr) {
        return;
    }
    cout<< nodo -> valor<< " ";
    PreOrden(nodo -> izquierda);
    PreOrden(nodo -> derecha);
}

void PostOrden(Nodo * nodo) {
    if (nodo == nullptr) {
        return;
    }
    PostOrden(nodo -> izquierda);
    PostOrden(nodo -> derecha);
    cout<< nodo -> valor<<" ";
}


Nodo * sucesor(Nodo * nodo) {
    while (nodo -> izquierda != nullptr) {
        nodo = nodo -> izquierda;
    }
    return nodo;
}

Nodo* eliminar(Nodo* nodo, int valor) {
    if (nodo == nullptr) return nullptr;

    if (valor < nodo->valor) {
        nodo->izquierda = eliminar(nodo->izquierda, valor);
    } else if (valor > nodo->valor) {
        nodo->derecha = eliminar(nodo->derecha, valor);
    } else {
        // Caso 1: sin hijos
        if (nodo->izquierda == nullptr && nodo->derecha == nullptr) {
            delete nodo;
            return nullptr;
        }

        // Caso 2: un solo hijo
        else if (nodo->izquierda == nullptr) {
            Nodo* temp = nodo->derecha;
            delete nodo;
            return temp;
        } else if (nodo->derecha == nullptr) {
            Nodo* temp = nodo->izquierda;
            delete nodo;
            return temp;
        }

        // Caso 3: dos hijos
        else {
            Nodo* temp = sucesor(nodo->derecha); // el menor del subárbol derecho
            nodo->valor = temp->valor;
            nodo->derecha = eliminar(nodo->derecha, temp->valor);
        }
    }
    return nodo;
}


int contarHojas(Nodo * nodo) {
    if (nodo == nullptr) {
        return 0;
    }
    if (nodo -> izquierda == nullptr && nodo -> derecha == nullptr) {
        return 1;
    }
    return contarHojas(nodo -> izquierda) + contarHojas(nodo -> derecha);
}


bool esLleno(Nodo* nodo) {
    if (nodo == nullptr) return true;

    if (nodo->izquierda == nullptr && nodo->derecha == nullptr)
        return true;

    if (nodo->izquierda != nullptr && nodo->derecha != nullptr)
        return esLleno(nodo->izquierda) && esLleno(nodo->derecha);

    // Tiene solo un hijo
    return false;
}


void destruir(Nodo * &nodo) {
    if (nodo == nullptr) {
        return;
    }
    destruir(nodo -> izquierda);
    destruir(nodo -> derecha);
    delete nodo;
    nodo = nullptr;
}


void Recorridos(Nodo * nodo) {
    cout<<"~~   Los recorridos son:   ~~" << endl;
    cout << "--Recorrido InOrden: "<<endl;
    cout<<"     ";
    inOrden(nodo);
    cout << endl;
    cout << "--Recorrido PreOrden: "<<endl;
    cout<<"     ";
    PreOrden(nodo);
    cout << endl;
    cout << "--Recorrido PostOrden: "<<endl;
    cout<<"     ";
    PostOrden(nodo);
    cout << endl<<endl<<endl;
}


int main() {
    int codigos[15] = {30, 15, 50, 10, 20, 40, 60, 5, 12, 18, 25, 35, 45, 55, 70};


    for (int i = 0; i < 15; ++i) insertar(codigos[i],raiz);

    cout<<endl;
    Recorridos(raiz);

    eliminar(raiz,15);
    eliminar(raiz,60);
    eliminar(raiz,5);
    cout<<"Se eliminaron los nodos: 15, 60 y 5"<<endl<<endl<<endl;

    Recorridos(raiz);

    cout<< "El arbol tiene: "<< contarHojas(raiz) << " hojas."<< endl;

    if (esLleno(raiz)) {
        cout << "El arbol es lleno" << endl;
    } else {
        cout << "El arbol NO es lleno" << endl;
    }


    cout << "************************************************************************************************"<< endl;
    destruir(raiz);
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.