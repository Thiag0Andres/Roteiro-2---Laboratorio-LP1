#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

class Endereco{
    public:
    //construtores
        Endereco();
        Endereco(std::string rua,  std::string numero, std::string bairro, std::string cidade, std::string CEP);
    //Metodos get
        std::string getRua();
        std::string getNumero();
        std::string getBairo();
        std::string getCidade();
        std::string getCEP();
    //Metodos set
        void setRua(std::string rua);
        void setNumero(std::string numero);
        void setBairo(std::string bairro);
        void setCidade(std::string cidade);
        void setCEP(std::string CEP);
    //Metodo
        std::string toString();

    private:
        std::string rua;
        std::string numero;
        std::string bairro;
        std::string cidade;
        std::string CEP;
};

#endif // ENDERECO_H
