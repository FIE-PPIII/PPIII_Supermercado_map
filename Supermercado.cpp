//
// Created by Usuario on 11/4/2022.
//

#include "Supermercado.h"
#include "Caja.h"
#include "Articulo.h"

using namespace std;

Supermercado::Supermercado(const string nombre, const string direccion) {
    this->nombre = nombre;
    this->direccion = direccion;
    for (int i = 1; i <= 5; i++)
        this->cajas.push_back(Caja(1));
}

Supermercado::~Supermercado() {}