#include <iostream>

#include "Voltear_Cadena.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Voltear_Cadena voltear;
    string palabra;
    cout<<"Ingrese una palabra: ";
    cin >> palabra;
    int i = palabra.length();
    voltear.voltear(palabra,i);
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.