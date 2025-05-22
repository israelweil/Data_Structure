//
// Created by cland on 21/05/2025.
//

#ifndef COUNTING_SORT_H
#define COUNTING_SORT_H



class Counting_Sort {
private:
    int original[5] = {7,9,1,5,3};
    int longitud = sizeof(original)/sizeof(original[0]);
    int ordenado[5];



public:
    int maximo(int a[], int t);
    void countingSort(int original[],int longitud, int ordenado[]);
    void ejecutar();
};



#endif //COUNTING_SORT_H
