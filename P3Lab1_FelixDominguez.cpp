// P3Lab1_FelixDominguez.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int inco,v1,v2;
    cout << "Seleccione la incognita A/B/C: ";
    cin >> inco;

    cout << "Ecuacion inicial: ";
    cout << "C^2 = A^2 + B^2";
    if (inco == 1) {
        cout << "Despejar para A";
        cout << "A^2 = C^2 - B^2";

        cout << "Ingrese el valor de C: ";
        cin >> v1;

        cout << "Ingrese el valor de B: ";
        cin >> v2;

    }
    else if (inco == 2) {
        cout << "Despejar para B";
        cout << "B^2 = C^2 - A^2";

        cout << "Ingrese el valor de C: ";
        cin >> v1;

        cout << "Ingrese el valor de A: ";
        cin >> v2;

    }
    else if (inco == 3) {
        cout << "Despejar para C";
        cout << "C^2 = A^2 + B^2";

        cout << "Ingrese el valor de A: ";
        cin >> v1;

        cout << "Ingrese el valor de B: ";
        cin >> v2;
    }

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
