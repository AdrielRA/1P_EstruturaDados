#define _CRT_SECURE_NO_WARNINGS
#include "listas.h"
#include <iostream>

//o tipo reg foi definido em listas.h

void cadastrar(FILE *arq);
void consulta(FILE *arq);
int tamanho(FILE *arq);
void gerarelatorio(FILE *arq);
void geratxt(FILE *arq, Lista *L);

void main()
{
	FILE *arq;

	arq = fopen("dados.dat", "rb+");

	if (arq == NULL)
	{
		arq = fopen("dados.dat", "wb+");
		if (arq == NULL)
		{
			printf("Nao foi possivel abrir o arquivo de dados!\n");
			system("pause");
			exit(0);
		}
	}
	
	int OP;
	do {
		system("cls");
		printf("===========Agenda==========\n");
		printf("1.Cadastrar\n");
		printf("2.Consultar\n");
		printf("3.Gerar relatorio\n");
		printf("4.\n");
		printf("5.Sair\n");
		printf("===========================\n");
		printf("Sua opcao:");
		scanf("%d", &OP);
		setbuf(stdin, NULL);
		switch (OP)
		{
		case 1:
			cadastrar(arq);
			break;
		case 2:
			consulta(arq);
			break;
		case 3:
			gerarelatorio(arq);
			break;
		}
	} while (OP != 5);
	fclose(arq);
}

void cadastrar(FILE *arq)
{
	reg Pessoa;
	char ok;
	printf("Cadastrando um novo registro:\n");
	printf("Nome.....:");
	gets_s(Pessoa.nome);
	printf("Telefone.:");
	gets_s(Pessoa.tel);
	printf("E-mail...:");
	gets_s(Pessoa.email);
	printf("Confirma dados <S/N>:");
	scanf(" %c", &ok);
	if (toupper(ok) == 'S')
	{
		fseek(arq, 0, SEEK_END);
		fwrite(&Pessoa, sizeof(reg), 1, arq);
		printf("Registro gravado com sucesso!!!\n");
		system("Pause");
	}
}

void consulta(FILE *arq)
{
	reg Pessoa;
	int nr;
	printf("Consultar agenda:\n");
	printf("Numero do registro:");
	scanf("%d", &nr);
	setbuf(stdin, NULL);
	if (nr < tamanho(arq))
	{
		fseek(arq, nr * sizeof(reg), SEEK_SET);
		fread(&Pessoa, sizeof(reg), 1, arq);

		printf("Nome.....:%s\n", Pessoa.nome);
		printf("Telefone.:%s\n", Pessoa.tel);
		printf("E-mail...:%s\n", Pessoa.email);
	}
	else
	{
		printf("Registro invalido!\n");
	}
	system("Pause");
}

int tamanho(FILE *arq)
{
	fseek(arq, 0, SEEK_END);
	return ftell(arq) / sizeof(reg);
}

void gerarelatorio(FILE *arq)
{
	Lista L;
	Init(&L);
	reg Pessoa;
	Elem X;
	for (int i = 0; i < tamanho(arq); i++)
	{
		fseek(arq, i * sizeof(reg), SEEK_SET);
		fread(&Pessoa, sizeof(reg), 1, arq);
		strcpy(X.chave,Pessoa.nome);
		X.nr = i;
		Lins(&L, X);
	}
	geratxt(arq, &L); // essa função irá percorrer a lista para
}                     // gerar um arquivo tipo texto ordenado