#include<stdio.h>

void referencia(){
	printf( "3) Faça um programa que receba dois numeros e execute as operacoes\n"
			"listadas a seguir de acordo com a escolha do usuario:\n\n");
	printf( "Escolha       Operacao\n"
			" 1            Media entre os numeros digitados\n"
			" 2            Diferenca entre os numeros\n"
			" 3            Produto entre os numeros digitados\n"
			" 4            Divisao do primeiro pelo segundo\n\n");
}

int main(){
	char ch;
	float num1, num2;
	referencia();
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	getchar();
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	getchar();
	printf("Digite a operacao: ");
	scanf("%c", &ch);
	getchar();
	
	switch(ch){
		case '1': {
			printf("Media entre os valores e: %.2f", (num1+num2)/2);
			break;
		}
		case '2': {
			printf("Diferenca entre os valores e: %.2f", (num1-num2));
			break;
		}
		case '3': {
			printf("Produto entre os valores e: %.2f", (num1*num2));
			break;
		}
		case '4': {
			printf("Divisao entre os valores e: %.2f", (num1/num2));
			break;
		}
		default: {
			printf("Operacao nao existe.");
			break;
		}
	}
	return 0;
}
