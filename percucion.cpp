#include "percucion.h"
#include "instrumentos.h"

percucion::percucion()
{

}

percucion::percucion(string nombre, string material, float altura, float costo) : instrumentos(nombre, material, altura, costo)
{

}

void percucion::daFicha()
{
    bool altu;
    string nombre;
    float altura;
    string material;
    float costo;


    cout << "Hola usuario, ingrese el nombre del instrumento (en minusculas): ";
    getline(cin >> ws, nombre);
    cout << "\nDe que material esta hecho: ";
    getline(cin >> ws, material);
    cout << "\nEl instrumento tiene una altura ...\n";
    cout << "0. Deternminada \n1. Indeterminada";
    cout << "\nSu opcion es: ";
    cin >> altu;
    if(altu == 0 ){
        cout << "\nIngrese la altura del instrumento: ";
        cin >> altura;
        costo = 120.0;
        cout << "\nEl valor del instrumento es: " << costo;
    }
    if(altu == 1){
        cout << "La altura es INDEFINIDA";
        cout << "\nEl valor del instrumento depende de su altura";
    }

    instrumentos c(nombre, material, altura, costo);
    this->instrumentoTODO.push_back(c);

}

void percucion::listarinstru()
{

    if(this->instrumentoTODO.empty()){
        cout << "No hay ningun instrumento de percucion\n";
    }else{
        for(instrumentos c : this->instrumentoTODO){
            cout << "\t=== INSTRUMENTOS DE PERCUCION ===\n";
            cout << c.informacion3();
        }
    }
}

string percucion::afinar()
{
    string nombre;
    return "Nombre: " + nombre + "Tensando tambores";
}






