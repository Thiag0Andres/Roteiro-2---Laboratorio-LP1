/*
    Thiago Andres Paiva Palacios
    Questao 3
*/

#include "Consultor.h"
#include <iostream>

using namespace std;

int main(){
    Funcionario f1 = Funcionario(1999, "Thiago Andres", 14500.00);
    Consultor *c1 = new Consultor(1969, "Pablo Andres", 14500.00);

    c1-> printInf(f1, c1);

    delete c1;

    return 0;
}
