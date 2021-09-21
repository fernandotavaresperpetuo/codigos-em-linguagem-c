#include <stdio.h>
#include <conio.h>

int main(void)
{
	//valor é a variável que
	//será apontada pelo ponteiro

	int valor = 27;

	//declaração de variável ponteiro
	int *ptr;



    //A variavel do tipo inteiro chamada "valor", foi declarada e atribuida ao mesmo tempo, com o valor de 27,
    //Isso foi feito assim: int valor = 27;

    //Depois: a variavel do tipo inteiro ponteiro chamada "ptr", foi declarada assim: int *ptr;
    //Depois: Foi atribuido o endereço da variavel "valor" para a  variavel ponteiro "ptr" com o numero da memoria,
    //Onde a variavel "valor" esta em numero em decimal;
    //Isso fez com que a variavel "ptr" aponta-se para o endereço da variavel "valor" na memoria do computador;
    //Isso foi feito assim: ptr = 2686740;

    //A variavel do tipo inteiro ponteiro chamada "ptro", foi declarada e atribuida ao mesmo tempo,
    //o valor atribuido foi o endereço da variavel "ptr" para a variavel ponteiro "ptro";
    //Com o proprio nome da variavel "ptr", isso foi feito assim: int *ptro = ptr;

    //Esse experimento feito de varias formas possiveis provou, que pode-se atribuir valores,
    //As variaveis ponteiro de diversas formas, e tambem provou que,
    //Dá pra variaveis Tipo Ponteiro apontar para um mesmo endereço
    //Mesmo a propria ou proprias variaveis, sendo atribuidas como valores de endereço,
    //A outras do mesmo Tipo, ou seja Tipo Ponteiro.



    //atribuindo o endereço da variável valor ao ponteiro
	ptr = 2686740;
	int *ptro = ptr;


	printf ("Endereço da variavel valor: %d \n", &valor);
	printf ("Conteudo da variavel valor: %d\n", valor);
	printf ("Conteudo da variavel ponteiro ptr: %d\n", *ptr);
	printf ("Conteudo da variavel ponteiro ptr: %d\n", *ptro);

	getch();
    return 0;
}
