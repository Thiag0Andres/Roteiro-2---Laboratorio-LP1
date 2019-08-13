#include "Triangulo.h"

Triangulo::Triangulo(){
    nome = "Triangulo";
    base = altura = 0;
}

Triangulo::Triangulo(double base, double altura){
    nome = "Triangulo";
    setBase(base);
    setAltura(altura);
}

double Triangulo::getBase(){
    return base;
}

double Triangulo::getAltura(){
    return altura;
}

void Triangulo::setBase(double base){
    this-> base = base;
}

void Triangulo::setAltura(double altura){
    this-> altura = altura;
}

double Triangulo::calcularArea(){
    return (base*altura) / 2;
}
