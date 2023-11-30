#include "Retangulo.h"

Retangulo::Retangulo() {
	this->comprimento = 0;
	this->largura = 0;
	this->cor = " ";
}

Retangulo::Retangulo(float comprimento, float largura, string cor) {
	this->comprimento = comprimento;
	this->largura = largura;
	this->cor = cor;
}

//Get
float Retangulo::getComprimento() {
	return comprimento;
}
float Retangulo::getLargura() {
	return largura;
}
string Retangulo::getCor() {
	return cor;
}
//Set
void Retangulo::setComprimento(float comp) {
	comprimento = comp;
}
void Retangulo::setLargura(float larg) {
	largura = larg;
}
void Retangulo::setCor(string c) {
	cor = c;
}

//Area
float Retangulo::area() {
	return largura * comprimento;
}

//Cor
string Retangulo::cor2(string c2) {
	if (c2 == "Azul" || c2 == "azul" || c2 == "AZUL") {
		system("Color 1");
		return c2;
	}
	else if (c2 == "Verde" || c2 == "verde" || c2 == "VERDE") {
		system("Color 2");
		return c2;
	}
	else if (c2 == "Vermelho" || c2 == "vermelho" || c2 == "VERMELHO") {
		system("Color 4");
		return c2;
	}
	else if (c2 == "Roxo" || c2 == "roxo" || c2 == "ROXO") {
		system("Color 5");
		return c2;
	}
	else if (c2 == "Amarelo" || c2 == "amarelo" || c2 == "AMARELO") {
		system("Color 6");
		return c2;
	}
	else
		system("Color 7");
	return c2;
}

//string
string Retangulo::toString() {
	return	"\nComprimento: " + to_string(getComprimento()) + "\n" +
			"Largura: " + to_string(getLargura()) + "\n" +
			"Cor: " + cor + "\n" +
			"Area: " + to_string(area());
}