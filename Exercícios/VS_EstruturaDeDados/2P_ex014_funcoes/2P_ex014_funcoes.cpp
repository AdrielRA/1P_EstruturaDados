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

int maior(int a, int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

int soma(int a, int b) {
	return a + b;
}

int conta(char *s, char c) {

	int i, res = 0;

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == c) {
			res++;
		}
	}
	return res;
}

void MENU() {

	int x, y;
	char str[30], chr;

	cls();
	linha(40, '-');
	cout << "               -FUNÇÕES-               \n";
	linha(40, '-');
	cout << "\n";

	cout << "Informe o valor de x: ";
	cin >> x;
	cout << "Informe o valor de y: ";
	cin >> y;
	cout << "Informe seu nome: ";
	cin >> str;
	cout << "Informe o caracter: ";
	cin >> chr;

	cout << "\nMaior Valor: " << maior(x, y);
	cout << "\nSoma dos Valores: " << soma(x,y);
	cout << "\nRepetições de " << chr << " no nome: " << conta(str, chr);

}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	MENU();

	sair();
	return EXIT_SUCCESS;
}