//
// Created by cland on 28/02/2025.
//

#ifndef ANAGRAMA_H
#define ANAGRAMA_H
#include <string>
using namespace std;

class Anagrama {
public:
    bool cadena(string palabra1,int longitud1, string palabra2, int longitud2);
    void imprimir(bool anagrama);
};



#endif //ANAGRAMA_H
