#pragma once
#include "ListaLibros.h"
#include <string>
#include <iostream>
#include <fstream>
  // Aseg�rate de tener instalada la librer�a Haru PDF

class GenerarPDFLibros {
public:
    GenerarPDFLibros(ListaLibros& listaLibros);
    void generarPDF(const std::string& nombreArchivo);

private:
    ListaLibros& listaLibros;
};
