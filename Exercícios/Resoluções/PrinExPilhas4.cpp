#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include "Pilhas.h"

void main()
{
	char s[100];
	int i=0;
	Pilha P;
	Init(&P);
	printf("Entre com a sequencia:");
	scanf("%s", &s);

	while (s[i] != '\0')
	{
		if (s[i] == '+')
			if (Isfull(&P))
			{
				printf("Erro fatal:Pilha cheia!!!\n");
				system("pause");
				exit(0);
			}
			else
				Push(&P, '+');
		if (s[i] == '-')
			if (Empty(&P))
			{
				printf("Erro fatal:Pilha vazia!!!\n");
				system("pause");
				exit(0);
			}
			else
				Pop(&P);
		i++;
	}
	printf("Sequencia aceita!\n");
	system("pause");

}
