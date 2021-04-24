#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale>

using namespace std;

//typedef float real;

typedef struct
{
	int matricula;
	char nome[30];
	float nota[2];
} aluno;

int main() {

	setlocale(LC_ALL, "Portuguese");

	/*real nota;
	nota = 2.5;
	cout << "Nota: " << nota << '\n';*/

	aluno turma[3];

	aluno pessoa;

	pessoa.matricula = 10;
	strcpy(pessoa.nome, "Adriel");
	pessoa.nota[0] = 10.0;

	turma[0].matricula = 11;
	turma[0].nota[0] = 9.75;

	turma[1].matricula = 2;
	turma[1].nota[0] = 6.8;
	turma[1].nota[1] = 7.9;

	cout << "Nome: " << pessoa.nome << "\nMatricula: " << pessoa.matricula << "\nNota: " << pessoa.nota[0];

	cout << "\n\n";
	system("pause");
	return EXIT_SUCCESS;
}