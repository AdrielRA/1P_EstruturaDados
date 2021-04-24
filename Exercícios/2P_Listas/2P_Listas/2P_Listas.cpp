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
	getchar();
}

int main() {

	int OP = 0;
	Elem Letra;
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
		cout << "[ 3 ] N�mero de Ocorr�ncias\n";
		cout << "[ 4 ] M�dia\n";
		cout << "[ 5 ] Ocorr�ncias no intervalo\n";
		cout << "[ 6 ] \n";
		cout << "[ 7 ] \n";
		cout << "[ 8 ] \n";
		cout << "[ 9 ] \n";
		cout << "[10 ] Sair\n";
		cout << "________________________________________\n\n";		
		cout << "Lista: " << Mostra_Lista(&L1) << "\n";
		cout << "________________________________________\n\n";
		cout << "Sua op��o: ";
		cin >> OP;
		cout << "________________________________________\n\n";

		switch (OP)
		{
		case 1:
			if (!LisFull(&L1)) {
				cout << "Informe o caracter que deseja inserir: ";
				cin >> Letra;
				Ins(&L1, Letra);
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
				cin >> Letra;
				cout << "________________________________________\n\n";
				if (Remove(&L1, Letra)) {
					cout << "Elemento removido com sucesso!\n";
				}
				else {
					cout << "Elemento n�o encontrado!\n";
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
			cin >> Letra;
			cout << "N�mero de ocorr�ncias: " << Ocorrencia(&L1, Letra) << '\n';
			pause();
			break;
		case 4:
			cout.precision(4);
			cout << "M�dia dos valores: " << Media(&L1) << '\n';
			pause();
			break;
		case 5:
			Elem Max, Min;
			cout << "Informe o valor m�nimo: ";
			cin >> Min;
			cout << "Informe o valor m�ximo: ";
			cin >> Max;
			cout << "N�mero de ocorr�ncias: " << Ocorrencia(&L1, Min, Max) << '\n';
			pause();
		case 6:break;
		case 7:break;
		case 8:break;
		case 9:break;
		case 10:break;
		default:
			cout << "Op��o inv�lida!\n";
			pause();
			break;
		}

	} while (OP != 10);
}