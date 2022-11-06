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

void Supermercado::ingresarVentas() {
    Venta venta_1 = Venta();
    venta_1.insertarArticuloVenta(&(this->stock.at(2323)), 3);
    venta_1.insertarArticuloVenta(&(this->stock.at(4545)), 2);
    this->cajas[0].insertarVenta(venta_1);

    Venta venta_2 = Venta();
    venta_2.insertarArticuloVenta(&(this->stock.at(2323)), 2);
    this->cajas[0].insertarVenta(venta_2);

    Venta venta_3 = Venta();
    venta_3.insertarArticuloVenta(&(this->stock.at(2323)), 4);
    this->cajas[2].insertarVenta(venta_3);

    Venta venta_4 = Venta();
    venta_4.insertarArticuloVenta(&(this->stock.at(4545)), 2);
    this->cajas[1].insertarVenta(venta_4);

    Venta venta_5 = Venta();
    venta_5.insertarArticuloVenta(&(this->stock.at(4545)), 1);
    this->cajas[1].insertarVenta(venta_5);

    Venta venta_6 = Venta();
    venta_6.insertarArticuloVenta(&(this->stock.at(4545)), 2);
    this->cajas[3].insertarVenta(venta_6);

    Venta venta_7 = Venta();
    venta_7.insertarArticuloVenta(&(this->stock.at(1212)), 2);
    this->cajas[0].insertarVenta(venta_7);
}