#include <iostream>

#include "recursividad_indirecta/Factorial.h"
#include "recursividad_indirecta/Ulam.h"
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Ulam ulam;
    int n;
    cout << "Dame un numero: ";
    cin>> n;
    ulam.ulam(n);
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.