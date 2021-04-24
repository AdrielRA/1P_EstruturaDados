#define _CRT_SECURE_NO_WARNINGS
#define TAM 30

#include <iostream>
#include <string.h>
#include <locale>
#include "Pilhas.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	Pilha P;
	char exp[TAM];

	Init(&P);

	cout << "Entre com uma expres�o: ";
	gets_s(exp);

	for (int i = 0; i < strlen(exp); i++) {
		if (exp[i] == '(') { Push(&P, '('); }
		else if (exp[i] == ')')
		{
			if(!Empty(&P)){ Pop(&P); }
			else { Push(&P, '*'); break; }
		}
	}

	if (Empty(&P)) { cout << "Express�o correta!"; }
	else { cout << "Express�o incorreta!"; }

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}