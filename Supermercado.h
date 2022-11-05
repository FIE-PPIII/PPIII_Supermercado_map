//
// Created by Usuario on 11/4/2022.
//

#ifndef BASE_CPP_SUPERMERCADO_H
#define BASE_CPP_SUPERMERCADO_H

#include <string>
#include <map>
#include <vector>

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


#endif //BASE_CPP_SUPERMERCADO_H
