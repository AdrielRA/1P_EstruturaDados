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

float peso_ideal(char s, int alt) {
	float pi = 0;

	if (s == 'm' || s == 'M') {
		pi = 72.7 * alt - 58;
	}
	else if (s == 'f' || s == 'F') {
		pi = 62.1 * alt - 44.7;
	}

	return pi;
}

void MENU() {

	float altura;
	char sexo;

	linha(40, '-');
	cout << "         PESO IDEAL         \n";
	linha(40, '-');
	cout << "\n";

	cout << "Informe seus sexo [m/f]: ";
	cin >> sexo;
	while (sexo != 'm' || sexo != 'M' || sexo != 'f' || sexo != 'F') {
		cout << "Use apenas [m/f]: ";
		cin >> sexo;
	}
	cout << "Informe sua altura: ";
	cin >> altura;

	cout << "Seu peso ideal: " << peso_ideal(sexo, altura) << "kg.";

	cout << "\n";
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	MENU();

	sair();
	return EXIT_SUCCESS;
}