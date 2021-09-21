#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void referencia(){
	printf( "Menu\n"
			"1- Decimal para hexadecimaal\n"
			"2- hexadecimal para decimal\n"
			"3- decimal para octal\n"
			"4- octal para decimal\n"
			"5- Termina o programa\n\n");
}

int main(){
	int i;
	char ch;
	referencia();
	printf("O deseja fazer: ");
	scanf("%c", &ch);
	getchar();
	switch(ch){
		case '1': {
			printf("Entre com valor decimal:");
			scanf("%d", &i);
			printf("o valor hexadecimal e: %x", i);
			break;
		}
		case '2': {
			printf("Entre com valor hexadecimal:");
			scanf("%x", &i);
			printf("o valor decimal e: %d", i);
			break;
		}
		case '3': {
			printf("Entre com valor decimal:");
			scanf("%d", &i);
			printf("o valor octal e: %o", i);
			break;
		}
		case '4': {
			printf("Entre com valor octal:");
			scanf("%o", &i);
			printf("o valor decimal e: %d", i);
			break;
		}
		case '5': {
			exit(0);
		}
		default: {
			printf("Codigo inexistente");
			break;
		}
	}
	return 0;
}
