#include <stdio.h>
#include <stdlib.h>

#define formula  res=peso/altura*altura;

int main()
{
    float peso, altura, res;

    printf("Qual eh seu peso e qual a sua altura");
    scanf("%f %f", &peso, &altura);

    formula;
    if(res < 20)
        printf("abaixo do peso");
        if(20 > res < 25 )
        printf("peso normal");
        if(25 > res < 30 )
        printf("sobrepeso");
        if(30 > res < 40)
        printf("obeso");
        if(res > 39)
        printf("Obeso Morbido");

    return 0;
}
