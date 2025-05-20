//
// Created by cland on 19/05/2025.
//

#include "Quicksort.h"

#include <iostream>
// si tengo una lista de numeros {1,5,3,7,5,9,10,8}
// toma el pibote que queramos en este caso el 7
// y hace un arreglo donde pone ordenados los numeros menores a este pubote
// h=y hace otro arrelgo ordenado donde pone los nunmeros mayores a este pibote

using namespace std;

void Quicksort::quicksort(vector<int> & a, int inicio, int fin) {
    if (inicio >= fin) return;

    int i = inicio;
    int d = fin;
    int pivote = a[(inicio + fin) / 2];

    while (i <= d) {
        while (a[i] < pivote) ++i;
        while (a[d] > pivote) --d;

        if (i <= d) {
            swap(a[i],a[d]);
            ++i;
            --d;
        }
    }
    quicksort(a,inicio,d);
    quicksort(a,i,fin);
}

void Quicksort::ejecutar() {
    cout << "arreglo original:";
    for (int num : array) {
        cout << num<< " ";
    }
    cout<<endl;
    quicksort(array, 0,array.size());
    cout << "arreglo ordenado:";
    for (int num : array) {
        cout << num<< " ";
    }
    cout<<endl;
}