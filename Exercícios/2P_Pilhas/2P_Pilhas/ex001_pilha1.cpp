#define _CRT_SECURE_NO_WARNINGS
#define BITS 16

#include <iostream>
#include <locale>
#include <string.h>
#include "Pilhas.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");
	int N;
	Pilha P;
	Init(&P);

	/*int N, P[BITS], Topo = 0;*/

	cout << "Entre com o número inteiro: ";
	cin >> N;
	while (N-1 >= 2*BITS) {
		cout << "Entre com o número inteiro: ";
		cin >> N;
	}

	do {
		Push(&P, N % 2);
		N = N / 2;
	} while (N != 0);

	while(!Empty(&P)) {
		cout << Pop(&P) ;
	}
	/*do {

		P[Topo] = N % 2;
		Topo++;
		N = N / 2;

	} while (N != 0);

	cout << "Em binário: ";

	while (Topo > 0) {
		Topo--;
		cout << P[Topo];
	}*/

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}