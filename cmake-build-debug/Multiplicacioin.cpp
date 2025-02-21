//
// Created by cland on 20/02/2025.
//

#include "Multiplicacioin.h"

int Multiplicacioin::operacion(int a, int b) {
    if (b<=0) return 0;

        return a+operacion(a,b-1);

}