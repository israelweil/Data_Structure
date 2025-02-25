
#ifndef ANAGRAMA_H
#define ANAGRAMA_H
#include <string>
using namespace std;

class Anagrama {
public:
    bool palabra(string p1, int longitud1, string p2, int longitud2);
    void imprimir(bool a);
private:
    int i=0;
    int j=0;
    char c;
};



#endif //ANAGRAMA_H
