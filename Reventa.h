//
// Created by jmlop on 10/6/2021.
//

#ifndef BOSQUESDENIZA_REVENTA_H
#define BOSQUESDENIZA_REVENTA_H
#include "Propietario.h"

class Reventa : public Propietario{
protected:
    virtual void mostrarBeneficios() override;
};
#endif //BOSQUESDENIZA_REVENTA_H
