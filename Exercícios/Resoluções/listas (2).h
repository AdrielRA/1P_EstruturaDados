#include <iostream>
#define TAM 8
//tipo para o registro do arquivo de dados
typedef struct   
{
	char nome[30];
	char tel[20];
	char email[20];
}reg;

typedef struct // tipo Elem para a lista ordenada
{
	char chave[30];
	int nr;
}Elem;

typedef struct 
{
	Elem M[TAM];
	int Fim;
}Lista;

void Init(Lista *L)
{
	L->Fim=0;
}

void Lins(Lista *L, Elem X)
{
	if (L->Fim<TAM) 
	{
		
		int I=L->Fim;
		while ((I>0)&&(strcmp(X.chave,L->M[I-1].chave)<0))
		{
			strcpy(L->M[I].chave,L->M[I-1].chave);
			L->M[I].nr = L->M[I - 1].nr;
			I--;
		}
		strcpy(L->M[I].chave,X.chave);
		L->M[I].nr = X.nr;
		L->Fim++;
	}
}

//char Rem(Lista *L, Elem X)
//{
//	int I = 0;
//	while ((I < L->Fim) && (strcmp(X,L->M[I])>0))
//	{
//		I++;
//	}
//	if ((I < L->Fim) && (strcmp(X,L->M[I])==0))
//	{
//		while (I < (L->Fim - 1))
//		{
//			strcpy(L->M[I],L->M[I + 1]);
//			I++;
//		}
//		L->Fim--;
//		return 1;
//	}
//	return 0;
//}

void geratxt(FILE *arq, Lista *L)
{
	FILE *arqtxt=fopen("Relatorio.txt", "w"); //abre o arquivo texto
	fprintf(arqtxt,"Lista de contatos\n"); 
	fprintf(arqtxt, "======================================================================\n");
	reg Pessoa;
	for (int I = 0; I<L->Fim; I++) //percorre a lista
	{
		fseek(arq, L->M[I].nr * sizeof(reg), SEEK_SET); //posiciona no registro do arquivo
		fread(&Pessoa, sizeof(reg), 1, arq); //lê o registro do arquivo
		fprintf(arqtxt,"%-30s",Pessoa.nome); //grava no arquivo texto os campos
		fprintf(arqtxt, "%-20s", Pessoa.tel);
		fprintf(arqtxt, "%-20s\n", Pessoa.email);
	}
	fprintf(arqtxt, "======================================================================\n");
	fclose(arqtxt);
	printf("Arquivo Relatorio.txt gerado com sucesso!!!\n");
	system("pause");
}

