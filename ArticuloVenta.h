//
// Created by Usuario on 11/5/2022.
//

#ifndef BASE_CPP_ARTICULOVENTA_H
#define BASE_CPP_ARTICULOVENTA_H

#include "Articulo.h"

using namespace std;

class ArticuloVenta {
private:
    Articulo* pArticulo;
    int cantidad;
    double precio;

public:
    ArticuloVenta(Articulo*, int);
    ~ArticuloVenta();

    Articulo* obtenerArticulo() const;
    int obtenerCantidad() const;
    double obtenerPrecio() const;

    void agregarCantidad(int);
    void cancelarVentaArticulo();
};

inline Articulo* ArticuloVenta::obtenerArticulo() const {
    return this->pArticulo;
}

inline int ArticuloVenta::obtenerCantidad() const {
    return this->cantidad;
}

inline double ArticuloVenta::obtenerPrecio() const {
    return this->precio;
}



#endif //BASE_CPP_ARTICULOVENTA_H
