//
// Created by jmlop on 10/6/2021.
//

#ifndef BOSQUESDENIZA_FUNDADOR_H
#define BOSQUESDENIZA_FUNDADOR_H
#include "Propietario.h"

class Fundador : public Propietario{
protected:
    virtual void mostrarBeneficios() override;
public:
    Fundador();
    Fundador(string nombre, int id, Propiedad propiedad){
        setNombre(nombre);
        setId(id);
        setPropiedad(propiedad);
    }
};
#endif //BOSQUESDENIZA_FUNDADOR_H
