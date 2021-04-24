#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void linha()
{
	printf("=======================================\n");
}
void linha(int X)
{
	int I;
	for (I = 0; I < X; I++)
	{
		putchar('=');
	}
	putchar('\n');
}

void linha(int X, char Y)
{
	int I;
	for (I = 0; I < X; I++)
	{
		putchar(Y);
	}
	putchar('\n');
}
void maior(int X, int Y)
{
	if (X>=Y)
	{
		printf("%d", X);
	}
	else
	{
		printf("%d", Y);
	}
}
void maior(int X, int Y, int *Z)
{
	if (X >= Y)
	{
		*Z = X;
	}
	else
	{
		*Z = Y;
	}
}
void main()
{
	int I,A,B;
	
    for (I = 1; I < 12; I++)
	{
	    linha(I, '#');
	}
	
    A = 17;
	B = 30;
	maior(A, B, &I);
	printf("Maior valor:%d\n", I);

    for (I = 12; I > 0; I--)
	{
	    linha(I, '#');
	}

	
	system("pause");
}