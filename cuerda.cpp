#include "cuerda.h"
#include "instrumentos.h"
cuerda::cuerda()
{

}

cuerda::cuerda(string nombre, string material, float costo, string estilo) : instrumentos(nombre, material, costo, estilo)
{

}


void cuerda::daFicha()
{
    string nombre;
    string estilo;
    string material;
    float costo;


    cout << "Hola usuario, ingrese el nombre del instrumento (en minusculas): ";
    getline(cin >> ws, nombre);
    if(nombre == "guitarra"){
        cout << "\nDe que material esta hecho: ";
        getline(cin >> ws, material);
        cout << "\nCual estilo quiere (clasico o electronico): ";
        getline(cin >> ws, estilo);

        if(estilo == "clasico"){
            costo = 150.00;
            cout << "El valor del instrumento es: " << costo;
        }else if(estilo == "electrico"){
            costo = 190.00;
            cout << "El valor del instrumento es: " << costo;
        }



    }

    if(nombre == "violin"){
        cout << "\nDe que material esta hecho: ";
        getline(cin >> ws, material);
        cout << "\nCual estilo quiere (clasico o electronico): ";
        getline(cin >> ws, estilo);

        if(estilo == "clasico"){
            costo = 150.00;
            cout << "El valor del instrumento es: " << costo;
        }else if(estilo == "electronico"){
            costo = 190.00;
            cout << "El valor del instrumento es: " << costo;
        }



    }


    if(nombre == "piano"){
        cout << "\nDe que material esta hecho: ";
        getline(cin >> ws, material);
        cout << "\nCual estilo quiere (vertical o de cola):";
        getline(cin >> ws, estilo);

        if(estilo == "vertical"){
            costo = 250.00;
            cout << "El valor del instrumento es: " << costo;
        }else if(estilo == "de cola"){
            costo = 290.00;
            cout << "El valor del instrumento es: " << costo;
        }


    }

    instrumentos c(nombre, material, costo, estilo);
    this->instrumentoTODO.push_back(c);

}

void cuerda::listarinstru()
{

        if(this->instrumentoTODO.empty()){
            cout << "No hay ningun instrumento de cuerda\n";
        }else{
            for(instrumentos c : this->instrumentoTODO){
                cout << "\t=== INSTRUMENTOS DE CUERDA ===\n";
                cout << c.informacion1();
            }
        }


}


string cuerda::afinar()
{
    string nombre;
    return "Nombre: " + nombre + "Ajustando cuerdas";
}



