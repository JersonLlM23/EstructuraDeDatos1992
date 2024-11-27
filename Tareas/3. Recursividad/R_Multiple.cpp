/***********************************************************************
 * Module:  R_Multiple.cpp
 * Author:  Jerson Llumiquinga M.
 * Date: 20/11/2024
 * Purpose: Tipos de Recursividad
 * University: UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 ***********************************************************************/

/** Recursividad M�ltiple **/
// Fibonacci

#include <iostream>
using namespace std;

// Funci�n recursiva
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Caso base
    }
    // Llamadas recursivas m�ltiples
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number;
    cout << "Introduce el n�mero de t�rminos para la serie de Fibonacci: ";
    cin >> number;

    cout << "Serie de Fibonacci: ";
    for (int i = 0; i < number; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
