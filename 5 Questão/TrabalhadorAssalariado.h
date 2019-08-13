#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador{
    public:
    //Construtores
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(std::string nome, float salario);
    //Metodo
        float calcularPagamentoSemanal(int horasSemanais);

};

#endif // TRABALHADORASSALARIADO_H
