#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int mat[3][3];

int get_size(const char* file_name)
{
    FILE *file = fopen(file_name, "r");

    if(file == NULL)
        return 0;

    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    fclose(file);

    return size;
}


int main(void){

    setlocale(LC_ALL, "Portuguese");

    FILE *dados;
    char Nome_Arq[20];
    int valor;

    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            mat[i][j] = i+j;
        }
    }

    printf("Informe o nome do arquivo: ");

    fgets(Nome_Arq, 20, stdin);
    Nome_Arq[strlen(Nome_Arq)-1]='\0';
    strcat(Nome_Arq,".matriz");

    dados = fopen(("%s",Nome_Arq), "w");

    for (int i = 0; i<10;i++)
    {
        valor = fprintf(dados,"Linha %d\n",i);
    }

    fclose(dados);

    if(get_size(Nome_Arq) == 0)
    {
        printf("O arquivo esta vazio.");
    }
    else
    {
        printf("O arquivo nao esta vazio.");
    }

    system("pause");
    return EXIT_SUCCESS;
}
