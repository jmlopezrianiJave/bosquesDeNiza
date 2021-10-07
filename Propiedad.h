//
// Created by jmlop on 10/6/2021.
//

#ifndef BOSQUESDENIZA_PROPIEDAD_H
#define BOSQUESDENIZA_PROPIEDAD_H
class Propiedad{
private:
    int piso;
    int idP;
    float area;
    bool parqueadero;
    float valorAPagar;
public:
    float calcValorAPagar(int valorBase);
    void setPiso(int piso);
    void setIdP(int idP);
    void setArea(float area);
    void setParqueadero(bool parqueadero);
    void setValorAPagar(float valorAPagar);
    int getPiso();
    int getIdP();
    float getArea();
    bool getParqueadero();
    float getValorAPagar();
};
#endif //BOSQUESDENIZA_PROPIEDAD_H
