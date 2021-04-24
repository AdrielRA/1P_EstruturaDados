#include <iostream>

#define TAM 8
typedef int Elem;
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
		while ((I>0)&&(X<L->M[I-1]))
		{
			L->M[I]=L->M[I-1];
			I--;
		}
		L->M[I] = X;
		L->Fim++;
	}
}

char Rem(Lista *L, Elem X)
{
	int I = 0;
	while ((I < L->Fim) && (X > L->M[I]))
	{
		I++;
	}
	if ((I < L->Fim) && (X == L->M[I]))
	{
		while (I < (L->Fim - 1))
		{
			L->M[I] = L->M[I + 1];
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
		printf("%d",L->M[I]);
		if (I<(L->Fim-1))
			printf(",");
	}
	printf("]");
	
}
