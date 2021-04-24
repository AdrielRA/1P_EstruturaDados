#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
void main()
{
	int I,  //contador
	    N;  //número de valores para o vetor
	int X[100], Y[100]; //

	printf("Informe a quantidade de valores:");
	scanf("%d", &N);

    //lendo o vetor X
	for (I = 0; I < N; I++)
	{
		scanf("%d", &X[I]);
	}
	//lendo o vetor Y
	for (I = 0; I < N; I++)
	{
		scanf("%d", &Y[I]);
	}

	for (I = 0; I < N; I++)
	{
		printf("%5d", X[I] + Y[I]);
	}
	printf("\n");
}
