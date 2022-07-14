#ifndef INSTRUMENTOS_H
#define INSTRUMENTOS_H
#include <string>
#include <iostream>

using namespace std;

class instrumentos
{
private:
    string tipo;
    string nombre;
    string material;
    string estilo;
    string clasificacion;
    double altura;
    double costo;
    int numeroInstrumento;


public:
    static int nInstrumento;
    instrumentos();
    instrumentos(string nombre, string material, float costo, string estilo);
    instrumentos(string nombre, string material, string clasificacion, float costo);
    instrumentos(string nombre, string material, float costo, float altura);

    string informacion1();
    string informacion2();
    string informacion3();

    virtual string afinar();


};

#endif // INSTRUMENTOS_H
