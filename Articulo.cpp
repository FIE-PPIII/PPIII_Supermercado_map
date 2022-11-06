//
// Created by Usuario on 11/4/2022.
//

#include "Articulo.h"

using namespace std;

Articulo::Articulo(const int codigo, const string nombre, const double precio, const int cant) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->precio = precio;
    this->cantidad = cant;
}

Articulo::~Articulo() {}
