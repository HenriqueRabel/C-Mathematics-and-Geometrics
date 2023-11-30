#include "Trapezio.h"

Trapezio::Trapezio() {
	this->base1 = 0;
	this->base2 = 0;
	this->altura = 0;
}

Trapezio::Trapezio(float base1, float base2, float altura) {
	this->base1 = base1;
	this->base2 = base2;
	this->altura = altura;
}

//Get
float Trapezio::getBase1() {
	return base1;
}
float Trapezio::getBase2() {
	return base2;
}
float Trapezio::getAltura() {
	return altura;
}
//Set
void Trapezio::setBase1(float bs1) {
	base1 = bs1;
}
void Trapezio::setBase2(float bs2) {
	base2 = bs2;
}
void Trapezio::setAltura(float alt) {
	altura = alt;
}
//Area
float Trapezio::area() {
	return base1 + base2 * altura / 2;
}
//string
string Trapezio::toString() {
	return	"\nBase 1: " + to_string(getBase1()) + "\n" +
			"Base 2: " + to_string(getBase2()) + "\n" +
			"Altura: " + to_string(getAltura()) + "\n" +
			"Area: " + to_string(area());
}