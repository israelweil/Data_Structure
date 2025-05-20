//
// Created by cland on 19/05/2025.
//

#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <vector>
using namespace std;



class Quicksort {
private:
    vector<int> array = {7,9,1,6,4,5,3,8};
public:
    void quicksort(vector<int> &a, int inicio, int fin);

    void ejecutar();
};



#endif //QUICKSORT_H
