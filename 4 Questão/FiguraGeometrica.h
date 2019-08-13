#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <string>

class FiguraGeometrica{
    public:
    //Construtores
        FiguraGeometrica();
        FiguraGeometrica(std::string nome);
    //Destrutor
        virtual ~FiguraGeometrica();
    //Metodo get
       std::string getNome();
    //Metodo set
        void setNome(std::string nome);
    //Virtual puro
        virtual double calcularArea() = 0;

    protected:
        std::string nome;

};

#endif // FIGURAGEOMETRICA_H
