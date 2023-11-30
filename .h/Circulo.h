#pragma once
#include "interface.h"

class Circulo {
private:
    float raio, linha;

public:
    //Construtores por Defeito
    Circulo();
    Circulo(float raio, float linha);

    //Get - Pega o valor entregue pelo cliente
    float getRaio();
    float getLinha();

    //Set = Definir
    //Set - Defini o valor entregue pelos construtores
    void setRaio(float r);
    void setLinha(float ln);

    //Area
    float area();

    //String
    string toString();
};