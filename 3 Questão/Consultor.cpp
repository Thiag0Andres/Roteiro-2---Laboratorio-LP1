#include "Consultor.h"
#include <iostream>

using namespace std;

Consultor::Consultor(){
    nome = " ";
    matricula = salario = 0;
}

Consultor::Consultor(int matricula, std::string nome, float salario){
    setMatricula(matricula);
    setNome(nome);
    setSalario(salario);
}

float Consultor::getSalario(){
    return salario + (salario * 0.1);
}

float Consultor::getSalario(float percentual){
    return salario + (salario * (percentual/100));
}

void Consultor::printInf(Funcionario f, Consultor *c){

    cout << "Nome do funcionario: " << f.getNome() << "\nMatricula: " << f.getMatricula() << "\nSalario: " << f.getSalario() << endl << endl;
    cout << "Nome do consultor: " << c-> getNome() << "\nMatricula: " << c-> getMatricula() << "\nSalario (com 10% de aumento): " << c-> getSalario() << endl;
    cout << "Salario (com 30% de aumento): " << c-> getSalario(30) << endl;
}
