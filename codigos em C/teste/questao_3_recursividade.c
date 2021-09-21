#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int soma = 0;

int main(){
    int x, y;

    printf("digite o inicio da soma: \t");
    scanf("%d", &x);

    printf("digite o fim da soma: \t\t");
    scanf("%d", &y);

    int inicio = x;
    int fim = y;
    somaa(inicio, fim);

    printf("\n\nO resultado da soma dos elementos eh: %d\n", soma);

    //printf("\n\nO resultado da soma do elementos eh: %d\n", z);

    printf("\n\n");
    system("pause");
    return 0;
}

int somaa(int inicio, int fim){

    //printf("\n\nO valor de inicio agora eh eh: %d\n", inicio);

    if(inicio <= fim){
        //printf("inicio no comeco da funcao eh: %d\n", inicio);
        //printf("%d\n", inicio);
        soma = soma + inicio;
        //printf("soma mais inicio eh: %d\n", soma);
        somaa(inicio+1, fim);
    }

    //printf("%d\n", inicio);
    //printf("\nA soma eh: %d", soma);
    return 0;
}
