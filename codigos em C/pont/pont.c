#include <stdio.h>
#include <stdlib.h>

int main(){

    int b = 20;

    int *c = &b;

    int *resultado = *&c;

    int *d = 0x28ff10; //compilador reconhecer endereço na memoria em hexadecimal usa-se um 0x antes do numero alfanumerico.

    int *e = 2686736;



    //int *resultado = &*c;

    //printf("%d\n\n", resultado);
    //printf("%x\n\n", resultado);
    //printf("%d\n\n", *resultado);

    //printf("valor que esta armazenado no ponteiro e eh: %d", *e);

    printf("valor que esta armazenado no ponteiro d eh: %d\n\n\n", *d);

    printf("valor que esta armazenado no ponteiro e eh: %d\n\n", *e);

    printf("\n\nvalor que esta na variavel tipo ponteiro *resultado eh:%d\n\n", *resultado);

    printf("\n\nNumero do local da variavel tipo ponteiro *resultado em inteiro eh:%d\n\n", resultado);

    printf("\n\nNumero do local da variavel tipo ponteiro *resultado em hexadecimal eh:%x\n\n", resultado);


    printf("\n\nvalor em inteiro armazenado no endereco da variavel tipo ponteiro *c,\nque recebe o valor da variavel b eh: %d\n\n", *c);

    printf("\n\nEndereco de memoria impresso em inteiro da variavel c eh: %d\n\n", c);

    printf("\n\nEndereco de memoria impresso em hexadecimal da variavel c eh: %x\n\n", c);

    printf("\n\nvalor que esta armazenado no ponteiro d eh: %d\n\n", *d);

    printf("\nvalor que esta armazenado no ponteiro e eh: %d\n\n", *e);




                                        //%x imprime um valor hexadecimal
                                        //imprime a posicao de memoria da vairiavel VALOR

    //printf("\n\nEndereco de memoria impresso em inteiro da variavel tipo ponteiro c eh: %d\n\n", c);
//    printf("\n\nvalor em inteiro armazenado no endereco do ponteiro d, que recebeu \no valor do endereço de memoria em hexadecimal 28ff18 eh: %d\n\n", *d);

//    printf("\n\nvalor armazenado no endereco do ponteiro da variavel c eh: %s\n\n", d);
/*
    int *resu;
    resu = 2293572;
    printf("%d\n\n", *resu);
    printf("%x\n\n", *resu);
    printf("%d\n\n", *resu);
    */

    //resultado =

   // int *i = 2686744;

	//printf("%d\n", i);



    //int *d = b//0x28ff18; // 0x seguido pelo numero hexadecimal,
    //faz com que o compilador interprete
    //o endereço de memoria recebido pelo compilador em hexadecimal

    //int *d = 28ff18;

    //char d[7] = "28ff18";

    //PontValor = &Valor;
    return 0;
}
