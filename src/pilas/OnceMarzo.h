//
// Created by cland on 11/03/2025.
//

#ifndef ONCEMARZO_H
#define ONCEMARZO_H
#include <stack>
using namespace std;

class OnceMarzo {
public:
  struct Pila;
  void clase();
  stack<int> pila;
  const int MAX = 5; // cuantas posiciones tiene mi arreglo
  bool vacia();
};



#endif //ONCEMARZO_H
