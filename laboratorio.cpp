#include "laboratorio.h"

laboratorio::laboratorio()
{
    cont = 0;

}

void laboratorio::agregarcomputadora(const computadora &p)
{
    if (cont < 5){
        arreglo[cont]=p;
        cont++;
    }
    else{
        cout<<"arreglo completo"<<endl;
    }
}

void laboratorio::mostrar()
{
    for(size_t i=0;i<cont;i++){
        computadora &c=arreglo[i];
        cout <<"Nombre del Equipo: "<<arreglo[i].getNombre()<<endl;
        cout <<"Sistema Operativo: "<<arreglo[i].getSistemaop()<<endl;
        cout <<"Marca del Equipo: "<<arreglo[i].getMarca()<<endl;
        cout <<"Memoria Ram: "<<arreglo[i].getMemoriaRam()<<"gb"<<endl;
        cout<<"-------------------------"<<endl;
    }
}