#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

double fatorial(int N) {

	double F = N;

	if (N > 1) {
		F = F * fatorial(N - 1);
	}
	else {
		F = 1;
	}

	return F;
}

int main() {

	setlocale(LC_ALL, "Portuguese");

	int N;
	char op;

	do {

		system("cls");

		cout << "Informe um número: ";
		cin >> N;
		while (N > 170) {
			cout << "Fatorial muito grande, tente valor menor: ";
			cin >> N;
		}

		system("cls");

		printf("Fatorial: %.0f\n", fatorial(N));

		cout << "\n\n[ESC] Para sair: ";

		op = _getche();
		op = _getche();
		
	} while (op != 27);

	system("pause");

	return EXIT_SUCCESS;
}