#include "Endereco.h"
#include <iostream>
#include <sstream>

using namespace std;

Endereco::Endereco(){
    rua = numero = bairro = cidade = CEP = " ";
}

Endereco::Endereco(std::string rua,  std::string numero, std::string bairro, std::string cidade, std::string CEP){
    setRua(rua);
    setNumero(numero);
    setBairo(bairro);
    setCidade(cidade);
    setCEP(CEP);
}

std::string Endereco::getRua(){
    return rua;
}

std::string Endereco::getNumero(){
    return numero;
}

std::string Endereco::getBairo(){
    return bairro;
}

std::string Endereco::getCidade(){
    return cidade;
}

std::string Endereco::getCEP(){
    return CEP;
}

void Endereco::setRua(std::string rua){
    this-> rua = rua;
}

void Endereco::setNumero(std::string numero){
    this-> numero = numero;
}

void Endereco::setBairo(std::string bairro){
    this-> bairro = bairro;
}

void Endereco::setCidade(std::string cidade){
    this-> cidade = cidade;
}

void Endereco::setCEP(std::string CEP){
    this-> CEP = CEP;
}

std::string Endereco::toString(){
    stringstream RetornaString;

    RetornaString << rua << ", " << numero << ", " << bairro << ", " << cidade << ", " << CEP;

    return RetornaString.str();

}
