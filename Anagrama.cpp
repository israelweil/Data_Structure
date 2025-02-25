//
// Created by cland on 24/02/2025.
//
#include <iostream>
using namespace std;
#include "Anagrama.h"
bool Anagrama::palabra(string p1, int longitud1, string p2, int longitud2) {
    if (longitud1 != longitud2) {
        return false;
    }
    if (longitud1== 0) {
        return true;
    }

    c=p1[longitud1-1];
    j=0;
    for (size_t i = 0; i < p2.length(); ++i) {
        j++;
        if (c == p2[i]) {
            p2= p2.erase(i,1);
            return palabra(p1,longitud1-1,p2,longitud2-1);

        }
    }
    return false;

}
void Anagrama::imprimir(bool a) {
    if (a) {
        cout << "Son anagramas";
    } else {
        cout << "No son anagramas";
    }
}
