#include <iostream>

#include "Anagrama.h"
int main() {
    Anagrama anagrama;
    cout << "Introduce la primera palabra: "<<endl;
    string p1;
    cin >> p1;
    int l1 = p1.length();
    cout << "Introduce la segunda palabra: "<< endl;
    string p2;
    cin >> p2;
    int l2 = p2.length();
    int caso = anagrama.palabra(p1,l1,p2,l2);
    anagrama.imprimir(caso);
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.