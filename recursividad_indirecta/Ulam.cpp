#include <iostream>
//
// Created by cland on 24/02/2025.
//
using namespace std;
#include "Ulam.h"
void Ulam::ulam(int n) {
    if (n == 1) {
       cout<<n<< " ";
        return;
    } else {
        cout << n << " ";
        if (n%2 == 0) {
            ulamPar(n);
        } else {
            ulamImpar(n);
        }
    }
}

void Ulam::ulamPar(int n) {
    ulam(n/2);
}

void Ulam::ulamImpar(int n) {
    ulam(3*n+1);
}
