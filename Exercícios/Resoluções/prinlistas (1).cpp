#define _CRT_SECURE_NO_WARNINGS
#include "listas.h"
#include <iostream>

void main(void)
{
	Lista L1;
	Init(&L1);
	Elem X;
	int OP;
	do
	{
		system("cls");
		printf("============Listas Ordenadas=========\n");
		printf("1.Inserir\n");
		printf("2.Remover\n");
		printf("3.Ocorrencias\n");
		printf("4.\n");
		printf("5.Ocorrencias no intervalo\n");
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
				getchar();
				gets_s(X);
		        Lins(&L1,X);
				break;
			case 2:
				printf("Elemento:");
				gets_s(X);
				if (Rem(&L1, X))
					printf("Elemento removido com sucesso!\n");
				else
					printf("Elemento inexistente!\n");
				system("Pause");
				break;
			case 3:
				printf("Elemento:");
				getchar();
				gets_s(X);
				printf("Numero de ocorrencias=%d\n", Ocorre(&L1, X));
				system("Pause");
				break;
			case 4:
				
				break;
			case 5:
				int VI, VF;
				printf("Entre com o valor inicial:");
				scanf("%d", &VI);
				printf("Entre com o valor final:");
				scanf("%d", &VF);
				//printf("Numero de ocorrencias=%d\n", Ocorre(&L1, VI,VF));
				system("Pause");
				break;
			case 6:
				
				system("Pause");
				break;

		}
	} while(OP!=10);
}

