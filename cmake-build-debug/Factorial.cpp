//
// Created by cland on 16/02/2025.
//

#include "Factorial.h"

#include <iostream>

int factorial(int n) {
    if (n <= 1) return 1;

        int subSolution = factorial(n - 1);
        int solution = n * subSolution;
        return solution;

}
void mostrarResultado(int n) {
    std::cout << "El factorial de " << n << " es " << factorial(n) << std::endl;
}
