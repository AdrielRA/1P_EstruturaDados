#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

void pause() {
	system("pause");
}

void limpar() {
	system("cls");
}

void linha(int t, char c) {

	int i;

	for (i = 0; i < t; i++) {
		cout << c;
	}
	cout << "\n";
}

//void piramede(int x, char c) {
//
//	int i;
//
//	for (i = 0; i < x; i++) {
//		linha(i, c);
//	}
//	cout << "\n";
//	pause();
//	}

void maior(int x, int y, int *z) {

	if (x >= y) {
		*z = x;
	}
	else if (y > x) {
		*z = y;
	}
}

void MENU() {

	int a, b, i;

	limpar();
	linha(40, '-');
	cout << "             MAIOR OU MENOR             \n";
	linha(40, '-');
	cout << "\n";

	cout << "Informe o valor de a: ";
	cin >> a;
	cout << "Informe o valor de b: ";
	cin >> b;

	maior(a, b, &i);

	cout << "\nO maior é " << i;

}

void SAIR() {
	cout << "\n\n";
	pause();
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	/*piramede(20, 'O');*/

	MENU();
	SAIR();
	return EXIT_SUCCESS;
}