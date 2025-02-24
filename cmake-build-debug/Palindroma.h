//
// Created by cland on 23/02/2025.
//

#ifndef PALINDROMA_H
#define PALINDROMA_H
#include <string>
using namespace std;


class Palindroma {
public:
  bool palabra(string palabra, int longitud);
  string resultado(bool p);

private:
  int i=1;
  char letra;
};




#endif //PALINDROMA_H
