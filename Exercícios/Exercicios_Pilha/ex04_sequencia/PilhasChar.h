#pragma once
#define TAM 250

typedef struct {
	char M[TAM];
	int Topo;
} Pilha_Char;

void Init(Pilha_Char *P) {
	P->Topo = 0;
}

void Push(Pilha_Char *P, char X) {
	if (P->Topo < TAM) {
		P->M[P->Topo] = X;
		P->Topo++;
	}
}

char Pop(Pilha_Char *P) {
	P->Topo--;
	return P->M[P->Topo];
}

char Empty(Pilha_Char *P) {
	if (P->Topo == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

char isFull(Pilha_Char * P) {
	if (P->Topo == TAM) { return 1; }
	else { return 0; }
}