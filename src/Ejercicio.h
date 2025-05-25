//
// Created by cland on 22/05/2025.
//

#ifndef EJERCICIO_H
#define EJERCICIO_H



class Ejercicio {
private:
    int array[5] = {134,43,21,432,531};
    int t = sizeof(array) / sizeof(array[0]);
public:
    static void radixSort(int array[], int t);
    static int maximo(const int a[], int n);
    static void countingSort(int array[], int t, int exp);
    void ejecutar();
};



#endif //EJERCICIO_H
