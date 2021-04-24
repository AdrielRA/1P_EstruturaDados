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

void ascii() {

	char ch;

	for (int i = -256; i < 256; i++) {

		ch = i;

		cout << i << ": " << ch << "\n";
	}
}

void maiusculo(char *s) {
	for(int i = 0; s[i + 1] != '\0'; i++) {
		if (s[i] > 96 && s[i] < 123) {
			s[i] = s[i] - 32;
		}
	}
	cout << "\nMaiúsculas: " << s;
}

void minusculo(char *s) {
	for (int i = 0; s[i + 1] != '\0'; i++) {
		if (s[i] > 64 && s[i] < 91) {
			s[i] = s[i] + 32;
		}
	}
	cout << "\nMinúsculas: " << s;
}

void primaiusc(char *s) {
	for (int i = 0; s[i + 1] != '\0'; i++) {
		if (i == 0 || s[i-1] == ' ') {
			s[i] = s[i] - 32;
		}
	}
	cout << "\nCaptalizada: " << s;
}

void trocar(char *s, char ant, char nov) {

	for (int i = 0; s[i + 1] != '\0'; i++) {
		if ((s[i] == ant)) {
			s[i] = nov;
		}
	}

	cout << "\nNova string: " << s;

}

void MENU() {

	char str[30], antiga, nova;

	linha(40, '-');
	cout << "      -SUBSTITUIR NA STR-      \n";
	linha(40, '-');
	cout << "\n";

	cout << "Informe sua string: ";
	fgets(str, 30, stdin);
	cout << "Encontrar a letra: ";
	cin >> antiga;
	cout << "E substituir por: ";
	cin >> nova;

	trocar(str, antiga, nova);
	maiusculo(str);
	minusculo(str);
	primaiusc(str);
/*
	cout << "\n";

	for (int i = 0; str[i + 1] != '\0'; i++) {
		int cn = str[i];
		cout << " " << cn << " ";
	}*/

	cout << "\n";
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	MENU();

	sair();
	return EXIT_SUCCESS;
}