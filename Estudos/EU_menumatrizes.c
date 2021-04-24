#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int mat[3][3];
int OP;

bool f1, f2;

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

int menu(){

    system("cls");

    printf("________________________________________\n");
    printf("            MENU DE MATRIZES            \n");
    printf("________________________________________\n\n");
    printf("[ 1 ] Definir tamanho da matriz\n");
    printf("[ 2 ] Ler Valores\n");
    printf("[ 3 ] Exibir Matriz\n");
    printf("[ 4 ] Multiplicar Valores por Inteiro\n");
    printf("[ 5 ] Somar Valores da Matriz\n");
    printf("[ 6 ] Somar Linha da Matriz\n");
    printf("[ 7 ] Somar Coluna da Matriz\n");
    printf("[ 8 ] Trocar um Valor na Matriz\n");
    printf("[ 9 ] Somar Diagonal Principal\n");
    printf("[10 ] Sair\n");

    printf("\nSua opção: ");
    int num = fgetc(stdin);

    system("cls");

    return num;
}


int main(void){

    setlocale(LC_ALL, "Portuguese");

    FILE *dados;
    char Nome_Arq[] = "Dados.matriz";

    /*for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            mat[i][j] = i+j;
        }
    }*/

    if(get_size(Nome_Arq) == 0)
    {
        //O arquivo esta vazio
        f1 = false;
    }
    else
    {
        //O arquivo nao esta vazio
        f1 = true;
    }

    dados = fopen(("%s",Nome_Arq), "w");

    do{
        OP = menu();
        switch(OP){
        case 1:printf("Opção %d selecionada!\n", OP);system("pause");
            break;
        case 2:printf("Opção %d selecionada!", OP);system("pause");
            break;
        case 3:printf("Opção %d selecionada!", OP);system("pause");
            break;
        case 4:printf("Opção %d selecionada!", OP);system("pause");
            break;
        case 5:printf("Opção %d selecionada!", OP);system("pause");
            break;
        case 6:printf("Opção %d selecionada!", OP);system("pause");
            break;
        case 7:printf("Opção %d selecionada!", OP);system("pause");
            break;
        case 8:printf("Opção %d selecionada!", OP);system("pause");
            break;
        case 9:printf("Opção %d selecionada!", OP);system("pause");
            break;
        default: break;
        }

    }while (OP != 10);

    fclose(dados);

    printf("\n\n");
    system("pause");
    return EXIT_SUCCESS;
}
