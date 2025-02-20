//
// Created by cland on 20/02/2025.
//

#include "Division.h"

#include <iostream>
int Division::operacion(int divisor, int dividendo) {

    if (divisor < dividendo) {
        return 0;
    }
        if (divisor % dividendo == 0) {
             return 1 + operacion(divisor - dividendo, dividendo);

    }

}
