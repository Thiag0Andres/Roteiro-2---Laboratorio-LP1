/*
    Thiago Andres Paiva Palacios
    Questao 1
*/

#include "RestauranteCaseiro.h"
#include <iostream>

using namespace std;

int main(){
    RestauranteCaseiro rc = RestauranteCaseiro();
    Pedido p1;

    //mesa 1
    p1 =  Pedido(1, "batata frita", 2, 12.99);
    rc.adicionaAoPedido(1, p1);

    //mesa 2
    p1 =  Pedido(1, "batata frita", 1, 12.99);
    rc.adicionaAoPedido(2, p1);

    //mesa 1
    p1 =  Pedido(3, "Coca cola", 1, 4.99);
    rc.adicionaAoPedido(1, p1);

    //mesa 3
    p1 =  Pedido(2, "Espeto de carne", 2, 15.99);
    rc.adicionaAoPedido(3, p1);

    //mesa 2
    p1 =  Pedido(4, "Suco de laranja", 2, 7);
    rc.adicionaAoPedido(2, p1);

    //mesa 1
    p1 =  Pedido(3, "Coca cola", 1, 4.99);
    rc.adicionaAoPedido(1, p1);


    rc.printInf();

    cout << "\nTotal arrecadado pelo o restaurante: " << rc.calculaTotalRestaurante() << endl;

    return 0;
}
