#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale>

using namespace std;

typedef struct{
	int numero, digito_verificador;
}codigo;

typedef struct
{
	char nome[30];
	float nota[4];
	codigo cod;
} aluno;

typedef struct {
	char nome[30];
	char idade;
	char sexo;
} reg;

typedef aluno diário[15];

int main() {

	setlocale(LC_ALL, "Portuguese");

	reg registro[10];

	diário diario;

	for (int i = 0; i < 15; i++) {

		char str_nome[30];
		cout << "Informe o nome do " << i + 1 << "° aluno: ";
		if (fgets(str_nome, sizeof str_nome, stdin) != NULL) {

			size_t len = strlen(str_nome);
			if (len > 0 && str_nome[len - 1] == '\n') {
				str_nome[--len] = '\0';
			}
		}
		strcpy(diario[i].nome, str_nome);

		for (int j = 0; j < 4; j++) {
			cout << "Informe a " << j + 1 << "ª nota do aluno: ";
			cin >> diario[i].nota[j];
		}

		cout << "Informe o núm. do cód. do aluno: ";
		cin >> diario[i].cod.numero;
		cout << "Informe o dígito verificador do aluno: ";
		cin >> diario[i].cod.digito_verificador;
		getchar();
		system("cls");
	}

	for (int i = 0; i < 15; i++) {
		cout << "________________________________________\nDADOS DO " << i + 1 << "° ALUNO:\n________________________________________\n\n";

		cout << "Nome:" << diario[i].nome << "\n";

		cout << "Notas: ";
		for (int j = 0; j < 4; j++) {
			cout << diario[i].nota[j] << " | ";
		}

		cout << "\nCódigo: " << diario[i].cod.numero << "-" << diario[i].cod.digito_verificador << "\n\n";

	}

	system("pause");
	return EXIT_SUCCESS;
}