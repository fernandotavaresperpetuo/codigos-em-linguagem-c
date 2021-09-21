#include <stdio.h>



int main(void) {

    float notas[5] = {0};
    float total = 0;
    float media = 0;
    int i = 0;



    printf("Insira 5 notas:\n");

    for (i = 0; i < 5; ++i)
        scanf("%f", &notas[i]);

    for (i = 0; i < 5; ++i)
        total += notas[i];


    media += total / 5;

    printf("A media do aluno eh %f", media);

    return 0;
}
