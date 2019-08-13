#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa(std::string nome){
    setNome(nome);
}

Pessoa::Pessoa(std::string nome, Endereco endereco, std::string telefone){
    setNome(nome);
    setEndereco(endereco);
    setTelefone(telefone);
}

std::string Pessoa::getNome(){
    return nome;
}

Endereco Pessoa::getEndereco(){
    return endereco;
}

std::string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setNome(std::string nome){
    this-> nome = nome;
}

void Pessoa::setEndereco(Endereco endereco){
    this-> endereco = endereco;
}

void Pessoa::setTelefone(std::string telefone){
    this-> telefone = telefone;
}

void Pessoa::printInf(Pessoa *p){
    cout << "Nome: " << p-> getNome() << endl << "Endereco: " << p-> endereco.toString() << endl << "Telefone: " << p-> getTelefone() << endl << endl;
}


