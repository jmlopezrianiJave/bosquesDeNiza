//
// Created by jmlop on 10/6/2021.
//

#include "Propietario.h"

void Propietario::setNombre(string nombre){
    this->nombre = nombre;
}

string Propietario::getNombre(){
    return nombre;
}

void Propietario::setId(int id){
    this->id = id;
}

int Propietario::getId(){
    return id;
}

void Propietario::setPropiedad(Propiedad propiedad){
    this->propiedad = propiedad;
}

Propiedad Propietario::getPropiedad(){
    return propiedad;
}
float Propietario::valorAPagar(int valorBase){
    return propiedad.calcValorAPagar(valorBase);
}