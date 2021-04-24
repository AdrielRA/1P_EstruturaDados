#pragma once
typedef struct {
	int M[250];
	int Topo;
} Pilha;

void Init(Pilha *P) {
	P->Topo = 0;
}

void Push(Pilha *P, int X) {
	if (P->Topo < sizeof(P->M)) {
		P->M[P->Topo] = X;
		P->Topo++;
	}
}

int Pop(Pilha *P) {
	P->Topo--;
	return P->M[P->Topo];
}

char Empty(Pilha *P){
	if (P->Topo == 0) {
		return 1;
	}
	else {
		return 0;
	}
}