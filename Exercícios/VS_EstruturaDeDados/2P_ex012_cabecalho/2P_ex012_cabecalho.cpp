#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

void pause() {
	system("pause");
}

void sair() {
	cout << "\n\n";
	pause();
}

void cls() {
	system("cls");
}

void linha(int t, char c) {

	int i;

	for (i = 0; i < t; i++) {
		cout << c;
	}
	cout << "\n";
}

void cab(char* str) {

	cls();

	linha(40, '=');
	cout << "Unifenas – Ciência da Computação\n";
	cout << "Estrutura de Dados\n";
	cout << "Nome: " << str;
	linha(40, '=');
	
}

int main(void) {

	char nome[30];

	setlocale(LC_ALL, "Portuguese");

	cout << "Informe seu nome: ";
	fgets(nome, 30, stdin);

	cab(nome);

	sair();
	return EXIT_SUCCESS;
}