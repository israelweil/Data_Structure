//
// Created by cland on 27/02/2025.
//

#include "Factorial.h"

#include <iostream>
using namespace std;
int Factorial::factorial(int n) {
    if (n <= 1) return 1;
    d = n * factorial(n-1);
    return d;
}

void Factorial::imprimir(int n) {
    cout<<"El factorial es "<<n<<endl;
}
