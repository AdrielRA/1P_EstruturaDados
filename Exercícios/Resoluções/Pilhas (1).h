#pragma once

#define TAM 10

typedef struct{
	char M[TAM];
	int Topo;
}Pilha;

void Init(Pilha *P)
{
	P->Topo = 0;
}

void Push(Pilha *P, int X)
{
	if (P->Topo < TAM)
	{
		P->M[P->Topo] = X;
		P->Topo++;
	}
}

int Pop(Pilha *P)
{
	if (P->Topo > 0)
	{
		P->Topo--;
		return P->M[P->Topo];
	}
}

char Empty(Pilha *P)
{
	if (P->Topo == 0)
		return 1;
	else
		return 0;
}

char Isfull(Pilha *P)
{
	if (P->Topo == TAM)
		return 1;
	else
		return 0;
}