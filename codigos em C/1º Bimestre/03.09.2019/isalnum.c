#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A pesquisa esta aqui comentada no codigo:
// A fun��o isalnum decide se o argumento representa um
// caractere alfanum�rico (letra ou d�gito decimal).  Uso
// t�pico: if (isalnum (c)) ....
//int isalnum (int c);

int main (){


	char ch= '@';

	if(isalnum(ch)){
	printf("%c eh alfanumerico\n", ch);
	}else{
	printf("%c nao eh alfanumerico\n", ch);
	}


	getch();
	return 0;
}
