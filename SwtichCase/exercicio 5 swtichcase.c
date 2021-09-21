#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define PI 3.14159265

void referencia(){
	printf( "5. Criar um programa em Linguagem C atraves do menu a seguir:\n\n");
	printf( "Menu\n"
			"1- Entra com uma frase e armazena em outra variavel a frase invertida e mostre\n"
			"2- Entra com um numero e seu numero de digitos e mostre invertido\n"
			"3- Calcule e mostre a tangente de um angulo em graus\n"
			"4- Termina o programa\n\n");
}

int main(){
	int i;
	char ch, str[51];
	referencia();
	printf("O deseja fazer: ");
	scanf("%c", &ch);
	getchar();
	switch(ch){
		case '1': {
			printf("Escreca uma frase: ");
			fgets(str, sizeof(str), stdin);
			for(i=strlen(str); i>-1; i--){
				printf("%c", str[i]);
			}
			break;
		}
		case '2': {
			printf("Escreva um numero: ");
			fgets(str, sizeof(str), stdin);
			for(i=strlen(str); i>-1; i--){
				printf("%c", str[i]);
			}
			break;
		}
		case '3': {
			double num, result;
			printf("Digite o valor da tangente: ");
			scanf("%lf", &num);
			result= tan(num)*180/PI;
			printf("Valor da tangente: %.2lf graus", result);
			break;
		}
		case '4': {
			exit(0);
		}
		default: {
			printf("Codigo inexistente");
			break;
		}
	}
	return 0;
}
