#include <iostream>
#include <stdio.h>
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

int soma(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += i;
	}
	return s;
}

void MENU() {

	int num;

	linha(40, '-');
	cout << "    SOMA VALORES ENTRE 1 E N    \n";
	linha(40, '-');
	cout << "\n";

	cout << "Informe um número inteiro: ";
	cin >> num;
	while (num < 1) {
		cout << "Informe um número maior: ";
		cin >> num;
	}

	cout << "Soma do intervalo: " << soma(num);

	cout << "\n";
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	MENU();

	sair();
	return EXIT_SUCCESS;
}