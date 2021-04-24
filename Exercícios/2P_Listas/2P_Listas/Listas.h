#pragma once

#define TAM 250

typedef int Elem;

typedef struct {
	Elem M[TAM];
	int Fim;
}Lista;

void ListInit(Lista * L) {
	L->Fim = 0;
}

void Ins(Lista * L, Elem X) {
	if (L->Fim < TAM) {
		int I = L->Fim;
		while (I > 0 && L->M[I-1] > X) {
			L->M[I] = L->M[I - 1];
			I--;
		}
		L->M[I] = X;
		L->Fim++;
	}
}

char Remove(Lista * L, Elem X) {

	for (int i = 0; i < L->Fim; i++) {
		if (L->M[i] == X) {
			for (i; i < L->Fim-1; i++) {
				L->M[i] = L->M[i + 1];
			}
			L->Fim--;
			return 1;
		}
	}
	return 0;
}

char RemoveAula(Lista * L, Elem X) {
	int I = 0;
	while ((I < L->Fim) && (X > L->M[I])) { I++; }
	if((I < L->Fim) && (X==L->M[I])){
		while(I<(L->Fim-1)){
			L->M[I] = L->M[I + 1];
			I++;
		}
		L->Fim--;
		return 1;
	}
	return 0;
}

int Ocorrencia(Lista * L, Elem X) {
	int cont = 0, i = 0;

	while ((i < L->Fim) && (X > L->M[i])) { i++; }
	while ((i < L->Fim) && (X == L->M[i])) { cont++; i++; }

	return cont;
}

int Ocorrencia(Lista * L, Elem X, Elem Y) {
	int cont = 0, i;

	if (X > Y) {
		i = Y;
		Y = X;
		X = i;
	}

	i = 0;

	while ((i < L->Fim) && (X > L->M[i])) { i++; }
	while ((i < L->Fim) && (Y >= L->M[i])) { cont++; i++; }

	return cont;
}

float Media(Lista * L) {
	int S = 0;
	
	if (L->Fim) {
		for (int i = 0; i < L->Fim; i++) {
			S += L->M[i];
		}
		return (float)S / L->Fim;
	}
	return 0;
}

char * Mostra_Lista(Lista * L) {

	char * String = (char*)calloc(TAM * 2, sizeof(char));

	String[0] = '[';

	for (int i = 0; i < L->Fim; i++) {

		char caracter[20];

		if(!_stricmp(typeid(Elem).name(), "char")){
			caracter[0] = L->M[i];
			caracter[1] = '\0';
		}
		else if (!_stricmp(typeid(Elem).name(), "int")) {

			_itoa(L->M[i], caracter, 10);
		}
		else{
			strcat(String, "Erro de Tipo");
			break;
		}

		if (i < L->Fim -1) {
			strcat(caracter, ",");
		}

		strcat(caracter, "\0");
		strcat(String, caracter);
	}

	strcat(String, "]\0");

	return String;
}

char * Mostra_Tipo() {
	char * String = (char*)calloc(5, sizeof(char));
	strcat(String, typeid(Elem).name());
	strcat(String, "\0");
	return String;
}

char LisEmpty(Lista * L) {
	return !L->Fim;
}

char LisFull(Lista * L) {
	return L->Fim == TAM;
}
