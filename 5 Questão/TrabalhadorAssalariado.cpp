#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(){
    nome = " ";
    salario = 0;
}

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string nome, float salario){
    setNome(nome);
    setSalario(salario);
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(int horasSemanais){
    return salario / 4;
}
