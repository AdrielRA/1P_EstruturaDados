#include <iostream>
#include <stdbool.h>
#include <locale>
#include <string>
#include <time.h>
#include <conio.h>
#include<windows.h>

using namespace std;


void gotoxy(int x, int y) {
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


int main(void) {

	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	

	int tam, mat[100][100], vet[1000], cont, cont1, cont2, c, l;
	char tecla = 0;
	bool ok = false;

	
	system("cls");
	cout << "Defina o tamanho da matriz: ";
	cin >> tam;
	while (tam < 1 || tam > 100) {
		system("cls");
		cout << "Informe um tamanho válido: ";
		cin >> tam;
	}

	system("cls");

	do {

		gotoxy(1,1);


		if (!ok || tecla == 13) {
			for (l = 0; l < tam; l++) {
				for (c = 0; c < tam; c++) {
					mat[l][c] = (rand() % 9) + 1;;
				}
			}
			ok = !ok;
		}

		for (l = 0; l < tam; l++) {
			cout << "[ ";
			for (c = 0; c < tam; c++) {
				cout << mat[l][c] << " ";
			}
			cout << "]\n";
		}

		cout << "\n\nMatriz Ordenada:\n\n";

		cont1 = cont2 = 0;
		for (l = 0; l < tam; l++) {
			for (c = 0; c < tam; c++) {

				cont1 = cont2 - 1;

				while (cont1 >= 0 && mat[l][c] < vet[cont1]) {
					vet[cont1 + 1] = vet[cont1];
					cont1--;

				}
				vet[cont1 + 1] = mat[l][c];
				cont2++;

			}
		}

		cont = 0;
		for (l = 0; l < tam; l++) {
			for (c = 0; c < tam; c++, cont++) {
				mat[l][c] = vet[cont];
			}
		}

		for (l = 0; l < tam; l++) {
			cout << "[ ";
			for (c = 0; c < tam; c++) {
				cout << mat[l][c] << " ";
			}
			cout << "]\n";
		}

		cout << "\n[ESC] Parar | [BACKSPACE] Mudar Tamanho da Matriz |[ENTER] Trocar Valores... ";
		tecla = _getch();

		/*cout << "\n\nTecla: " << tecla << "| Valor: ";
		printf("%d", tecla);

		system("pause");*/

		if (tecla == 8) {
			system("cls");
			cout << "Informe o novo tamanho: ";
			cin >> tam;
			while (tam < 1 || tam > 100) {
				system("cls");
				cout << "Informe um tamanho válido: ";
				cin >> tam;
			}
			system("cls");
			ok = !ok;
		}


	} while (tecla != 27);

	return EXIT_SUCCESS;
}