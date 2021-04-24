#define _CRT_SECURE_NO_WARNINGS
#include "listas.h"
#include <iostream>

void main(void)
{
	Lista L1;
	Init(&L1);
	int X;
	int OP;
	do
	{
		system("cls");
		printf("============Listas Ordenadas=========\n");
		printf("1.Inserir\n");
		printf("2.Remover\n");
		printf("3.\n");
		printf("4.\n");
		printf("10.Sair\n");
		printf("=====================================\n");
		printf("Lista:");
		MostraLista(&L1);
		printf("\n=====================================\n");
		printf("Sua opcao:");
		scanf("%d",&OP);
		switch (OP){
			case 1: 
				printf("Elemento:");
				scanf(" %d", &X);
		        Lins(&L1,X);
				break;
			case 2:
				printf("Elemento:");
				scanf(" %d", &X);
				if (Rem(&L1, X))
					printf("Elemento removido com sucesso!\n");
				else
					printf("Elemento inexistente!\n");
				system("Pause");
				break;
		}
	} while(OP!=10);
}

