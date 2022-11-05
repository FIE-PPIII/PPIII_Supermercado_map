//
// Created by Usuario on 11/4/2022.
//

#ifndef BASE_CPP_SUPERMERCADO_H
#define BASE_CPP_SUPERMERCADO_H

#include <string>
#include <map>
#include <vector>

#include "Articulo.h"
#include "Caja.h"

using namespace std;

const int CAJAS = 5;

class Supermercado {
private:
    string nombre;
    string direccion;
    map<int, Articulo> stock;
    vector<Caja> cajas;

public:
    Supermercado(const string, const string);
    ~Supermercado();

    void asignarNombre(const string);
    void asignarDireccion(const string);

    string obtenerNombre() const;
    string obtenerDireccion() const;


};

inline void Supermercado::asignarNombre(const string n) {
    this->nombre = n;
}

inline void Supermercado::asignarDireccion(const string d) {
    this->direccion = d;
}

inline string Supermercado::obtenerNombre() const {
    return this->nombre;
}

inline string Supermercado::obtenerDireccion() const {
    return this->direccion;
}


#endif //BASE_CPP_SUPERMERCADO_H
