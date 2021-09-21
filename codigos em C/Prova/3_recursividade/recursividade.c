#include <stdio.h>
#include <stdlib.h>
/*
int imprime(int inicio, int limite){
    if(inicio<limite){
        printf("%d ", inicio);
        imprime(inicio+1, limite);
    }
}


*/

int soma;


int imprime(int inicio, int limite){

    if(inicio<limite){
            soma = soma + inicio;
            inicio+1;



            //printf("%d ", soma);
            //imprime(inicio, limite);

            //imprime(inicio, );


            //printf("%d ", inicio);
            //imprime(inicio+1, limite);
        //printf("%d", inicio);
        //inicio+1;
        //soma = soma + inicio;
        //imprime(inicio+1, limite);
    }
return soma;
}


int main(){
    int inicio, limite, i, somaa;

    i=0;
    somaa = soma;
    inicio=1;
    limite=3;

    printf("%d", somaa);
    //printf("\n\nImpressao RECURSIVA\n");
    //imprime(inicio, limite);{
    }


    //imprime();

    //printf("\n\nImpressao RECURSIVA\n");
    //imprime(inicio, limite, soma);



    /*
    printf("\n\nImpressao ITERATIVA\n");
    for(i=inicio;i<limite;i++){
        printf("%d ", i);
    }
    */

    //printf("\n\nImpressao RECURSIVA\n");
    //imprime(inicio, limite);
    //imprime(10,20);


    return 0;
}
