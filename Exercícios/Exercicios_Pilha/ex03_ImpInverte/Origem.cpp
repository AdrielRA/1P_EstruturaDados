#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <locale>

#include "PilhasChar.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	char letra, frase_resultante[250];
	int i = 0;
	Pilha_Char P;

	Init(&P);

	cout << "_____________________\n";
	cout << "PILHAS E STRINGS EM C\n";
	cout << "_____________________\n\n";

	cout << "Informe uma frase: ";
	do {
		letra = getchar();
		if (letra != ' ') {
			Push(&P, letra);
		}
		else {
			while (!Empty(&P)) {
				frase_resultante[i] = Pop(&P);
				i++;
			}
			frase_resultante[i] = ' ';
			i++;
		}
	} while (letra != '\n');

	i--;

	while (!Empty(&P)) {
		char let = Pop(&P);

		if (let != '\n') {
			frase_resultante[i] = let;
		}		
		i++;
	}
	frase_resultante[i] = '\0';
		
	cout << frase_resultante;

	cout << "\n\n";
	system("pause");
}