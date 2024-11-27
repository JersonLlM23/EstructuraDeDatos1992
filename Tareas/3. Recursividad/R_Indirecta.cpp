/***********************************************************************
 * Module:  R_Indirecta.cpp
 * Author:  Jerson Llumiquinga M.
 * Date: 20/11/2024
 * Purpose: Tipos de Recursividad
 * University: UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 ***********************************************************************/

/** Recursividad Indirecta **/

#include <iostream>
using namespace std;

// Declaraci�n de las funciones para mostrar recursividad indirecta
void functionA(int n);
void functionB(int n);

// Funci�n A: Llama a la funci�n B
void functionA(int n) {
    if (n > 0) {
        cout << "Function A: " << n << endl;
        functionB(n - 1); // Llamada a la funci�n B
    }
}

// Funci�n B: Llama a la funci�n A
void functionB(int n) {
    if (n > 0) {
        cout << "Function B: " << n << endl;
        functionA(n / 2); // Llamada a la funci�n A
    }
}

int main() {
    int number;
    cout << "Introduce un n�mero: ";
    cin >> number;

    cout << "Iniciando recursi�n indirecta:" << endl;
    functionA(number);

    return 0;
}

