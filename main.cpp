#include <iostream>

#include "cmake-build-debug/Division.h"

using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    cout << "Dame el divisor: " << endl;
    int divisor;
    cin >> divisor;
    cout<< "Dame el dividendo: " << endl;
    int dividendo;
    cin >> dividendo;
    Division division;
    cout << "El resultado es: " << division.operacion(divisor,dividendo);

}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.