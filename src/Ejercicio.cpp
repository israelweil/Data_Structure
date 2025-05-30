//
// Created by cland on 22/05/2025.
//
/** {120,75,436} los ordena primero las unidades despues descenas y centenas*/
#include "Ejercicio.h"

#include <iostream>
using namespace std;

int Ejercicio::maximo(const int a[], int n) {
    int temp = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] > temp){
            temp = a[i];
        }
    }
    return temp;
}


void Ejercicio::countingSort(int array[], int t, int exp) {
    int count[10] = {0};
    int nuevo[t];

    for (int i = 0; i < t; i++ ) {
        count[(array[i] / exp)%10]++;
    }
//suma acumulativa
    for (int i = 1; i < 10; i++ ) {
        count[i] += count [i -1];
    }



    for (int i = t-1; i >= 0; i-- ) {
        int digito = (array[i] / exp)%10;
        nuevo[count[digito]-1] = array[i];
        count[digito]--;
    }

    for (int i = 0; i < t; ++i) {
        array[i] = nuevo[i];
    }


}


void Ejercicio::radixSort(int array[], int t) {
    int m = maximo(array,t);
    for (int exp = 1; (m/exp)> 0; exp *=10) {
        countingSort(array,t,exp);
    }
}


void Ejercicio::intercalacion(int a[],int ta, int b[], int tb, int c[]) {
    int i = 0, j=0,k=0;
    for (;i<ta && j<tb; k++) {
        if (a[i]<b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
    }
    for (; i < ta; ++i, k++) {
        c[k] = a[i];
    }
    for (; j < tb; ++j, k++) {
        c[k] = b[j];
    }
}


void Ejercicio::ejecutar() {

    cout<<"Arreglo desordenado:"<<endl;
    for (int i = 0; i < t; ++i) {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    radixSort(array,t);

    cout<<"Arreglo desordenado:"<<endl;
    for (int i = 0; i < t; ++i) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}