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
    Articulo(const int, const string, const double, const int);
    ~Articulo();

    void asignarCodigo(const int);
    void asignarNombre(const string);
    void asignarPrecio(const double);

    int obtenerCodigo() const;
    string obtenerNombre() const;
    double obtenerPrecio() const;
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

inline int Articulo::obtenerCodigo() const {
    return this->codigo;
}

inline string Articulo::obtenerNombre() const {
    return this->nombre;
}

inline double Articulo::obtenerPrecio() const {
    return this->precio;
}



#endif //BASE_CPP_ARTICULO_H
