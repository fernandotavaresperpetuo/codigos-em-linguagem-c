#include <stdio.h>
#include <conio.h>

int main(void)
{
    int valor = 27;
	int *ptr = valor;


	printf ("Endereço da variavel valor: %d \n", &valor);
	printf ("Conteudo da variavel valor: %d\n", valor);
	printf ("Conteudo da variavel ponteiro ptr: %d\n", ptr);

	getch();
    return 0;
}

