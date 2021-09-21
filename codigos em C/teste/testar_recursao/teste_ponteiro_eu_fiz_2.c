#include <stdio.h>
#include <conio.h>

int main(void)
{
	int valor = 27;
	int *ptr = 0x28ff18;


	printf ("Endereço da variavel -valor- em decimal eh: %d \n\n", &valor);
	printf ("Conteudo da variavel -valor- em decimal eh: %d\n\n", valor);

	printf ("Endereco da variavel ponteiro -ptr- em decimal eh: %d\n\n", ptr);
	printf ("Conteudo da variavel ponteiro -ptr- em decimal eh:  : %d\n\n", *ptr);

	printf ("Endereço da variavel -valor- em hexadecimal eh: %x \n\n", &valor);
	printf ("Conteudo da variavel -valor- em hexadecimal eh: %x\n\n", valor);

	printf ("Endereco da variavel ponteiro -ptr- em hexadecimal eh: %x\n\n", ptr);
	printf ("Conteudo da variavel ponteiro -ptr- em hexadecimal eh:  : %x\n\n", *ptr);

	getch();
    return 0;
}

