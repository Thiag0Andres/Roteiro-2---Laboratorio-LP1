#include "Quadrado.h"

Quadrado::Quadrado(){
    nome = "Quadrado";
    lado = 0;
}

Quadrado::Quadrado(double lado){
    nome = "Quadrado";
    setLado(lado);
}

double Quadrado::getLado(){
    return lado;
}

void Quadrado::setLado(double lado){
    this-> lado = lado;
}

double Quadrado::calcularArea(){
    return lado*lado;
}


