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
}

char isFull(Pilha *P) {
	return P->Topo == TAM;
}

char * Mostrar_Pilha(Pilha *P) {
	
	char * String = (char*)calloc(TAM*2, sizeof(char));

	String[0] = '[';

	char letra[TAM];
	
	for (int i = 0; i < P->Topo; i++) {

		_itoa(P->M[i], letra, 10);

		strcat(String, letra);

		if (i < P->Topo-1) {
			letra[0] = ',';
			letra[1] = '\0';
		}
		else {
			letra[0] = '\0';
		}
		strcat(String, letra);
	}

	strcat(String, "]\0");
	return String;
}