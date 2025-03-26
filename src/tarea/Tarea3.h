//
// Created by cland on 23/03/2025.
//

#ifndef TAREA3_H
#define TAREA3_H
struct Nodo;
typedef char Item; // Tipo de dato que se almacenará en la pila
struct Nodo {
    int valor;
    Nodo * siguiente; // a donde es el siguiente que se apunta
};

class Tarea3 {
private:
    Nodo * pila;
public:
    Tarea3();
    bool vacia();
    void push(Item x);
    void pop();
    void destruir();
    void ejecutar();
    bool esCorrectaLaExpresion(char cad[]); // Verifica si la expresión es correcta
    void imprimr(bool a);
};



#endif //TAREA3_H
