#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador{
    public:
    //Construtores
        TrabalhadorPorHora();
        TrabalhadorPorHora(std::string nome, float valorDaHora);
    //Metodo get
        float getValorDaHora();
     //Metodo set
        void setValorDaHora(float valorDaHora);
     //Metodo
        float calcularPagamentoSemanal(int horasSemanais);

    private:
        float valorDaHora;
};

#endif // TRABALHADORPORHORA_H
