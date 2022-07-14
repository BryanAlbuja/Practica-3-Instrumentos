#ifndef VIENTO_H
#define VIENTO_H
#include "instrumentos.h"
#include <vector>
class viento : public instrumentos
{
private:
    vector <instrumentos> instrumentoTODO;
public:
    viento();
    viento(string nombre, string material, float costo, string clasificacion);

    void daFicha();
    void listarinstru();

    string afinar();
};

#endif // VIENTO_H
