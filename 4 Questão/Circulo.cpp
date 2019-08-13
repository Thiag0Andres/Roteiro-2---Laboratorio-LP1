#include "Circulo.h"

Circulo::Circulo(){
    nome = "Circulo";
    raio = 0;
}

Circulo::Circulo(double raio){
    nome = "Circulo";
    setRaio(raio);
}

double Circulo::getRaio(){
    return raio;
}

void Circulo::setRaio(double raio){
    this-> raio = raio;
}

double Circulo::calcularArea(){
    return PI * (raio*raio);
}


