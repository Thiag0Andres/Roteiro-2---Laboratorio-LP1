/*
    Thiago Andres Paiva Palacios
    Questao 2
*/

#include "Endereco.h"
#include "Pessoa.h"
#include <iostream>

using namespace std;

int main(){
    Endereco end1 = Endereco("Av. Edson Ramalho", "271", "Manaira", "Joao Pessoa", "58100-000");
    Endereco end2 = Endereco("Av. Governador da paz", "145", "Ibituruna", "Montes Claros", "39100-000");

    Pessoa *p1 = new Pessoa("Rubens");
    Pessoa *p2 = new Pessoa("Thiago Andres", end2, "(38) 99998-1452");

    p1-> setEndereco(end1);
    p1-> setTelefone("(83) 99998-1553");

    p1-> printInf(p1);
    p2-> printInf(p2);

    delete p1;
    delete p2;

    return 0;
}
