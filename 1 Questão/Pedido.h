#ifndef PEDIDO_H_INCLUDED
#define PEDIDO_H_INCLUDED

#include <string>

class Pedido{
    public:
    //Construtores
        Pedido();
        Pedido(int numero, std::string descricao, int quantidade, double preco);
    //Metodos get
        int getNumero();
        std::string getDescricao();
        int getQuantidade();
        double getPreco();
    //Metodo set
        void setNumero(int numero);
        void setDescricao(std::string descricao);
        void setQuantidade(int quantidade);
        void setPreco(double preco);
        void printInf();
    private:
        int numero;
        std::string descricao;
        int quantidade;
        double preco;
};


#endif // PEDIDO_H_INCLUDED
