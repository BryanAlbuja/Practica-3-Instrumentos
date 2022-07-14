#ifndef CUERDA_H
#define CUERDA_H
#include "instrumentos.h"
#include <vector>

class cuerda : public instrumentos
{
private:
    vector <instrumentos> instrumentoTODO;
public:
    cuerda();
    cuerda(string nombre, string material, float costo, string estilo);

    void daFicha();
    void listarinstru();

    string afinar();
};

#endif // CUERDA_H
