#pragma once
#include "interface.h"

class Triangulo {
private:
    float base, altura;
    string nome;

public:
    //Construtores por Defeito
    Triangulo();
    Triangulo(float base, float altura, string nome);

    //Get - Pega o valor entregue pelo cliente
    float getBase();
    float getAltura();
    string getNome();

    //Set = Definir
    //Set - Defini o valor entregue pelos construtores
    void setBase(float bs);
    void setAltura(float alt);
    void setNome(string nm);

    //area
    float area();

    //String
    string toString();
};