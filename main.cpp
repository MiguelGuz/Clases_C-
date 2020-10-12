#include <iostream>
#include "computadora.h"
#include "laboratorio.h"

using namespace std;

int main(){

    computadora c02 = computadora("pc personal",
                                    "windows",
                                    "lenovo",
                                    4.00);
    computadora c03;
    c03.setNombre("pc personal");
    c03.setSistemaop("windows");
    c03.setMarca("Hp");
    c03.setMemoriaRam(8.00);

    laboratorio lb;
    lb.agregarcomputadora(c02);
    lb.agregarcomputadora(c03);

    lb.mostrar();

    //cout<< c03.getNombre()<<endl;
    //cout<< c03.getSistemaop()<<endl;
    //cout<< c03.getMarca()<<endl;
    //cout<< c03.getMemoriaRam()<<endl;

return 0;
}