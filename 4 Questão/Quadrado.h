#ifndef QUADRADO_H
#define QUADRADO_H

#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica{
    public:
    //Construtores
        Quadrado();
        Quadrado(double lado);
    //Metodo get
        double getLado();
    //Metodo set
        void setLado(double lado);
    //Metodo
        double calcularArea();

    protected:
        double lado;
};

#endif // QUADRADO_H
