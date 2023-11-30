#pragma once
#include "interface.h"

class Quadrado {
private:
    float lado;
public:
    Quadrado();
    Quadrado(float lado);

    //Get - Pega o valor entregue pelo cliente
    float getLado();

    //Set = Definir
    //Set - Defini o valor entregue pelos construtores
    void setLado(float ld);

    //Area
    float area();

    //String
    string toString();
};