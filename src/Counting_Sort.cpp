//
// Created by cland on 21/05/2025.
//
// cuenta cuntas veces apaarece cadda valor en el arreglo de entrada
// -encuentra el valor maximo del arreglo
// se llena un arreglo countcon los valores y mientras se va llenando cuenta cuandotos valores hay
// {7,9,1,5,3]
#include "Counting_Sort.h"
#include <iostream>
using namespace std;



int Counting_Sort::maximo(int a[], int t) {
    int max = a[0];
    for(int i = 1; i < longitud; ++i){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;

}
void Counting_Sort::countingSort(int original[],int t, int ordenado[]) {
    int M = maximo(original, t);
    int count[M +1]={0};

    for (int i = 0; i < t; i++) {
        count[original[i]]++;
    }

    for (int i = 1; i <= M; i++) {
        count[i] += count[i - 1];
    }

    for (int i =t-1;i>=0;i--) {
        ordenado[count[original[i]]-1] = original[i];
        count[original[i]]--;
    }
}


void Counting_Sort::ejecutar() {

    countingSort(original,longitud,ordenado);

    cout<<"Arreglo desordenado: "<<endl;
    for (int i = 0; i < longitud; ++i) {
        cout<<original[i]<<" ";
    }
    cout<<endl;

    cout<<"Arreglo ordenado: "<<endl;
    for (int i = 0; i < longitud; ++i) {
        cout<<original[i]<<" ";
    }
    cout<<endl;
}
