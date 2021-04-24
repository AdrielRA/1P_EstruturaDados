#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

using namespace std;

void pause() {
	system("pause");
}

void sair() {
	cout << "\n\n";
	pause();
}

void cls() {
	system("cls");
}

void linha(int t, char c) {

	int i;

	for (i = 0; i < t; i++) {
		cout << c;
	}
	cout << "\n";
}

int letras(char *s) {

	int i, c = 0;

	for (i = 0; s[i+1] != '\0'; i++) {
		if (s[i] != ' ') {
			c++;
		}
	}

	return c;
}

int espaco(char *s) {

	int i, c = 0;

	for (i = 0; s[i+1] != '\0'; i++) {
		if (s[i] == ' ') {
			c++;
		}

	}

	return c;
}

void MENU() {

	int x, y;
	char str[30];

	cls();
	linha(40, '-');
	cout << "      -TAMANHO DA STRING-      \n";
	linha(40, '-');
	cout << "\n";

	cout << "Informe sua string: ";
	fgets(str, 30, stdin);

	cout << "\nQuantidade de letras: " << letras(str);
	cout << "\nQuantidade de espaços: " << espaco(str);
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	MENU();

	sair();
	return EXIT_SUCCESS;
}