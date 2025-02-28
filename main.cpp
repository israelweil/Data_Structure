#include <iostream>

using namespace std;
void cambio(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b = temp;
}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int variable = 10;
    int* p;
    int* q;
    p = &variable;
    q=p;
    cout << "el valor de la variable: " << variable << endl;
    cout<< " E l espacio en memoria es: " << *q<< endl;

    int x=10, y=9;
    cout << "x: " << x << " y: " << y << endl;
    cambio(&x,&y);
    cout << "x: " << x << " y: " << y << endl;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.