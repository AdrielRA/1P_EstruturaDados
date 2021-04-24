#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include "Pilhas.h"

void main()
{
	char exp[30];
	int i = 0;
	Pilha P;
	Init(&P);

	printf("Entre com uma expressao:");
	gets_s(exp);

	while (exp[i] != '\0')
	{
		if (exp[i] == '(')
			Push(&P, '(');
		if (exp[i] == ')')
			if  (!Empty(&P))
				Pop(&P);
			else
			{
				Push(&P, '*');
				break;
			}
		i++;
	}
	if (Empty(&P))
		printf("Expressao correta!!!\n");
	else
		printf("Erro na expressao!!!\n");
	system("pause");
}