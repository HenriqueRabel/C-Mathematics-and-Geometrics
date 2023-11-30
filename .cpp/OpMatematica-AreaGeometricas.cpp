#include "Retangulo.h"
#include "Triangulo.h"
#include "Circulo.h"
#include "Quadrado.h"
#include "Trapezio.h"

int main(){
	bool verifica = true;
	int rp, rp2, rp3;
	//Não deixa o menu fechar.
	do{
		do{//Menu 1
			cout << "--- MENU DE GERAL ---" << endl;
			cout << "1. Parte 1 - Areas Geometricas." << endl;
			cout << "2. Parte 2 - Operacoes Matematicas." << endl;
			cout << "3. Sair " << endl;
			cout << "Opcao: ";
			cin >> rp;
			system("cls");
		} while (rp < 1 || rp > 3);

			switch (rp) {
				//Parte1
				case 1: {
					do {//Menu 2
						cout << "--- MENU GEOMETRICO ---" << endl;
						cout << "1. Retangulo." << endl;
						cout << "2. Triangulo." << endl;
						cout << "3. Circulo." << endl;
						cout << "4. Quadrado." << endl;
						cout << "5. Trapezio." << endl;
						cout << "6. Sair " << endl;
						cout << "Opcao: ";
						cin >> rp2;
						system("cls");
					} while (rp2 < 1 || rp2 > 6);
						switch (rp2) {
							case 1: {
								//Retangulo
								cout << "--- RETANGULO ---" << endl;
								string c;
								float comp, larg;
								cout << "Insira comprimento: ";
								cin >> comp;
								cout << "Insira largura: ";
								cin >> larg;
								cout << "Insira cor: ";
								cin >> c;
								Retangulo::cor2(c);
								Retangulo retangulo(comp, larg, c);
								cout << retangulo.toString();
								cout << retangulo.area() << endl;
								cout << endl;
								system("pause");
								system("cls");
								break;
							}
							case 2: {
								//Triangulo
								cout << "--- TRIANGULO ---" << endl;
								float bs, alt2;
								string nm;
								cout << "Insira o nome do triangulo: ";
								cin >> nm;
								cout << "Insira base: ";
								cin >> bs;
								cout << "Insira altura: ";
								cin >> alt2;
								Triangulo triangulo(bs, alt2, nm);
								cout << triangulo.toString();
								cout << triangulo.area() << endl;
								cout << endl;
								system("pause");
								system("cls");
								break;
							}
							case 3: {
								//Circulo
								cout << "--- CIRCULO ---" << endl;
								float r, ln;
								cout << "Insira o raio: ";
								cin >> r;
								cout << "Insira a espessura da linha: ";
								cin >> ln;
								Circulo circulo(r, ln);
								cout << circulo.toString();
								cout << circulo.area() << endl;
								cout << endl;
								system("pause");
								system("cls");
								break;
							}
							case 4: {
								cout << "--- QUADRADO ---" << endl;
								//Quadrado
								float ld;
								cout << "Insira o lado: ";
								cin >> ld;
								Quadrado quadrado(ld);
								cout << quadrado.toString();
								cout << quadrado.area() << endl;
								cout << endl;
								system("pause");
								system("cls");
								break;
							}
							case 5: {
								//Trapezio
								cout << "--- TRAPEZIO ---" << endl;
								float bs1, bs2, alt;
								cout << "Insira base 1: ";
								cin >> bs1;
								cout << "Insira base 2: ";
								cin >> bs2;
								cout << "Insira altura: ";
								cin >> alt;
								Trapezio trapezio(bs1, bs2, alt);
								cout << trapezio.toString();
								cout << trapezio.area() << endl;
								cout << endl;
								system("pause");
								system("cls");
								break;
							}
							case 6: {
								system("cls");
								break;
							}
						}
					break;//Quebra o menu para nao passar para o menu3 da parte2.
				}
				//Parte2
				case 2: {
					do {//Menu 3
						cout << "--- MENU MATEMATICO ---" << endl;
						cout << "1. Multiplicacao." << endl;
						cout << "2. Potencia." << endl;
						cout << "3. Media." << endl;
						cout << "4. Fatorial." << endl;
						cout << "5. Sair " << endl;
						cout << "Opcao: ";
						cin >> rp3;
						system("cls");
					} while (rp3 < 1 || rp3 > 5);
						switch (rp3) {
							case 1: {
								//Multiplicação
								cout << "--- MULTIPLICACAO ---" << endl;
								int num1, num2;
								cout << "Insira dois valores!" << endl;
								cout << "Insira o primeiro valor: ";
								cin >> num1;
								cout << "Insira o segundo valor: ";
								cin >> num2;
								Interface::multiplicacao(num1, num2);
								cout << "\nTotal: " << Interface::multiplicacao(num1, num2) << endl;
								cout << endl;
								system("pause");
								system("cls");
								break;
							}
							case 2: {
								//Potencia
								cout << "--- POTENCIA ---" << endl;
								int base, expoente;
								cout << "Insira a base e o expoente!" << endl;
								cout << "Insira a base: ";
								cin >> base;
								cout << "Insira o expoente: ";
								cin >> expoente;
								Interface::potencia(base, expoente);
								cout << "\nTotal: " << Interface::potencia(base, expoente) << endl;
								cout << endl;
								system("pause");
								system("cls");
								break;
							}
							case 3: {
								//Media
								cout << "--- MEDIA ---" << endl;
								int quantia;
								cout << "Quantos numeros desejas inserir?" << endl;
								cout << "Quantia: ";
								cin >> quantia;
								cout << endl;
								int* vetor = new int[quantia];

								for (int i = 0; i < quantia; i++) {
									cout << "valor " << i + 1 << ": ";
									cin >> vetor[i];
								}
								Interface::media(vetor, quantia);
								cout << "\nTotal: " << Interface::media(vetor, quantia) << endl;//sai a media
								cout << endl;
								system("pause");
								system("cls");
								break;
							}
							case 4: {
								//Fatorial
								cout << "--- FATORIAL ---" << endl;
								int num;
								cout << "Fatorial de: ";
								cin >> num;
								cout << "\nTotal: " << Interface::fatorial(num) << endl;
								cout << endl;
								system("pause");
								system("cls");
								break;
							}
							case 5: {
								system("cls");
								break;
							}
						}
					break;
				}
				case 3: {
					exit(0);//Fecha programa.
				}
			}
	} while (verifica);

	/*
	//Parte 1
	//Retangulo
	string c;
	float comp, larg;
	cout << "Insira comprimento: ";
	cin >> comp;
	cout << "Insira largura: ";
	cin >> larg;
	cout << "Insira cor: ";
	cin >> c;
	Retangulo retangulo(comp, larg, c);
	cout << retangulo.toString();
	cout << retangulo.area();

	//Triangulo
	float bs, alt2;
	string nm;
	cout << "Insira o nome do triangulo: ";
	cin >> nm;
	cout << "Insira base: ";
	cin >> bs;
	cout << "Insira altura: ";
	cin >> alt2;
	Triangulo triangulo(bs, alt2, nm);
	cout << triangulo.toString();
	cout << triangulo.area();

	//Circulo
	float r, ln;
	cout << "Insira o raio: ";
	cin >> r;
	cout << "Insira a espessura da linha: ";
	cin >> ln;
	Circulo circulo(r, ln);
	cout << circulo.toString();
	cout << circulo.area();

	//Quadrado
	float ld;
	cout << "Insira o lado: ";
	cin >> ld;
	Quadrado quadrado(ld);
	cout << quadrado.toString();
	cout << quadrado.area();

	//Trapezio
	float bs1, bs2, alt;
	cout << "Insira base 1: ";
	cin >> bs1;
	cout << "Insira base 2: ";
	cin >> bs2;
	cout << "Insira altura: ";
	cin >> alt;
	Trapezio trapezio(bs1, bs2, alt);
	cout << trapezio.toString();
	cout << trapezio.area();
	*/
	//------------------------------------------------------------------------------//
	/*
	// Parte 2
	//Multiplicação
	int num1, num2;
	cout << "Insira dois valores?";
	cin >> num1 >> num2;
	Interface::multiplicacao(num1,num2);
	cout << Interface::multiplicacao(num1,num2);
	
	//Media
	int quantia;
	cout << "Quantos numeros desejas inserir?";
	cin >> quantia;
	int *vetor = new int[quantia];

	for (int i = 0; i < quantia; i++) {
	cout << "valor " << i + 1 << ":";
	cin >> vetor[i];
	}
	Interface::media(vetor, quantia);
	cout << Interface::media(vetor, quantia);//sai a media

	//Potencia
	int base, expoente;
	cout << "Insira a base e o expoente!";
	cin >> base >> expoente;
	Interface::potencia(base, expoente);
	cout << Interface::potencia(base, expoente);

	//Fatorial
	int num;
	cout << "Fatorial de: ";
	cin >> num;
	cout << Interface::fatorial(num);
	*/
}