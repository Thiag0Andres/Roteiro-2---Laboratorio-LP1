#ifndef CONSULTOR_H
#define CONSULTOR_H

#include "Funcionario.h"


class Consultor : public Funcionario{
    public:
    //Construtores
        Consultor();
        Consultor(int matricula, std::string nome, float salario);
    //Metodos get
        float getSalario();
        float getSalario(float percentual);
    //Metodo
        void printInf(Funcionario f, Consultor *c);

    protected:
        float percentual;
};

#endif // CONSULTOR_H
