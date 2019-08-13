#include "Trabalhador.h"

Trabalhador::Trabalhador(){
    nome = " ";
    salario = 0;
}

Trabalhador::Trabalhador(std::string nome, float salario){
    setNome(nome);
    setSalario(salario);
}

std::string Trabalhador::getNome(){
    return nome;
}

float Trabalhador::getSalario(){
    return salario;
}

void Trabalhador::setNome(std::string nome){
    this-> nome = nome;
}

void Trabalhador::setSalario(float salario){
    this-> salario = salario;
}

float Trabalhador::calcularPagamentoSemanal(int horasSemanais){
}

