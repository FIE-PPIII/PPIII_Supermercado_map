//
// Created by Usuario on 11/5/2022.
//

#include "FechaActual.h"

FechaActual::FechaActual()
{
    time_t tSac = time(NULL); // instante actual

    struct tm * tmP = localtime(&tSac);

    this->dd = tmP->tm_mday;
    this->mm = tmP->tm_mon + 1;
    this->aaaa = tmP->tm_year + 1900;
    this->hh = tmP->tm_hour;
    this->mi = tmP->tm_min;
    this->ss = tmP->tm_sec;
}

//-------------------
// Destructor Publico
//-------------------

FechaActual::~FechaActual()
{}