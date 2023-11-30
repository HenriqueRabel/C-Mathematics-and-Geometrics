#include "Quadrado.h"

//contrutor defeito
Quadrado::Quadrado() {
	this->lado = 0;
}

//contrutor parametro
Quadrado::Quadrado(float lado) {
	this->lado = lado;
}

//Get
float Quadrado::getLado() {
	return lado;
}
//Set
void Quadrado::setLado(float ld) {
	lado = ld;
}
//Area
float Quadrado::area() {
	return lado * lado;
}
//string
string Quadrado::toString() {
	return	"\nLado: " + to_string(getLado()) + "\n" +
			"Area: " + to_string(area());
}