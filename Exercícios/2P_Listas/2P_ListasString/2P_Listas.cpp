#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include<string>
#include <locale>
#include "Listas.h"

using namespace std;

void cls() {
	system("cls");
}

void pause() {
	cout << "\nPressione uma tecla para continuar...";
	getchar();
}

int main() {

	int OP = 0;
	Elem String;
	Lista L1;

	setlocale(LC_ALL, "Portuguese");

	ListInit(&L1);

	do {
		cls();
		cout << "________________________________________\n";
		cout << "MENU - LISTAS ORDENADAS | Tipo: " << Mostra_Tipo() << "\n";
		cout << "________________________________________\n\n";
		cout << "[ 1 ] Inserir\n";
		cout << "[ 2 ] Remover\n";
		cout << "[ 3 ] Número de Ocorrências\n";
		cout << "[ 4 ] Ocorrências no intervalo\n";
		cout << "[ 5 ] Remover conjunto\n";
		cout << "[ 6 ] \n";
		cout << "[ 7 ] \n";
		cout << "[ 8 ] \n";
		cout << "[ 9 ] \n";
		cout << "[10 ] Sair\n";
		cout << "________________________________________\n\n";		
		cout << "Lista: ";
		Mostra_Lista_Aula(&L1);
		cout << "\n";
		cout << "________________________________________\n\n";
		cout << "Sua opção: ";
		cin >> OP;
		cout << "________________________________________\n\n";
		getchar();

		switch (OP)
		{
		case 1:
			if (!LisFull(&L1)) {
				cout << "Informe o caracter que deseja inserir: ";
				
				gets_s(String);
				Ins(&L1, String);
			}
			else {
				cout << "ERROR: Lista cheia!\n";
				cout << "________________________________________\n";
				pause();
			}
			
			break;
		case 2:
			if (!LisEmpty(&L1)) {
				cout << "Elemento para remover: ";
				gets_s(String);
				cout << "________________________________________\n\n";
				if (Remove(&L1, String)) {
					cout << "Elemento removido com sucesso!\n";
				}
				else {
					cout << "Elemento não encontrado!\n";
				}
				cout << "________________________________________\n";
				pause();
			}
			else {
				cout << "ERROR: Lista vazia!\n";
				cout << "________________________________________\n";
				pause();
			}
			break;
		case 3:
			cout << "Elemento: ";
			gets_s(String);
			cout << "Número de ocorrências: " << Ocorrencia(&L1, String) << '\n';
			pause();
			break;
		case 4:
			Elem Max, Min;
			cout << "Informe o elemento menor: ";
			gets_s(Min);
			cout << "Informe o elemento maior: ";
			getchar();
			gets_s(Max);
			cout << "Número de ocorrências: " << Ocorrencia(&L1, Min, Max) << '\n';
			pause();
			break;
		case 5:
			if (!LisEmpty(&L1)) {
				cout << "Elemento para remover: ";
				gets_s(String);
				cout << "________________________________________\n\n";
				if (Remove_Todos(&L1, String)) {
					cout << "Elemento removido com sucesso!\n";
				}
				else {
					cout << "Elemento não encontrado!\n";
				}
				cout << "________________________________________\n";
				pause();
			}
			else {
				cout << "ERROR: Lista vazia!\n";
				cout << "________________________________________\n";
				pause();
			}
			break;
			break;
		case 6:break;
		case 7:break;
		case 8:break;
		case 9:break;
		case 10:break;
		default:
			cout << "Opção inválida!\n";
			pause();
			break;
		}

	} while (OP != 10);
}