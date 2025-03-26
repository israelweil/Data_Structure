//
// Created by cland on 06/03/2025.
//

#ifndef COMUNDIV_H
#define COMUNDIV_H

using namespace std;

class ComunDiv {
public:
    void sacarDivisores(int num, int arreglo[], int divisor, int contador);
    // OPCION 2
    int maximo(int divisor, int dividendo);
    //OPCION 1
    //void sacarDivisores(int num, int arreglo[], int divisor = 1, int contador = num);
    int maximo2(int arregloA[], int arregloB[]);
private:
    int divisoresA[100]={0};
    int divisoresB[100]={0};
};



#endif //COMUNDIV_H
