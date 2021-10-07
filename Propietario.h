//
// Created by jmlop on 10/6/2021.
//

#ifndef BOSQUESDENIZA_PROPIETARIO_H
#define BOSQUESDENIZA_PROPIETARIO_H
#include <iostream>
#include <stdlib.h>
#include "Propiedad.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Propietario{
private:
    string nombre;
    int id;
    Propiedad propiedad;
public:
    void setNombre(string nombre);
    string getNombre();
    void setId(int id);
    int getId();
    void setPropiedad(Propiedad propiedad);
    Propiedad getPropiedad();
    float valorAPagar(int valorBase);
protected:
    virtual void mostrarBeneficios() = 0;
};
#endif //BOSQUESDENIZA_PROPIETARIO_H
