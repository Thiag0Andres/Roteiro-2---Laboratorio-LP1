#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica{
    public:
    //Construtores
        Triangulo();
        Triangulo(double base, double altura);
    //Metodos get
        double getBase();
        double getAltura();
    //Metodos set
        void setBase(double base);
        void setAltura(double altura);
    //Metodo
        double calcularArea();

    protected:
        double base;
        double altura;
};

#endif // TRIANGULO_H
