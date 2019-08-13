#include "Funcionario.h"

Funcionario::Funcionario(){
    nome = " ";
    salario = matricula = 0;
}

Funcionario::Funcionario(int matricula, std::string nome, float salario){
    setMatricula(matricula);
    setNome(nome);
    setSalario(salario);
}

int Funcionario::getMatricula(){
    return matricula;
}

std::string Funcionario::getNome(){
    return nome;
}

float Funcionario::getSalario(){
    return salario;
}

float Funcionario::getSalario(float percentual){

}

void Funcionario::setMatricula(int matricula){
    this-> matricula = matricula;
}

void Funcionario::setNome(std::string nome){
     this-> nome = nome;
}

void Funcionario::setSalario(float salario){
     this-> salario = salario;
}

