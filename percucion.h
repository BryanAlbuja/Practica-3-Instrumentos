#ifndef PERCUCION_H
#define PERCUCION_H
#include "instrumentos.h"
#include <vector>
class percucion : public instrumentos
{
private:
    vector <instrumentos> instrumentoTODO;
public:
    percucion();
    percucion(string nombre, string material, float altura, float costo);

    void daFicha();
    void listarinstru();

    string afinar();


};

#endif // PERCUCION_H
