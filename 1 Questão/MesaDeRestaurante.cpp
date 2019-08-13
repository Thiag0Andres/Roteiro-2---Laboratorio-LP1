#include "MesaDeRestaurante.h"
#include <iostream>

using namespace std;

MesaDeRestaurante::MesaDeRestaurante(){
    indice = 0;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p){
    int i;
    for (i=0; i<MAX_PEDIDOS; i++){
        if (pedidos[i].getDescricao() == p.getDescricao()){
            pedidos[i].setQuantidade(pedidos[i].getQuantidade() + p.getQuantidade());
            return;
        }
    }

    pedidos[indice] = p;
    indice++;
}

void MesaDeRestaurante::zeraPedidos(){
    int i;
    for (i=0; i<MAX_PEDIDOS; i++){
        pedidos[i].setQuantidade(0);
    }
}

double MesaDeRestaurante::calculaTotal(){
    int i;
    double total = 0;

    for (i=0; i<MAX_PEDIDOS ; i++){
        total += pedidos[i].getPreco() * pedidos[i].getQuantidade();
    }

    return total;
}

void MesaDeRestaurante::printInf(){
    int i;

    for (i=0 ; i<MAX_PEDIDOS ; i++){
        if (pedidos[i].getQuantidade() > 0){
            pedidos[i].printInf();
        }
    }
}
