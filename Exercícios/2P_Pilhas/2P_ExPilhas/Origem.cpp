#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <locale>
#include "Pilhas.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	Pilha P_Pares, P_Impares;
	int N, N2;

	Init(&P_Pares);
	Init(&P_Impares);

	cout << "Informe um número n: ";
	cin >> N;
	cout << "\n";

	for (int i = 0; i < N; i++) {
		cout << "Informe o " << i + 1 << "º valor: ";
		cin >> N2;
		if (N2 % 2 == 0) Push(&P_Pares, N2);
		else Push(&P_Impares, N2);
	}

	cout << "\nValores Ímpares: ";
	while (!Empty(&P_Impares)) {
		cout << Pop(&P_Impares) << " ";
	}
	cout << "\nValores Pares: ";
	while (!Empty(&P_Pares)) {
		cout << Pop(&P_Pares) << " ";
	}


	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}