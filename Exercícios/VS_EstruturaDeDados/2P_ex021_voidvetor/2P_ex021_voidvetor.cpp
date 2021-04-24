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
		cout << "Informe o " << i + 1 << "° valor: ";
		cin >> V[i];
		cls();
	}
}

void mostrar(int *V, int c) {

	cout << "|";
	for (int i = 0; i < c; i++) {
		cout << " " << V[i] << " |";
	}
	cout << "\n";
}

void separa(int *X, int *A, int *B) {

	int ca = 0, cb = 0;

	for (int i = 0; i < 30; i++) {
		if (X[i] > 0) {
			A[ca] = X[i];
			ca++;
		}
		else {
			B[cb] = X[i];
			cb++;
		}
	}

	cout << "Vetor A: ";
	mostrar(A, ca);
	cout << "Vetor B: ";
	mostrar(B, cb);

}

void MENU() {

	int X[30], A[30], B[30];

	leitura(X, 30);

	separa(X, A, B);

	cout << "\n";
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	MENU();

	sair();
	return EXIT_SUCCESS;
}