// P3Lab1_FelixDominguez.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int inco,v1,v2;
    cout << "Seleccione la incognita A/B/C: " << endl;
    cin >> inco;

    cout << "Ecuacion inicial:" << endl;
    cout << "C^2 = A^2 + B^2" << endl;
    if (inco == 1) {
        cout << "Despejar para A" << endl;
        cout << "A^2 = C^2 - B^2" << endl;

        cout << "Ingrese el valor de C: " << endl;
        cin >> v1;

        cout << "Ingrese el valor de B: " << endl;
        cin >> v2;

        if (v2 > v1) {
            cout << "El valor de B no puede ser mayor que el de C" << endl;
        }if (v1 > 15 || v2 > 15 || v1 < 4 || v2 < 4) {
            cout << "Los valores de las variables deben de ser mayores a 3 y menores que 16" << endl;
        }
        else {
            cout << "Ecuacion: " << endl;
            cout << "A^2 = " << v1 << "^2 - " << v2 << "^2" << endl;
        }

    }
    else if (inco == 2) {
        cout << "Despejar para B" << endl;
        cout << "B^2 = C^2 - A^2" << endl;

        cout << "Ingrese el valor de C: " << endl;
        cin >> v1;

        cout << "Ingrese el valor de A: " << endl;
        cin >> v2;

        if (v2 > v1) {
            cout << "El valor de B no puede ser mayor que el de C" << endl;
        }if (v1 > 15 || v2 > 15 || v1 < 4 || v2 < 4) {
            cout << "Los valores de las variables deben de ser mayores a 3 y menores que 16" << endl;
        }
        else {
            cout << "Ecuacion: " << endl;
            cout << "B^2 = " << v1 << "^2 - " << v2 << "^2" << endl;
        }

    }
    else if (inco == 3) {
        cout << "Despejar para C" << endl;
        cout << "C^2 = A^2 + B^2" << endl;

        cout << "Ingrese el valor de A: " << endl;
        cin >> v1;

        cout << "Ingrese el valor de B: " << endl;
        cin >> v2;

        if (v2 > v1) {
            cout << "El valor de B no puede ser mayor que el de C" << endl;
        }if (v1 > 15 || v2 > 15 || v1 < 4 || v2 < 4) {
            cout << "Los valores de las variables deben de ser mayores a 3 y menores que 16" << endl;
        }
        else {
            cout << "Ecuacion: " << endl;
            cout << "C^2 = " << v1 << "^2 + " << v2 << "^2" << endl;
        }

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
