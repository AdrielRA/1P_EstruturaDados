#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale>

#define TAM 10

void leitura_matriz(int[10][10], int, int);
void mostra_diagonal(int[10][10], int);

int main() {

	setlocale(LC_ALL, "Portuguese");


	int mat[TAM][TAM], tam;

	printf("Informe o tamanho da matriz: ");
	scanf("%d", &tam);
	while(tam < 0 || tam > 10){
        system("cls");
        printf("Inválido! Informe o tamanho da matriz: ");
        scanf("%d", &tam);
	}

	leitura_matriz(mat, tam, tam);

	system("cls");

	mostra_diagonal(mat, tam);

	printf("\n\n");
	system("pause");

	return EXIT_SUCCESS;
}

void leitura_matriz(int mat[TAM][TAM], int l, int c) {

	for(int i = 0; i < l; i++) {
		for(int j = 0; j < c; j++) {
			printf("Informe valor de mat[%d][%d]: ", i,j);
			scanf("%d", &mat[i][j]);
		}
	}
}

void mostra_diagonal(int mat[TAM][TAM], int tam) {

	for(int i = 0; i < tam; i++) {
		printf("mat[%d][%d] = %d\n", i,i,mat[i][i]);
	}
}
