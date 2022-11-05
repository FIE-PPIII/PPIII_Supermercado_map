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