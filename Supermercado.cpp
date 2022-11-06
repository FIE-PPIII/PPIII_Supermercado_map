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

void Supermercado::mostrarArticulos(const string mensaje) {
    cout<<mensaje<<endl;
    for (map<int, Articulo>::const_iterator it = this->stock.begin(); it != this->stock.end(); it++)
        cout<<"Codigo: "<<(it->first)<<" - articulo: "<<(it->second.obtenerNombre())<<
        " - precio: "<<(it->second.obtenerPrecio())<<" - cantidad: "<<(it->second.obtenerCantidad())
        <<endl;
}

void Supermercado::mostrarMontoCajas(const string mensaje) {
    cout<<mensaje<<endl;
    for (int i = 0; i < CAJAS; i++)
        cout<<"Caja: "<<this->cajas[i].obtenerNroCaja()<<" - monto:"
        <<this->cajas[i].obtenerMontoCaja()<<endl;
}

void Supermercado::mostrarVentasCaja(const string mensaje) {
    cout<<mensaje<<endl;
    for (int i = 0; i < CAJAS; i++) {
        cout<<"Caja "<<this->cajas[i].obtenerNroCaja()<<": "<<endl;
        map<int, Venta> temp_ventas = this->cajas[i].obtenerVentas();
        for (map<int, Venta>::const_iterator it = temp_ventas.begin(); it != temp_ventas.end(); it++) {
            cout<<"NroTicket: "<<(it->first)<<" - Total: $"<<(it->second.obtenerMontoVenta())<<endl;
            map<int, ArticuloVenta> temp_articulo = it->second.obtenerArticulos();
            for (map<int, ArticuloVenta>::const_iterator it_art = temp_articulo.begin(); it_art != temp_articulo.end(); it_art++) {
                cout<<"Codigo: "<<(it_art->first)<<" - articulo: "<<(it_art->second.obtenerArticulo()->obtenerNombre())<<" - "
                <<(it_art->second.obtenerCantidad())<<" X $"<<(it_art->second.obtenerPrecio())<<endl;
            }
        }
    }
}