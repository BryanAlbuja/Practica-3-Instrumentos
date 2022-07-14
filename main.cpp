#include <iostream>
#include "instrumentos.h"
#include "cuerda.h"
#include "viento.h"
#include "percucion.h"
using namespace std;
int instrumentos::nInstrumento = 0;

int main()
{

    int op = 0;
    string tipo;

    cuerda c;
    viento v;
    percucion p;
    instrumentos i;
    do{

        do{
            cout << "\n\t= Escoja una opcion =\n";
            cout << "1. Ingreso de los datos del instrumento\n";
            cout << "2. Lista de los instrumentos\n";
            cout << "3. Afinar todos los instrumentos\n";
            cout << "4. Total de instrumentos\n";
            cout << "5. Salir\n\n";
            cin >> op;
            if(op>5){
                cout << "\n\t === Numero Incorrecto ===\n";
            };

        }while(op>5);

        switch (op) {
        case 1:

            cout << "De que tipo es tu instrumento? (cuerda / viento / percucion)\n";
            cin >> tipo;
            if(tipo == "cuerda"){
                c.daFicha();
            }else if(tipo == "viento"){
                v.daFicha();
            }else if(tipo == "percucion"){ 
                p.daFicha();
            }
            break;
        case 2:
            cout << "\t=== LISTA DE INSTRUMENTOS ===\n";
            c.listarinstru();
            v.listarinstru();
            p.listarinstru();
            break;
        case 3:
            cout << "\t=== AFINAR LOS INSTRUMENTOS ===\n";
            cout << c.afinar() << endl;
            cout << v.afinar() << endl;
            cout << p.afinar() << endl;
            break;
        case 4:
            cout << "\t=== NUMERO TOTAL DE INSTRUMENTOS ===\n";
            cout << i.nInstrumento;
            break;
        case 5:
            cout << " === FIN DEL MENU ===\n";
            break;
        default:
            break;
        }



    }while(op!=5);
    cout << " === FIN DEL PROGRAMA ===\n";


    return 0;
}
