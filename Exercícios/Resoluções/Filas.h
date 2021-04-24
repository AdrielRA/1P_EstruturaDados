#pragma once
#define TAM 8
typedef struct
{
	int M[TAM];
	int Com, Fim, Total;
}Fila;

void Qinit(Fila *F)
{
	F->Total = 0;
	F->Com = 0;
	F->Fim = 0;
}

void Enqueue(Fila *F, int X)
{
	if (F->Total < TAM)
	{
		F->M[F->Fim] = X;
		F->Total++;
		F->Fim++;
		if (F->Fim == TAM)
			F->Fim = 0;
	}
}

int Dequeue(Fila *F)
{
	if (F->Total > 0)
	{
		int X=F->M[F->Com];
		F->Total--;
		F->Com++;
		if (F->Com == TAM)
			F->Com = 0;
		return X;
	}
}

