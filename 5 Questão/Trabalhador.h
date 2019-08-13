#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>

class Trabalhador{
    public:
    //Construtor
        Trabalhador();
        Trabalhador(std::string nome, float salario);
    //Metodos get
        std::string getNome();
        float getSalario();
    //Metodos set
        void setNome(std::string nome);
        void setSalario(float salario);
    //Metodos Virtual
        virtual float calcularPagamentoSemanal(int horasSemanais);

    protected:
        std::string nome;
        float salario;

};

#endif // TRABALHADOR_H
