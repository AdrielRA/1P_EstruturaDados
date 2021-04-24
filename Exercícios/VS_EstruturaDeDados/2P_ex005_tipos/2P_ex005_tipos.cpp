#include <iostream>
#include <locale.h>

void main() {

	setlocale(LC_ALL, "Portuguese");

	char x;
	float n;

	x = 'A';
	n = 5.0 / 2.0;

	printf("%f", n);

	printf("\n\n");
	system("pause");
}
