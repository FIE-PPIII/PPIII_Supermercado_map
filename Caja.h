//
// Created by Usuario on 11/5/2022.
//

#ifndef BASE_CPP_CAJA_H
#define BASE_CPP_CAJA_H

#include <map>

#include "Venta.h"

using namespace std;

class Caja {
private:
    int numero;
    map<int, Venta> ventas;
    double monto;

public:
    Caja(const int);
    ~Caja();

    int obtenerNroCaja() const;
    const map<int, Venta> & obtenerVentas() const;
    double obtenerMontoCaja() const;

    void insertarVenta(const Venta &);
};

inline int Caja::obtenerNroCaja() const {
    return this->numero;
}

inline const map<int, Venta> & Caja::obtenerVentas() const {
    return this->ventas;
}



#endif //BASE_CPP_CAJA_H
