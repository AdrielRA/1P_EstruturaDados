#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <locale>

using namespace std;

char par(int);

int main() {

	int X;

	setlocale(LC_ALL, "Portuguese");

	cout << "________________________________________\n";
	cout << "           VERIFICA SE � PAR            \n";
	cout << "________________________________________\n\n";

	cout << "Informe um n�mero inteiro: ";
	cin >> X;

	if (par(X)) { cout << "O n�mero " << X << " � par!"; }
	else { cout << "O n�mero " << X << " � �mpar!"; }

	cout << "\n\n";

	system("pause");

	return EXIT_SUCCESS;
}

char par(int N) {
	if (N % 2 == 0) return 1;
	else return 0;
}