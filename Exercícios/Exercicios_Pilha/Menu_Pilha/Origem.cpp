#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <locale>

#include "Pilhas.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int OP, X;
	Pilha P;

	Init(&P);

	do {
		system("cls");
		cout << "________________________________________\n";
		cout << "             MENU DE PILHAS             \n";
		cout << "________________________________________\n\n";

		cout << "[ 1 ] Inserir\n";
		cout << "[ 2 ] Remover\n";
		cout << "[ 3 ] Mostrar Pilha\n";
		cout << "[ 4 ] Vazio\n";
		cout << "[ 5 ] Vazio\n";
		cout << "[ 6 ] Vazio\n";
		cout << "[ 7 ] Vazio\n";
		cout << "[ 8 ] Vazio\n";
		cout << "[ 9 ] Vazio\n";
		cout << "[10 ] Sair\n";
		cout << "________________________________________\n\n";
		cout << "Sua opção: ";
		cin >> OP;
		switch (OP)
		{
		case 1:
			if (!isFull(&P)) {
				cout << "Elemento: ";
				cin >> X;
				Push(&P, X);
			}
			else {
				cout << "Pilha Cheia!\n\n";
				system("pause");
			}
			
			break;
		case 2:
			if (!Empty(&P)) {
				cout << "Elemento removido: " << Pop(&P);
				cout << "\n\n";
			}
			else cout << "Pilha Vazia!\n\n";
			system("pause");
			break;
		case 3:
			cout << "Pilha: " << Mostrar_Pilha(&P) << "\n\n";
			cout << "________________________________________\n";
			system("pause");
			break;
		default:
			break;
		}

	} while (OP != 10);

	return EXIT_SUCCESS;
}