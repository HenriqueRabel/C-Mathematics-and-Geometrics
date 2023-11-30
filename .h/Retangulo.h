#pragma once
#include "interface.h"

class Retangulo {
private:
    float comprimento;
    float largura;
    string cor;

public:
    //Construtores por Defeito
    Retangulo();
    Retangulo(float comprimento, float largura, string cor);

    //Get - Pega o valor entregue pelo cliente
    float getLargura();
    float getComprimento();
    string getCor();

    //Set = Definir
    //Set - Defini o valor entregue pelos construtores
    void setLargura(float larg);
    void setComprimento(float comp);
    void setCor(string c);

    //Area
    float area();

    //String
    string toString();

    //Cor
    static string cor2(string c2);
};