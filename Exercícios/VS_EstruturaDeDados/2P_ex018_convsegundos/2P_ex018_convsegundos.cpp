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

int segundos(int h, int m, int s) {
	int ts = 0;
	ts = ((h * 60)*60 + (m * 60) + s);
	return ts;
}

void MENU() {

	int h, m, s;

	linha(40, '-');
	cout << "    CONVERTE PARA SEGUNDOS    \n";
	linha(40, '-');
	cout << "\n";

	cout << "Horas: ";
	cin >> h;
	while (h < 0) {
		cout << "inválido! Horas: ";
		cin >> h;
	}

	cout << "Minutos: ";
	cin >> m;
	while (m < 0) {
		cout << "inválido! Minutos: ";
		cin >> m;
	}

	cout << "Segundos: ";
	cin >> s;
	while (s < 0) {
		cout << "inválido! Segundos: ";
		cin >> s;
	}

	cout << "Total de segundos: " << segundos(h, m, s);

	cout << "\n";
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	MENU();

	sair();
	return EXIT_SUCCESS;
}