//
// Created by Usuario on 11/5/2022.
//

#include "Venta.h"

using namespace std;

int Venta::siguienteNroTicket = 0;

Venta::Venta() {
    this->monto = 0.0;
    this->nroTicket = siguienteNroTicket++;
}

Venta::~Venta() {}

void Venta::insertarArticuloVenta(Articulo * art, const int cant) {
    if (this->articulos.find(art->obtenerCodigo()) == this->articulos.end()) {
        this->articulos[art->obtenerCodigo()] = ArticuloVenta(art, cant);
    }
    else {
        this->articulos[art->obtenerCodigo()].agregarCantidad(cant);
    }
    this->monto += art->obtenerPrecio() * cant;
}

void Venta::borrarArticuloVenta(const int codigo) {
    if (this->articulos.find(codigo) != this->articulos.end()) {
        ArticuloVenta aux = this->articulos[codigo];
        this->monto -= aux.obtenerPrecio() * aux.obtenerCantidad();
        aux.cancelarVentaArticulo();
        this->articulos.erase(codigo);
    }
}

void Venta::borrarArticuloVenta(Articulo * art) {
    this->borrarArticuloVenta(art->obtenerCodigo());
}