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

void leitura(int *V, int C) {
	for (int i = 0; i < C; i++) {
		cls();
		cout << "Informe o " << i + 1 << "° valor: ";
		cin >> V[i];
	}
}

void mostrar(int *V, int c) {

	cls();
	cout << "|";
	for (int i = 0; i < c; i++) {
		cout << " " << V[i] << " |";
	}
	cout << "\n";
}

int verifica_par(int *V, int  c) {

	int pares = 0;

	for (int i = 0; i < c; i++) {
		if (V[i] % 2 == 0) {
			pares++;
		}
	}

	return pares;
}

void MENU() {

	int X[15], tam;

	cout << "Informe tamanho do vetor: ";
	cin >> tam;
	while (tam > 15) {
		cout << "Informe tamanho menor: ";
		cin >> tam;
	}

	leitura(X, tam);
	mostrar(X, tam);

	cout << "Quantidade de pares: " << verifica_par(X, tam);

	cout << "\n";
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	MENU();

	sair();
	return EXIT_SUCCESS;
}