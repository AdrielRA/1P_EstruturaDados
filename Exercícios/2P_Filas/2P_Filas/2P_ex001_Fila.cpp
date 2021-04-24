#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <locale>
#include "Filas.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	int Num = 0, OP;
	Fila F;

	Qinit(&F);

	do {
		system("cls");

		cout << "____________________________________\n";
		cout << "              MENU FILAS            \n";
		cout << "____________________________________\n\n";

		cout << "[ 1 ] Inserir\n";
		cout << "[ 2 ] Remover\n";
		cout << "[ 3 ] Mostrar\n";
		cout << "[ 4 ] Inserir no Inicio\n";
		cout << "[ 5 ] Remover do Fim\n";
		cout << "[ 6 ] Inverter\n";
		cout << "[ 7 ] Sair\n";
		cout << "____________________________________\n\n";
		cout << "Sua opção: ";
		cin >> OP;
		cout << "____________________________________\n\n";
		switch (OP)
		{
		case 1:
			if(!QisFull(&F)){
				cout << "Informe o valor: ";
				cin >> Num;
				Enqueue(&F, Num);
			}
			else {
				cout << "Error >> Fila cheia!\n";
				system("pause");
			}
			break;
		case 2:
			if (!QisEmpty(&F)) {
				cout << "Elemento removido: " << Dequeue(&F) << "\n\n";
			}
			else {
				cout << "ERROR >> Fila vazia!\n\n";
			}
			
			system("pause");
			break;
		case 3:
			cout << "Fila: " << Mostra_Fila(&F) << "\n\n";
			system("pause");
			break;
		case 4:
			if (!QisFull(&F)) {
				cout << "Informe o valor: ";
				cin >> Num;
				Enqueueini(&F, Num);
			}
			else {
				cout << "Error >> Fila cheia!\n";
				system("pause");
			}
			break;
		case 5:
			if (!QisEmpty(&F)) {
				cout << "Elemento removido: " << DequeueFim(&F) << "\n\n";
			}
			else {
				cout << "ERROR >> Fila vazia!\n\n";
			}
			system("pause");
			break;
		case 6:
			Inverter(&F); // Usando pilhas...
			cout << "Fila invertida!\n\n";
			system("pause");
			break;
		case 7:break;
		default:
			cout << "Opção inválida!\n\n";
			system("pause");
			break;
		}

	} while (OP != 7);

	return EXIT_SUCCESS;
}