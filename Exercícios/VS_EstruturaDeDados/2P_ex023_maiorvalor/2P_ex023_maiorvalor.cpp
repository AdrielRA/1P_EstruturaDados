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

void mostrar(int *v, int tam) {
	cout << "|";
	for (int i = 0; i < tam; i++) {
		cout << " " << v[i] << " |";
	}
}

int maior(int *v, int tam) {
	int m = v[0];
	for (int i = 0; i < tam; i++) {
		if (v[i] > m) {
			m = v[i];
		}
	}
	return m;
}

float media(int *v, int tam) {
	if (tam > 0) {
		int s = 0;

		for (int i = 0; i < tam; i++) {
			s += v[i];
		}

		return (float)s / tam;
	}
	return 0;
}

void MENU() {

	int vet1[5] = { 5, 2, 9, 6, 7 },
		vet2[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	linha(40, '-');
	cout << "         MAIOR VALOR NO VETOR         \n";
	linha(40, '-');
	cout << "\n";

	cout << "vet1: ";
	mostrar(vet1, 5);
	cout << "\nvet2: ";
	mostrar(vet1, 5);

	cout << "\n\nMaior valor do vet1: " << maior(vet1, 5) << "\n";
	cout << "Maior valor do vet2: " << maior(vet2, 8) << "\n\n";

	cout << "Média de vet1: " << media(vet1, 5) << "\n";
	cout << "Média de vet2: " << media(vet2, 8);

	cout << "\n";
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	MENU();

	sair();
	return EXIT_SUCCESS;
}