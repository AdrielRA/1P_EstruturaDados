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
}

void cadastrar(FILE *);

void consultar(FILE *);

int tamanho(FILE *);

void gera_relatorio(FILE *);

int main() {
	setlocale(LC_ALL, "Portuguese");

	FILE * arq;
	arq = fopen("dados.dat", "rb+");
	if (arq == NULL) {
		arq = fopen("dados.dat", "wb+");
		cout << "Erro fatal!\n";
		if (arq == NULL) {
			cout << "Erro: Falha Total\n";
			pause();
			exit(0);
		}
	}
	int op;
	do {
		cls();
		cout << "________________________________________\n";
		cout << "         MENU - LISTAS ORDENADAS        \n";
		cout << "________________________________________\n\n";
		cout << "[ 1 ] Cadastrar\n";
		cout << "[ 2 ] Consultar\n";
		cout << "[ 3 ] Gerar relatório\n";
		cout << "[ 4 ] Vazio\n";
		cout << "[ 5 ] Sair\n";
		cout << "________________________________________\n\n";
		cout << "Sua opção: ";
		cin >> op;
		cout << "________________________________________\n\n";
		setbuf(stdin, NULL);
		switch (op)
		{
		case 1:
			cadastrar(arq);
			break;
		case 2:
			consultar(arq);
			break;
		case 3:
			gera_relatorio(arq);
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			cout << "Opção inválida!\n";
			pause();
			break;
		}
	} while (op != 5);
	fclose(arq);
	return EXIT_SUCCESS;
}

int tamanho(FILE * arq) {
	fseek(arq, 0, SEEK_END);
	return ftell(arq) / sizeof(reg);
}

void cadastrar(FILE * arq) {
	reg Pessoa;
	char Validar;

	cout << "Cadastrando um novo registro:\n";
	cout << "Nome......:";
	gets_s(Pessoa.nome);
	cout << "Telefone..:";
	gets_s(Pessoa.tel);
	cout << "E-mail....:";
	gets_s(Pessoa.email);
	cout << "Confirmar dados [S/N]: ";
	cin >> Validar;
	if (toupper(Validar) == 'S') {
		fseek(arq, 0, SEEK_END);
		fwrite(&Pessoa, sizeof(reg), 1, arq);
		cout << "Cadstrado com sucesso!\n";
		pause();
	}
}

void consultar(FILE * arq) {
	reg Pessoa;
	int Num_Reg;

	cout << "Consultando Agenda:\n";
	cout << "Número do registro: ";
	cin >> Num_Reg;
	setbuf(stdin, NULL);
	if (Num_Reg < tamanho(arq)) {
		fseek(arq, Num_Reg * sizeof(reg), SEEK_SET);
		fread(&Pessoa, sizeof(reg), 1, arq);
		cout << "Nome......:" << Pessoa.nome << '\n';
		cout << "Telefone..:" << Pessoa.tel << '\n';
		cout << "E-mail....:" << Pessoa.email << '\n';
	}
	else {
		cout << "Registro inválido!\n";
	}
	pause();
}

void gera_relatorio(FILE * arq) {
	Lista L;
	ListInit(&L);
	reg Pessoa;
	Elem X;
	for (int i = 0; i < tamanho(arq); i++) {
		fseek(arq, i*sizeof(reg), SEEK_SET);
		fread(&Pessoa, sizeof(reg), 1, arq);
		strcpy(X.chave, Pessoa.nome);
		X.num_reg = i;
		Ins(&L, X);
	}
	gera_txt(arq, &L);
}