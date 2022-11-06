//
// Created by Usuario on 11/4/2022.
//

#ifndef BASE_CPP_ARTICULO_H
#define BASE_CPP_ARTICULO_H

#include <string>

using namespace std;

class Articulo {
private:
    int codigo;
    string nombre;
    double precio;
    int cantidad;

public:
    Articulo();
    Articulo(const int, const string, const double, const int);
    ~Articulo();

    void asignarCodigo(const int);
    void asignarNombre(const string);
    void asignarPrecio(const double);
    void asignarCantidad(const int);

    int obtenerCodigo() const;
    string obtenerNombre() const;
    double obtenerPrecio() const;
    int obtenerCantidad() const;
};

inline void Articulo::asignarCodigo(const int cod) {
    this->codigo = cod;
}

inline void Articulo::asignarNombre(const string n) {
    this->nombre = n;
}

inline void Articulo::asignarPrecio(const double p) {
    this->precio = p;
}

inline void Articulo::asignarCantidad(const int c) {
    this->cantidad = c;
}

inline int Articulo::obtenerCodigo() const {
    return this->codigo;
}

inline string Articulo::obtenerNombre() const {
    return this->nombre;
}

inline double Articulo::obtenerPrecio() const {
    return this->precio;
}

inline int Articulo::obtenerCantidad() const {
    return this->cantidad;
}


#endif //BASE_CPP_ARTICULO_H
