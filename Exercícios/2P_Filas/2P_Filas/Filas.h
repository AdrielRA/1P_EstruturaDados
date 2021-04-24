#pragma once
#define TAM 250
#include "Pilhas.h"

typedef struct {
	int M[TAM];
	int Fim, Com, Total;
}Fila;

void Qinit(Fila * F) {
	F->Com = F->Fim = F->Total = 0;
}

void Enqueue(Fila * F, int X) {
	if (F->Total < TAM) {
		F->M[F->Fim] = X;
		F->Total++;
		F->Fim++;
		if (F->Fim == TAM) { F->Fim = 0; }
	}
}

void Enqueueini(Fila * F, int X) {
	if (F->Total < TAM) {
		F->Com--;
		if(F->Com < 0) { F->Com = TAM - 1; }
		F->M[F->Com] = X;
		F->Total++;
	}
}

int Dequeue(Fila * F) {
	if (F->Total > 0) {
		int Ret = F->M[F->Com];
		F->Total--;
		F->Com++;
		if (F->Com == TAM) { F->Com = 0; }
		return Ret;
	}
	else return 0;
}

int DequeueFim(Fila *F) {
	if (F->Total > 0) {
		F->Total--;
		F->Fim--;
		if (F->Fim < 0) { F->Fim = TAM - 1; }
		return F->M[F->Fim];
	}
	else return 0;
}

void Inverter(Fila * F) {
	Pilha P;
	Init(&P);
	while (!QisEmpty(F)) {
		Push(&P, Dequeue(F));
	}
	while (!Empty(&P)) {
		Enqueue(F, Pop(&P));
	}
}

char * Mostra_Fila(Fila * F) {

	int cont = F->Com-1;
	char letra[10];
	char * String = (char*)calloc(TAM * 2, sizeof(char));

	String[0] = '[';
	for (int i = 0; i < F->Total; i++) {
		cont++;
		if (cont == TAM) { cont = 0; }
		_itoa(F->M[cont], letra, 10);
		strcat(String, letra);

		if (i < (F->Total - 1)) { letra[0] = ','; letra[1] = '\0'; }
		else { letra[0] = '\0'; }
		strcat(String, letra);
	}
	strcat(String, "]\0");

	return String;
}

char QisFull(Fila * F) {
	return (F->Total == TAM);
}

char QisEmpty(Fila * F) {

	return !(F->Total);
}

