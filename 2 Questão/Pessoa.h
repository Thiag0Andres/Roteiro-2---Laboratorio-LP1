#ifndef PESSOA_H
#define PESSOA_H

#include "Endereco.h"
#include <string>

class Pessoa : public Endereco{
    public:
    //Construtores
        Pessoa(std::string nome);
        Pessoa(std::string nome, Endereco endereco, std::string telefone);
    //Metodos get
        std::string getNome();
        Endereco getEndereco();
        std::string getTelefone();

    //Metodos set
        void setNome(std::string nome);
        void setEndereco(Endereco endereco);
        void setTelefone(std::string telefone);
        void printInf(Pessoa *p);

    private:
        std::string nome;
        Endereco endereco;
        std::string telefone;
};

#endif // PESSOA_H
