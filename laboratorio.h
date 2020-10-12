#ifndef LABORATIROP_H
#define LABORATORIO_H

#include "computadora.h"

class laboratorio
{
    computadora arreglo[5];
    size_t cont;

    public:
    laboratorio();
    void agregarcomputadora(const computadora &p);
    void mostrar();
};

#endif