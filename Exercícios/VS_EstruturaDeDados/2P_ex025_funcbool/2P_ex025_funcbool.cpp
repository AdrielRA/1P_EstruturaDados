#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <locale>

using namespace std;

char par(int);

int main() {

	int X;

	setlocale(LC_ALL, "Portuguese");

	cout << "________________________________________\n";
	cout << "           VERIFICA SE É PAR            \n";
	cout << "________________________________________\n\n";

	cout << "Informe um número inteiro: ";
	cin >> X;

	if (par(X)) { cout << "O número " << X << " é par!"; }
	else { cout << "O número " << X << " é ímpar!"; }

	cout << "\n\n";

	system("pause");

	return EXIT_SUCCESS;
}

char par(int N) {
	if (N % 2 == 0) return 1;
	else return 0;
}