#include "RestauranteCaseiro.h"
#include <iostream>

using namespace std;

RestauranteCaseiro::RestauranteCaseiro(){
    //ctor
}

void RestauranteCaseiro::adicionaAoPedido(int indMesa, Pedido p){
    mesas[indMesa - 1].adicionaAoPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    int i;
    double total = 0;

    for (i=0 ; i<MAX_MESAS; i++){
        total += mesas[i].calculaTotal();
    }

    return total;
}

void RestauranteCaseiro::printInf(){
    int i;

    for (i=0 ; i<MAX_MESAS ; i++){
            cout << "Mesa " << i + 1 << ": \n\n";
            mesas[i].printInf();
            cout << "Total da mesa: " << mesas[i].calculaTotal();
            cout << "\n\n";
    }
}
