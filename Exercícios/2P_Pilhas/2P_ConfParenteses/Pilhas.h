#pragma once

#define TAM 100

typedef struct {
	char M[TAM];
	int Topo;
} Pilha;

void Init(Pilha *P) {
	P->Topo = 0;
}

char Pop(Pilha *P) {
	if (P->Topo > 0) {
		P->Topo--;
		return P->M[P->Topo];
	}
	return EXIT_FAILURE;
}

void Push(Pilha *P, int X) {
	if (P->Topo < TAM) {
		P->M[P->Topo] = X;
		P->Topo++;
	}
}

char Empty(Pilha *P) {
	if (P->Topo == 0) return 1;
	else return 0;
}