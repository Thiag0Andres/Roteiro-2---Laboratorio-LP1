#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario{
    public:
    //Construtores
        Funcionario();
        Funcionario(int matricula, std::string nome, float salario);
    //Metodos get
        int getMatricula();
        std::string getNome();
        virtual float getSalario();
        virtual float getSalario(float percentual);
    //Metodos set
        void setMatricula(int matricula);
        void setNome(std::string nome);
        void setSalario(float salario);

    protected:
        int matricula;
        std::string nome;
        float salario;

};

#endif // FUNCIONARIO_H
