#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void main()
{
	int N, M; //numero de linhas e colunas
	int A[100][100], B[100][100], C[100][100]; //matrizes
	int I, J; //contadores

	scanf("%d %d", &N, &M); 

        //lendo a matriz A
	for (I = 0; I < N; I++)
	{
		for (J = 0; J < M; J++)
		{
			scanf("%d", &A[I][J]);
		}
	}
        //lendo a matriz B
	for (I = 0; I < N; I++)
	{
		for (J = 0; J < M; J++)
		{
			scanf("%d", &B[I][J]);
		}
	}

        //calculando e imprimindo a matriz C
	for (I = 0; I < N; I++)
	{
		for (J = 0; J < M; J++)
		{
			C[I][J]=A[I][J]+B[I][J];
			printf("%6d", C[I][J]);
		}
		printf("\n");
	}
}