#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <locale>

#include "PilhasChar.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	Pilha_Char P;
	char s[250];
	char ERROR = 0;

	Init(&P);


	cout << "_____________________\n";
	cout << "PILHAS E SEQU�NCIAS C\n";
	cout << "_____________________\n\n";

	cout << "Informe a sequ�ncia de opera��es: ";
	gets_s(s);

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == '+')
		{
			if (isFull(&P)) {

				cout << "Erro fatal: Pilha Cheia!\n";
				system("pause");
				exit(0);
			}
			else { Push(&P, '+'); }
		}
		else if (s[i] == '-') {
			if (Empty(&P)) {
				cout << "Error fatal: Pilha Vazia!\n";
				system("pause");
				exit(0);
			}
			else { Pop(&P); }
		}
	}

	cout << "Tudo OK!";

	/*int NP, i = 0;
	char Simb;
	char ERROR = 0;
	int cont_mais = 0, cont_menos = 0;


	cout << "_____________________\n";
	cout << "PILHAS E SEQU�NCIAS C\n";
	cout << "_____________________\n\n";

	cout << "N�mero de opera��es: ";
	cin >> NP;
	getchar();
	
	cout << "Informe a sequ�ncia de opera��es!\nPara isso use + e - apenas\n\n";
	do {
		i++;
		cout << "Informe a " << i << "� opera��o: ";
		Simb = getchar();
		getchar();
		while (Simb != '+' && Simb != '-') {
			cout << "Use + ou - apenas! Informe a " << i << "� opera��o: ";
			Simb = getchar();
			getchar();
		}
		if (Simb == '+') { cont_mais++; }
		else if (Simb == '-'){ cont_menos++; }

		if (cont_menos > cont_mais) {
			ERROR = 1;
		}
	} while (ERROR != 1 && i < NP);
	cout << "\n";

	if(ERROR){
		cout << "Sequ�ncia informada gera um erro!";
	}
	else {
		cout << "Sequ�ncia informada funciona normalmente";
	}*/

	cout << "\n\n";
	system("pause");
}