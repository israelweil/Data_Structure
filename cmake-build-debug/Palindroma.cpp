//
// Created by cland on 23/02/2025.
//

#include "Palindroma.h"

#include <iostream>
using namespace std;
bool Palindroma::palabra(string p, int longitud) {
    if (longitud <= 0) return 0;

    letra = palabra(p,longitud-1);
    if (p[i] == letra) {
        i++;
        return 1;
    } else {
        return 0;
    }

}
string Palindroma::resultado(bool p) {
    if (p) {
        cout << "La palabra es palindroma" << endl;
    } else {
        cout << "La palabra no es palindroma" << endl;
    }
}