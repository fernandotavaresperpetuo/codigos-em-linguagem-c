#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <ctype.h>

int main(){
    char nome1[100];
    char nome2[100];

    /*
    printf("Digite seu nome: ");
    scanf("%s", &nome1);
    setbuf(stdin, NULL);

    printf("Nome: %s \n\n", nome1);

    */

    printf("Digite seu nome:\t");
    gets(nome1);

    setbuf(stdin, NULL);

    printf("Digite seu sobrenome:\t");
    gets(nome2);

    /*

    printf("\nDigite seu nome:\t");
    gets(nome2);

    //printf("Nome: -%s- \n\n", nome1);

    printf("Digite seu nome: ");
    gets(nome);

    printf("Nome: -%s- \n\n", nome);


    if(strcmp(nome1,nome2)==0){
        printf("\n\nNomes Iguais!\n\n\n\n");
    }
        else{
                printf("\n\nNomes Diferentes!\n\n\n\n");
    }

    printf("\nprimeiro nome: %s\n\n\t", nome1);
    printf("\nsegundo nome: %s\n\n\t", nome2);


    strcpy(nome2, nome1);


    printf("\nprimeiro nome: %s\n\n\t", nome1);
    printf("\nsegundo nome: %s\n\n\t", nome2);


    */

    //printf("\nSeu Nome tem %d caracteres\n\n", strlen(nome1));

    strcat(nome1, " ");
    strcat(nome1, nome2);
    printf("\nSeu Nome eh : %s\n\n", nome1);


    system("pause");
    return 0;
}
