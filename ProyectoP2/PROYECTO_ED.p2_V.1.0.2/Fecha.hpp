#include <chrono>
#pragma once
#include <ctime>
#include <iostream>

class Fecha {
private:
    std::time_t tiempo; // Almacena la fecha

public:
    Fecha(); // Constructor por defecto
    Fecha(int day, int month, int year); // Constructor con par�metros
    Fecha(std::time_t tiempo); // Constructor con std::time_t
    int getAnio() const; // M�todo para obtener el a�o
    const std::time_t& getTiempo() const; // Obtener tiempo en std::time_t
    void setTiempo(int day, int month, int year); // Establecer fecha con d�a, mes y a�o
    void setTiempo(const std::time_t& nuevoTiempo); // Establecer fecha con std::time_t

    friend std::ostream& operator<<(std::ostream& os, const Fecha& fecha); // Sobrecarga de operador <<
};
