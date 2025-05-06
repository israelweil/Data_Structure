#include <iostream>
#include "src/Ejercicio.h"

int main() {
    Ejercicio reg("personas.json");
    int opc = 0;
    while (opc != 5) {
        std::cout << "\nMenu:\n"
                  << "1) Agregar persona\n"
                  << "2) Modificar persona\n"
                  << "3) Eliminar persona\n"
                  << "4) Mostrar listado\n"
                  << "5) Salir\n"
                  << "Elija opcion: ";
        if (!(std::cin >> opc)) break;
        if (opc == 1) {
            std::string nombre; int edad;
            std::cout << "Nombre: "; std::cin >> std::ws; std::getline(std::cin, nombre);
            std::cout << "Edad: "; std::cin >> edad;
            reg.agregar(nombre, edad);
            reg.guardar();
        } else if (opc == 2) {
            int id; std::string nombre; int edad;
            std::cout << "ID a modificar: "; std::cin >> id;
            std::cout << "Nuevo nombre: "; std::cin >> std::ws; std::getline(std::cin, nombre);
            std::cout << "Nueva edad: "; std::cin >> edad;
            if (reg.modificar(id, nombre, edad)) reg.guardar();
            else std::cout << "ID no encontrado\n";
        } else if (opc == 3) {
            int id;
            std::cout << "ID a eliminar: "; std::cin >> id;
            if (reg.eliminar(id)) reg.guardar();
            else std::cout << "ID no encontrado\n";
        } else if (opc == 4) {
            reg.mostrar();
        }
    }
    return 0;
}
