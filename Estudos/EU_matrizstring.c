#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(void){

    system("CLS");
    setlocale(LC_ALL, "Portuguese");

    char str[3][3][50];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("STR %dx%d: ", i+1, j+1);
            fgets(str[i][j],50,stdin);
            str[i][j][strlen(str[i][j])-1]='\0';
            printf("\n");
        }
    }

    for(int i = 0; i < 3; i++){
        printf("|");
        for(int j = 0; j < 3; j++){
            printf(" %s |", str[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    system("pause");
    return EXIT_SUCCESS;
}
