#include <iostream>

#define TAM 8
typedef char Elem[30];
typedef struct 
{
	Elem M[TAM];
	int Fim;
}Lista;

void Init(Lista *L)
{
	L->Fim=0;
}

void Lins(Lista *L, Elem X)
{
	if (L->Fim<TAM) 
	{
		int I=L->Fim;
		while ((I>0)&&(strcmp(X,L->M[I-1])<0))
		{
			strcpy(L->M[I],L->M[I-1]);
			I--;
		}
		strcpy(L->M[I],X);
		L->Fim++;
	}
}

char Rem(Lista *L, Elem X)
{
	int I = 0;
	while ((I < L->Fim) && (strcmp(X,L->M[I])>0))
	{
		I++;
	}
	if ((I < L->Fim) && (strcmp(X,L->M[I])==0))
	{
		while (I < (L->Fim - 1))
		{
			strcpy(L->M[I],L->M[I + 1]);
			I++;
		}
		L->Fim--;
		return 1;
	}
	return 0;
}

void MostraLista(Lista *L)
{
	printf("[");
	for (int I=0;I<L->Fim;I++)
	{
		printf("%s",L->M[I]);
		if (I<(L->Fim-1))
			printf(",");
	}
	printf("]");
	
}

int Ocorre(Lista *L, Elem X)
{
	int I = 0;
	while ((I < L->Fim) && (strcmp(X,L->M[I])>0))
		I++;
	int C = 0;
	while ((I < L->Fim) && (strcmp(X,L->M[I])==0))
	{
		C++;
		I++;
	}
	return C;
}


