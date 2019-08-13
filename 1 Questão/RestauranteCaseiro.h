#ifndef RESTAURANTECASEIRO_H_INCLUDED
#define RESTAURANTECASEIRO_H_INCLUDED

#include "MesaDeRestaurante.h"

#define MAX_MESAS 4

class RestauranteCaseiro{
    public:
    //Construtor
        RestauranteCaseiro();
    //Metodos
        void adicionaAoPedido(int indMesa, Pedido p);
        double calculaTotalRestaurante();
        void printInf();
    private:
        MesaDeRestaurante mesas[MAX_MESAS];

};


#endif // RESTAURANTECASEIRO_H_INCLUDED
