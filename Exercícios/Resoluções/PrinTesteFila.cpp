#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Filas.h"

void main()
{
	Fila F1;
	Qinit(&F1);
	Enqueue(&F1, 14);
	Enqueue(&F1, 62);

	mostrafila(&F1);

	int X = Dequeue(&F1);


	printf("\n");
	system("Pause");
}