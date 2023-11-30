#include "Triangulo.h"

Triangulo::Triangulo() {
	this->base = 0;
	this->altura = 0;
	this->nome = " ";
}

Triangulo::Triangulo(float base, float altura, string nome) {
	this->base = base;
	this->altura = altura;
	this->nome = nome;
}


//Get
float Triangulo::getBase() {
	return base;
}
float Triangulo::getAltura() {
	return altura;
}
string Triangulo::getNome() {
	return nome;
}
//Set
void Triangulo::setBase(float bs) {
	base = bs;
}
void Triangulo::setAltura(float alt) {
	altura = alt;
}
void Triangulo::setNome(string nm) {
	nome = nm;
}
//Area
float Triangulo::area() {
	return base * altura / 2;
}
//string
string Triangulo::toString() {
	return	"\nNome: " + nome + "\n" +
			"Base: " + to_string(getBase()) + "\n" +
			"Altura: " + to_string(getAltura()) + "\n" +
			"Area: " + to_string(area());
}