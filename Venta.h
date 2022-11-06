//
// Created by Usuario on 11/5/2022.
//

#ifndef BASE_CPP_VENTA_H
#define BASE_CPP_VENTA_H

#include <map>

#include "FechaActual.h"
#include "ArticuloVenta.h"

using namespace std;

class Venta {
private:
    static int siguienteNroTicket;

    int nroTicket;
    FechaActual fechaTicket;
    map<int, ArticuloVenta> articulos;
    double monto;

public:
    Venta();
    ~Venta();

    int obtenerNroTicket() const;
    const map<int, ArticuloVenta> & obtenerArticulos() const;
    double obtenerMontoVenta() const;

    void insertarArticuloVenta(Articulo*, const int);
    void borrarArticuloVenta(Articulo*);
    void borrarArticuloVenta(const int);
};

inline int Venta::obtenerNroTicket() const {
    return this->nroTicket;
}

inline const map<int, ArticuloVenta> & Venta::obtenerArticulos() const {
    return this->articulos;
}


#endif //BASE_CPP_VENTA_H
