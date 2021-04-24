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

void mes(int m) {

	cout << "\n";

	cout << "Mês de referência: ";
	switch (m)
	{
	case 1: cout << "JANEIRO";
		break;
	case 2: cout << "FEVEREIRO";
		break;
	case 3: cout << "MARÇO";
		break;
	case 4: cout << "ABRIL";
		break;
	case 5: cout << "MAIO";
		break;
	case 6: cout << "JUNHO";
		break;
	case 7: cout << "JULHO";
		break;
	case 8: cout << "AGOSTO";
		break;
	case 9: cout << "SETEMBRO";
		break;
	case 10: cout << "OUTUBRO";
		break;
	case 11: cout << "NOVEMBRO";
		break;
	case 12: cout << "DEZEMBRO";
		break;
	default: cout << "MÊS INVÁLIDO";
		break;
	}
}

void MENU() {

	int a;

	cls();
	linha(40, '_');
	cout << "             VERIFICA MÊS             \n";
	linha(40, '_');
	cout << "\n";

	cout << "Informe um número: ";
	cin >> a;

	mes(a);

}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	MENU();

	sair();
	return EXIT_SUCCESS;
}