#include "interface.h"

//Multiplicação
double Interface::multiplicacao(double num1, double num2) {
	double total;
	total = num1 * num2;
	return total;
}
//Media
double Interface::media(int* vetor, int quantia) {
	double soma = 0;
	for (int i = 0; i < quantia; i++) {
		soma += vetor[i];
	}
	return soma/quantia;
};
//Potencia 
int Interface::potencia(int base, int expoente) {
	int total = 0;
	total = pow(base, expoente);//Calcula o valor de um número elevado a uma potência
	return total;
}
//Fatorial
int Interface::fatorial(int num) {
	int total = 1;

	for (int i = 1; i <= num; i++)
		total *= i;
	
	return total;
}