#include <stdio.h>

int main(){
int soma, quantidade, idade;

float media;

soma = 0;
quantidade = 0;

do {
     printf("Idade da pessoa %d. (tecle -1 se quiser encerrar).\n",
               quantidade+1);
     scanf("%d", &idade);

     if (idade >=0)
     {
       soma = soma + idade;
       quantidade = quantidade + 1;
     }
   } while (idade != -1);

// Faz o calculo da media de idade

if (quantidade > 0)
{
   media = (float) soma / quantidade;
   printf("A media de idade das %d pessoas eh: %5.2f", quantidade,
            media);
}
}
