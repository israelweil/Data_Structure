//
// Created by cland on 24/02/2025.
//
#include <cstddef>
using namespace std;
#include "Anagrama.h"
bool Anagrama::palabra(string p1, int longitud1, string p2, int longitud2) {
    if (longitud1 != longitud2) {
        return false;
    }
    if (i > longitud1) {
        return false;
    }
    c=p1[longitud1];

    if (p2.find(c)!= string::npos) {
        return true;
    }

}
