#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

using namespace std;

class computadora
{
    string nombre;
    string sistemaop;
    string marca;
    float memoriaRam;
public:
   computadora();
   computadora(const string &nombre,
                const string &sistemaop,
                const string &marca,
                float memoriaRam);
    void setNombre(const string &v);
    string getNombre();
    void setSistemaop(const string &v);
    string getSistemaop();
    void setMarca(const string &v);
    string getMarca();
    void setMemoriaRam(float v);
    float getMemoriaRam();

};

#endif