/*
    Thiago Andres Paiva Palacios
    Questao 5
*/

#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"
#include <iostream>

using namespace std;

int main(){
    Trabalhador *t1 = new TrabalhadorPorHora("Thiago Andres", 36);
    Trabalhador *t2 = new TrabalhadorAssalariado("Pablo Andres", 6500);


    //Trabalahdor t1 -> Pagamento semanal = 40 * 36 + (20 * 1,5) * 36
    cout << "Nome: " << t1-> getNome() << "\nPagamento semanal: " << t1-> calcularPagamentoSemanal(60) << endl;
    cout << "Salario: " << t1-> getSalario() << endl << endl;

    //Trabalahdor t2 ->Pagamento semanal = 6500 / 4
    cout << "Nome: " << t2-> getNome() << "\nPagamento semanal: " << t2-> calcularPagamentoSemanal(40) << "\nSalario: " << t2-> getSalario() << endl;



    delete t1;
    delete t2;

    return 0;
}
