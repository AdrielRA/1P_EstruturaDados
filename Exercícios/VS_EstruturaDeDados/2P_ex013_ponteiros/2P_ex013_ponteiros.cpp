#include <iostream>
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

void soma(int a, int b, int *s) {
	*s = a + b;
}

void MENU() {

	int x, y, s;

	cls();
	linha(40, '-');
	cout << "                 SOMANDO                 \n";
	linha(40, '-');
	cout << "\n";

	cout << "Informe o valor de x: ";
	cin >> x;
	cout << "Informe o valor de y: ";
	cin >> y;

	soma(x, y, &s);

	cout << "\nA soma de " << x << " e " << y << " é: " << s;

}

int main(void) {

	char nome[30];

	setlocale(LC_ALL, "Portuguese");

	MENU();

	sair();
	return EXIT_SUCCESS;
}