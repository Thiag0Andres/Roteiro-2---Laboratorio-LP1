#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(){
    nome = " ";
    salario = 0;
}

TrabalhadorPorHora::TrabalhadorPorHora(std::string nome, float valorDaHora){
    setNome(nome);
    setValorDaHora(valorDaHora);
    setSalario(0);
}

float TrabalhadorPorHora::getValorDaHora(){
    return valorDaHora;
}

void TrabalhadorPorHora::setValorDaHora(float valorDaHora){
    this-> valorDaHora = valorDaHora;
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais){
    float pagSemanal = 0;
    int horaExtra;

    if(horasSemanais <= 40){
        pagSemanal = horasSemanais * valorDaHora;
    }
    else if(horasSemanais > 40){
        horaExtra = horasSemanais - 40;
        pagSemanal = (40 * valorDaHora) + ((horaExtra * 1.5) * valorDaHora);
    }

    salario = pagSemanal * 4;

    return pagSemanal;
}

