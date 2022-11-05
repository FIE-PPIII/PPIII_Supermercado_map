//
// Created by Usuario on 11/5/2022.
//

#ifndef BASE_CPP_FECHAACTUAL_H
#define BASE_CPP_FECHAACTUAL_H

#include <iostream>
#include <ctime>

class FechaActual {
private:

    //-------------
    // Dato Privado
    //-------------

    int dd;
    int mm;
    int aaaa;
    int hh;
    int mi;
    int ss;

public:

    //--------------------
    // Constructor Publico
    //--------------------

    FechaActual();

    //-------------------
    // Destructor Publico
    //-------------------

    ~FechaActual();

    //-------------------------
    // Asignar Atributo Publico
    //-------------------------

    void AsignarDD(const int);
    void AsignarMM(const int);
    void AsignarAAAA(const int);
    void AsignarHH(const int);
    void AsignarMI(const int);
    void AsignarSS(const int);

    //-------------------------
    // Obtener Atributo Publico
    //-------------------------

    int ObtenerDD() const;
    int ObtenerMM() const;
    int ObtenerAAAA() const;
    int ObtenerHH() const;
    int ObtenerMI() const;
    int ObtenerSS() const;
};

//-------------------------
// Asignar Atributo Publico
//-------------------------

inline void FechaActual::AsignarDD(const int dd)
{
    this->dd = dd;

    return;
}

inline void FechaActual::AsignarMM(const int mm)
{
    this->mm = mm;

    return;
}

inline void FechaActual::AsignarAAAA(const int aaaa)
{
    this->aaaa = aaaa;

    return;
}

inline void FechaActual::AsignarHH(const int hh)
{
    this->hh = hh;

    return;
}

inline void FechaActual::AsignarMI(const int mi)
{
    this->mi = mi;

    return;
}

inline void FechaActual::AsignarSS(const int ss)
{
    this->ss = ss;

    return;
}

//-------------------------
// Obtener Atributo Publico
//-------------------------

inline int FechaActual::ObtenerDD() const
{
    return this->dd;
}

inline int FechaActual::ObtenerMM() const
{
    return this->mm;
}

inline int FechaActual::ObtenerAAAA() const
{
    return this->aaaa;
}

inline int FechaActual::ObtenerHH() const
{
    return this->hh;
}

inline int FechaActual::ObtenerMI() const
{
    return this->mi;
}

inline int FechaActual::ObtenerSS() const
{
    return this->ss;
}

#endif //BASE_CPP_FECHAACTUAL_H
