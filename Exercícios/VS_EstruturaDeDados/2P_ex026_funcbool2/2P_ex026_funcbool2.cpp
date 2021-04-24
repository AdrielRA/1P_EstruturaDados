#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <locale>

using namespace std;

char email_inval(char*);

int main() {

	char email[30];

	setlocale(LC_ALL, "Portuguese");

	cout << "________________________________________\n";
	cout << "       VERIFICA ESPAÇO NO E-MAIL        \n";
	cout << "________________________________________\n\n";

	cout << "Informe seu e-mail: ";
	gets_s(email);

	while(email_inval(email)){
		cout << "Inválido! Informe seu e-mail: ";
		gets_s(email);
	}

	cout << "\nE-mail salvo com sucesso!";

	cout << "\n\n";

	system("pause");

	return EXIT_SUCCESS;
}

char email_inval(char* email) {
	for (int i = 0; email[i] != '\0'; i++ ) {
		if (email[i] == ' ') { return 1; }
	}
	return 0;
}