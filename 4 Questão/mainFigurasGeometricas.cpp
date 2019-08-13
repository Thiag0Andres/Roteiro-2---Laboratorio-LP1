/*
    Thiago Andres Paiva Palacios
    Questao 4
*/

#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"
#include <iostream>

using namespace std;

int main(){

    FiguraGeometrica *t1 = new Triangulo(10,15);
    FiguraGeometrica *q1 = new Quadrado(7);
    FiguraGeometrica *c1 = new Circulo(3);


    cout << "Nome da figura: " << t1-> getNome() << "\nArea: " << t1-> calcularArea() << "m^2" << endl << endl;
    cout << "Nome da figura: " << q1-> getNome() << "\nArea: " << q1-> calcularArea() << "m^2" << endl << endl;
    cout << "Nome da figura: " << c1-> getNome() << "\nArea: " << c1-> calcularArea() << "m^2" << endl;

    delete t1;
    delete q1;
    delete c1;

    return 0;
}
