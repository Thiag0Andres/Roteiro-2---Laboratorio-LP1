#include "Pedido.h"
#include <iostream>

using namespace std;

Pedido::Pedido(){
    descricao = " ";
    numero = quantidade = preco = 0;
}

Pedido::Pedido(int numero, std::string descricao, int quantidade, double preco){
    setNumero(numero);
    setDescricao(descricao);
    setQuantidade(quantidade);
    setPreco(preco);
}

int Pedido::getNumero(){
    return numero;
}

std::string Pedido::getDescricao(){
    return descricao;
}

int Pedido::getQuantidade(){
    return quantidade;
}

double Pedido::getPreco(){
    return preco;
}

void Pedido::setNumero(int numero){
    this-> numero = numero;
}

void Pedido::setDescricao(std::string descricao){
    this-> descricao = descricao;
}

void Pedido::setQuantidade(int quantidade){
    this-> quantidade = quantidade;
}

void Pedido::setPreco(double preco){
    this-> preco = preco;
}

void Pedido::printInf() {
    cout << "Numero do pedido: " << numero << "\nDescricao: " << descricao << "\nQuantidade: " << quantidade << "\nPreco: " << preco <<
    "\nTotal: " << preco*quantidade << endl;
}

