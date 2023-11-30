#include "Circulo.h"

Circulo::Circulo() {
	this->raio = 0;
	this->linha = 0;
}

Circulo::Circulo(float raio, float linha) {
	this->raio = raio;
	this->linha = linha;
}

//Get
float Circulo::getRaio() {
	return raio;
}
float Circulo::getLinha() {
	return linha;
}
//Set
void Circulo::setRaio(float r) {
	raio = r;
}
void Circulo::setLinha(float ln) {
	linha = ln;
}
//Area
float Circulo::area() {
	return 3.14 * raio * raio;
}
//string
string Circulo::toString() {
	return	"\nRaio: " + to_string(getRaio()) + "\n" +
			"Espessura da linha: " + to_string(getLinha()) + "\n" +
			"Area: " + to_string(area());
}