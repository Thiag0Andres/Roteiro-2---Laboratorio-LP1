#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(){
    nome = " ";
}
FiguraGeometrica::~FiguraGeometrica(){
    //dtor
}

FiguraGeometrica::FiguraGeometrica(std::string nome){
    setNome(nome);
}

std::string FiguraGeometrica::getNome(){
    return nome;
}

void FiguraGeometrica::setNome(std::string nome){
    this-> nome = nome;
}
