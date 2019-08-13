#ifndef MESADERESTAURANTE_H_INCLUDED
#define MESADERESTAURANTE_H_INCLUDED

#include "Pedido.h"

#define MAX_PEDIDOS 5

class MesaDeRestaurante{
    public:
    //Construtor
        MesaDeRestaurante();
    //Metodos
        void adicionaAoPedido(Pedido p);
        void zeraPedidos();
        double calculaTotal();
        void printInf();
    private:
        Pedido pedidos[MAX_PEDIDOS];
        int indice;

};

#endif // MESADERESTAURANTE_H_INCLUDED
