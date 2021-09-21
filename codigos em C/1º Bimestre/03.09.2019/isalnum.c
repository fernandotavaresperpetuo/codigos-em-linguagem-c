#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A pesquisa esta aqui comentada no codigo:
// A função isalnum decide se o argumento representa um
// caractere alfanumérico (letra ou dígito decimal).  Uso
// típico: if (isalnum (c)) ....
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
