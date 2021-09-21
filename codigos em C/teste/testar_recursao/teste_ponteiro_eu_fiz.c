#include <stdio.h>
#include <conio.h>

int main(void)
{
	//valor � a vari�vel que
	//ser� apontada pelo ponteiro

	int valor = 27;

	//declara��o de vari�vel ponteiro
	int *ptr;



    //A variavel do tipo inteiro chamada "valor", foi declarada e atribuida ao mesmo tempo, com o valor de 27,
    //Isso foi feito assim: int valor = 27;

    //Depois: a variavel do tipo inteiro ponteiro chamada "ptr", foi declarada assim: int *ptr;
    //Depois: Foi atribuido o endere�o da variavel "valor" para a  variavel ponteiro "ptr" com o numero da memoria,
    //Onde a variavel "valor" esta em numero em decimal;
    //Isso fez com que a variavel "ptr" aponta-se para o endere�o da variavel "valor" na memoria do computador;
    //Isso foi feito assim: ptr = 2686740;

    //A variavel do tipo inteiro ponteiro chamada "ptro", foi declarada e atribuida ao mesmo tempo,
    //o valor atribuido foi o endere�o da variavel "ptr" para a variavel ponteiro "ptro";
    //Com o proprio nome da variavel "ptr", isso foi feito assim: int *ptro = ptr;

    //Esse experimento feito de varias formas possiveis provou, que pode-se atribuir valores,
    //As variaveis ponteiro de diversas formas, e tambem provou que,
    //D� pra variaveis Tipo Ponteiro apontar para um mesmo endere�o
    //Mesmo a propria ou proprias variaveis, sendo atribuidas como valores de endere�o,
    //A outras do mesmo Tipo, ou seja Tipo Ponteiro.



    //atribuindo o endere�o da vari�vel valor ao ponteiro
	ptr = 2686740;
	int *ptro = ptr;


	printf ("Endere�o da variavel valor: %d \n", &valor);
	printf ("Conteudo da variavel valor: %d\n", valor);
	printf ("Conteudo da variavel ponteiro ptr: %d\n", *ptr);
	printf ("Conteudo da variavel ponteiro ptr: %d\n", *ptro);

	getch();
    return 0;
}
