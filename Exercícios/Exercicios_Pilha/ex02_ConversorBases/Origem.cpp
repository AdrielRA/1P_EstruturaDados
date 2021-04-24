#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <locale>

#include "Pilhas.h"

using namespace std;

int main(){

	setlocale(LC_ALL, "Portuguese");

	int N, N2;
	Pilha P;

	Init(&P);

	cout << "_____________________\n";
	cout << "CONVERSÃO ENTRE BASES\n";
	cout << "_____________________\n\n";

	cout << "Informe um número inteiro: ";
	cin >> N;
	N2 = N;

	do {
		Push(&P, N2 % 2);
		N2 = N2 / 2;

	} while (N2 != 0);

	cout << "\nNúmero convertido em binário: ";

	while (!Empty(&P)) {
		cout << Pop(&P);
	}

	N2 = N;

	do {
		Push(&P, N2 % 8);
		N2 = N2 / 8;

	} while (N2 != 0);

	cout << "\nNúmero convertido em octal: ";

	while (!Empty(&P)) {
		cout << Pop(&P);
	}

	N2 = N;

	do {
		Push(&P, N2 % 16);
		N2 = N2 / 16;

	} while (N2 != 0);

	cout << "\nNúmero convertido em hexadecimal: ";

	while (!Empty(&P)) {

		N = Pop(&P);

		if (N < 10) { cout << N; }
		else printf("%c", N + 55);
	}

	cout << "\n\n";
	system("pause");
}