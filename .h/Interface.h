#pragma once
#include <iostream>
#include <cmath>//pow;
#include <string>
using namespace std;


class Interface{
	public:
		//Inteiro
		static int potencia(int base, int expoente);
		static int fatorial(int num);

		//Double
		static double multiplicacao(double num1,double num2);
		static double media(int* vetor, int quantia);
};