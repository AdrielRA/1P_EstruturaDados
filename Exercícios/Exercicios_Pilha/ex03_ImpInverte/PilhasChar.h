#pragma once


typedef struct {
	char M[250];
	int Topo;
} Pilha_Char;

void Init(Pilha_Char *P) {
	P->Topo = 0;
}

void Push(Pilha_Char *P, char X) {
	if (P->Topo < sizeof(P->M)) {
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