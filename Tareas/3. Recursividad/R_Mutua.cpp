/***********************************************************************
 * Module:  R_Mutua.cpp
 * Author:  Jerson Llumiquinga M.
 * Date: 20/11/2024
 * Purpose: Tipos de Recursividad
 * University: UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 ***********************************************************************/

/** Recursividad Mutua **/
//  N�meros pares e impares

#include <iostream>
using namespace std;
// Declaraci�n de las funciones para la recursividad mutua
bool esPar(int n);
bool esImpar(int n);

// Funci�n para verificar si un n�mero es par
bool esPar(int n) {
    if (n == 0) {
        return true; // Caso base: 0 es par
    } else if (n < 0) {
        return esPar(-n);
    }
    return esImpar(n - 1);
}

bool esImpar(int n) {
    if (n == 0) {
        return false; // Caso base: 0 no es impar
    } else if (n < 0) {
        return esImpar(-n); // Convierte n�meros negativos a positivos
    }
    return esPar(n - 1);
}

int main() {
    int number;
    cout << "Introduce un numero: ";
    cin >> number;

    if (esPar(number)) {
        cout << number << " es un numero par." << endl;
    } else {
        cout << number << " es un numero impar." << endl;
    }

    return 0;
}
