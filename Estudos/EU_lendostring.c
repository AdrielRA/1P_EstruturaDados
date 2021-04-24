#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(void){

    system("CLS");
    setlocale(LC_ALL, "Portuguese");


    char nome[3][50];


    for(int i = 0; i < 3; i++){
        printf("Infos da %dª pessoa:", i+1);
        printf("\nInforme seu nome: ");
        fgets(nome[i],50,stdin);
    	nome[i][strlen(nome[i])-1]='\0';
        printf("\n");
    }

    for(int i = 0; i < 3; i++){
        printf("\n\nInfos da %dª pessoa:", i+1);
        printf("\nSeu Nome: %s", nome[i]);
        printf("\nTamanho do seu nome: %d", strlen(nome[i]));
    }

    printf("\n\n");

    system("pause");
    return EXIT_SUCCESS;
}
