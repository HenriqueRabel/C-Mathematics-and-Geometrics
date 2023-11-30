#pragma once
#include "interface.h"

class Trapezio {
private:
    float base1, base2, altura;

public:
    //Construtores por Defeito
    Trapezio();
    Trapezio(float base1, float base2, float altura);

    //Get - Pega o valor entregue pelo cliente
    float getBase1();
    float getBase2();
    float getAltura();

    //Set = Definir
    //Set - Defini o valor entregue pelos construtores
    void setBase1(float bs1);
    void setBase2(float bs2);
    void setAltura(float alt);
    //Area
    float area();
    //String
    string toString();
};