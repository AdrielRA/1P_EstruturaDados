#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

typedef struct {
	int matricula;
	char nome[20];
	float nota[2];
} aluno;

void main()
{
	aluno pessoa;
	aluno turma[3];
	pessoa.matricula = 10;
	strcpy(pessoa.nome,"Marcos");
	scanf("%f", &pessoa.nota[0]);
	scanf("%f", &pessoa.nota[1]);

	turma[0].matricula = 1;
	turma[0].nota[0] = 8.0;
	turma[0].nota[1] = 7.0;

	turma[1].matricula = 2;
	turma[1].nota[0] = 6;
	turma[1].nota[1] = 2;




	printf("Nome:%s\n", pessoa.nome);
	printf("Matricula:%d\n", pessoa.matricula);
	printf("Nota:%.2f\n", pessoa.nota[0]);
	printf("Nota:%.2f\n", pessoa.nota[1]);
	system("pause");
}