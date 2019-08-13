#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"

#define PI 3.14

class Circulo : public FiguraGeometrica{
    public:
    //Construtores
        Circulo();
        Circulo(double raio);
    //Metodo get
        double getRaio();
    //Metodo set
        void setRaio(double raio);
    //Metodo
        double calcularArea();

    protected:
        double raio;
};

#endif // CIRCULO_H
