//
// Created by Usuario on 11/5/2022.
//

#include "Caja.h"

using namespace std;

Caja::Caja(const int num) {
    this->numero = num;
    this->monto = 0.0;
}

Caja::~Caja() {}

void Caja::insertarVenta(const Venta & venta) {
    this->ventas[venta.obtenerNroTicket()] = venta;
    this->monto += venta.obtenerMontoVenta();
}