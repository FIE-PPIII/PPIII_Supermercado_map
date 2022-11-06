//
// Created by Usuario on 11/5/2022.
//

#include "ArticuloVenta.h"

using namespace std;

ArticuloVenta::ArticuloVenta() {}

ArticuloVenta::ArticuloVenta(Articulo* pArticulo, int cantidad) {
    this->pArticulo = pArticulo;
    this->cantidad = cantidad;
    this->precio = pArticulo->obtenerPrecio();

    pArticulo->asignarCantidad(pArticulo->obtenerCantidad() - cantidad);
}

ArticuloVenta::~ArticuloVenta() {}

void ArticuloVenta::agregarCantidad(int cant) {
    this->cantidad += cant;
    this->pArticulo->asignarCantidad(pArticulo->obtenerCantidad() - cant);
}

void ArticuloVenta::cancelarVentaArticulo() {
    this->pArticulo->asignarCantidad(this->pArticulo->obtenerCantidad() + this->cantidad);
    this->cantidad = 0;
}