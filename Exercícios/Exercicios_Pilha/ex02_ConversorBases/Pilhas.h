#pragma once
#define TAM 250

typedef struct {
	int M[TAM];
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
	return P->Topo == 0;

	/*if (P->Topo == 0) {
		return 1;
	}
	else {
		return 0;
	}*/
}

char isFull(Pilha *P) {
	return P->Topo == TAM;

	/*if (P->Topo == TAM) return 1;
	else return 0;*/
}