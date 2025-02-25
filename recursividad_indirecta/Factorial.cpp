//
// Created by cland on 24/02/2025.
//
using namespace std;
#include "Factorial.h"

int Factorial::factorial(int n) {
    if (n==0) {
        return 1;
    }else {
        return factorial2(n);
    }
}

int Factorial::factorial2(int n) {
    return n* factorial(n-1);
}