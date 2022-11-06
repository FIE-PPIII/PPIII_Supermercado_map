//
// Created by Usuario on 11/4/2022.
//

#include "Supermercado.h"

using namespace std;

Supermercado::Supermercado(const string nombre, const string direccion) {
    this->nombre = nombre;
    this->direccion = direccion;
    for (int i = 1; i <= 5; i++)
        this->cajas.push_back(Caja(1));
}

Supermercado::~Supermercado() {}

void Supermercado::ingresarArticulos() {
    this->stock[2323] = Articulo(2323, "Leche", 63.14, 30);
    this->stock[4545] = Articulo(4545, "Manteca", 87.23, 45);
    this->stock[1212] = Articulo(1212, "Jugo", 52.28, 92);
}