//
// Created by jmlop on 10/6/2021.
//

#include "Propiedad.h"

void Propiedad::setPiso(int piso) {
    this->piso = piso;
}

void Propiedad::setIdP(int idP) {
    this->idP = idP;
}

void Propiedad::setArea(float area) {
    this->area = area;
}

void Propiedad::setParqueadero(bool parqueadero) {
    this->parqueadero = parqueadero;
}

void Propiedad::setValorAPagar(float valorAPagar) {
    this->valorAPagar = valorAPagar;
}

int Propiedad::getPiso()  {
    return piso;
}

int Propiedad::getIdP()  {
    return idP;
}

float Propiedad::getArea()  {
    return area;
}

bool Propiedad::getParqueadero()  {
    return parqueadero;
}

float Propiedad::getValorAPagar()  {
    return valorAPagar;
}

float Propiedad::calcValorAPagar(int valorBase) {
    return 2000 * piso + valorBase * 0.05 * area + valorBase;
}