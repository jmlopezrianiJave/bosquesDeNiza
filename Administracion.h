//
// Created by jmlop on 10/6/2021.
//

#ifndef BOSQUESDENIZA_ADMINISTRACION_H
#define BOSQUESDENIZA_ADMINISTRACION_H

#include "Propietario.h"
#include "Propiedad.h"
#include "map"
using std::map;
using std::iterator;

class Administracion{
private:
    map<int, Propietario>;

public:
    float calcRecaudoAdmin();
    void mostrarBeneficios();
    void verPropsParqueadero();
    void cambiarTipoPropietario(int id);
    bool existePropietario(int id);
    void agregarProp();
    void eliminarProp();
};


#endif //BOSQUESDENIZA_ADMINISTRACION_H
