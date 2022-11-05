//
// Created by Usuario on 11/5/2022.
//

#include "ArticuloVenta.h"

using namespace std;

ArticuloVenta::ArticuloVenta(Articulo* pArticulo, int cantidad) {
    this->pArticulo = pArticulo;
    this->cantidad = cantidad;
    this->precio = pArticulo->obtenerPrecio();
}

ArticuloVenta::~ArticuloVenta() {}