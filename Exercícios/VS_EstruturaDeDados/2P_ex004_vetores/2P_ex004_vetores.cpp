#include <iostream>
#include <locale.h>
#include <iostream>
#include <locale.h>

void main() {

	setlocale(LC_ALL, "Portuguese");

	/*printf("Olá, mundo!");

	printf("\n\n");
	system("pause");*/


	/*float notas[4];

	notas[0] = 5.3;
	notas[1] = 9;
	notas[2] = 10;
	notas[3] = 7.3;

	printf("Nota do 4º Bimestre: %.2f\n", notas[3]);

	system("pause");*/

	char nome[30];
	char cidade[8] = "Alfenas";

	/*nome[0] = 'A';
	nome[1] = 'd';
	nome[2] = 'r';
	nome[3] = 'i';
	nome[4] = 'e';
	nome[5] = 'l';
	nome[6] = '\0';*/

	printf("Seu Nome: ");
	scanf("%s", &nome);

	printf("Nome: %s\n", nome);
	printf("Cidade: %s", cidade);

	printf("\n\n");
	system("pause");


}