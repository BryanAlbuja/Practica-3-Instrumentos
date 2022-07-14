#include "instrumentos.h"

instrumentos::instrumentos()
{
    this->numeroInstrumento = 0;
    this->tipo = "";
    this->nombre = "";
    this->material = "";
    this->estilo = "";
    this->clasificacion = "";
    this->costo = 0;
}

instrumentos::instrumentos(string nombre, string material, float costo, string estilo) : nombre(nombre), material(material),  costo(costo), estilo(estilo)
{
    instrumentos::nInstrumento++;
    this->numeroInstrumento = instrumentos::nInstrumento;
    this->costo = costo;
    this->nombre = nombre;
    this->material = material;
    this->estilo = estilo;

}

instrumentos::instrumentos(string nombre, string material, string clasificacion, float costo) : nombre(nombre), material(material), costo(costo), clasificacion(clasificacion)
{
    instrumentos::nInstrumento++;
    this->numeroInstrumento = instrumentos::nInstrumento;
    this->costo = costo;
    this->nombre = nombre;
    this->material = material;
    this->clasificacion = clasificacion;

}

instrumentos::instrumentos(string nombre, string material, float costo, float altura) : nombre(nombre), material(material), costo(costo), altura(altura)
{
    instrumentos::nInstrumento++;
    this->numeroInstrumento = instrumentos::nInstrumento;
    this->costo = costo;
    this->nombre = nombre;
    this->material = material;
    this->altura = altura;
}



string instrumentos::informacion1()
{
    string ficha = " \t==== INFORMACION DEL INSTRUMENTO ====\n "
                   "Instrumento numero: " + to_string(this->numeroInstrumento) + "\n" +
            "Nombre: " + this->nombre + "\n" +
            "Material: " + this->material + "\n" +
            "Estilo: " + this->estilo + "\n" +
            "Costo: "+ to_string(this->costo) + "\n\n";

    return ficha;
}

string instrumentos::informacion2()
{
    string ficha = " \t==== INFORMACION DEL INSTRUMENTO ====\n "
                   "Instrumento numero: " + to_string(this->numeroInstrumento) + "\n" +
            "Nombre: " + this->nombre + "\n" +
            "Material: " + this->material + "\n" +
            "Clasificacion: " + this->clasificacion + "\n" +
            "Costo: "+ to_string(this->costo) + "\n\n";

    return ficha;
}

string instrumentos::informacion3()
{
    string ficha = " \t==== INFORMACION DEL INSTRUMENTO ====\n "
                   "Instrumento numero: " + to_string(this->numeroInstrumento) + "\n" +
            "Nombre: " + this->nombre + "\n" +
            "Material: " + this->material + "\n" +
            "Altura: " + to_string(this->altura) + "\n" +
            "Costo: "+ to_string(this->costo) + "\n\n";
    return ficha;
}

string instrumentos::afinar()
{
    return "Afinando";
}



