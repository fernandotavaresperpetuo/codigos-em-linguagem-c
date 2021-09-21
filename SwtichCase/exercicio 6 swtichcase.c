#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define PI 3.14159265

void referencia(){
	printf( "6. Criar um programa em Linguagem C que funcione atraves do menu a seguir:\n\n");
	printf( "Menu\n"
			"1- Imprime o nome que tiver o maior numero de caracteres entre 20 nomes\n"
			"2- Brinca com a palavra\n"
			"3- Calcula e imprime a raiz a quarta de um numero\n"
			"4- Termina o algoritmo\n\n");
}

int main(){
	int i, j;
	char ch, str[51], nomes[51];
	referencia();
	printf("O deseja fazer: ");
	scanf("%c", &ch);
	getchar();
	switch(ch){
		case '1': {
			for(i=0; i<20; i++){
				printf("Escreca 5 nomes: ");
				fgets(nomes, sizeof(nomes), stdin);
				if(strlen(nomes)>strlen(str)) strcpy(str, nomes);
			}
			for(i=0; i<strlen(str); i++){
				printf("%c", str[i]);
			}
			break;
		}
		case '2': {
			int cont=1;
			printf("Escreva uma palavra: ");
			fgets(str, sizeof(str), stdin);
			while(cont!=strlen(str)){
				for(i=0; i<cont; i++){
					printf("%c", str[i]);
				}
				cont++;
				printf("\n");
			}
			break;
		}
		case '3': {
			double num, result;
			printf("Digite o valor da extracao: ");
			scanf("%lf", &num);
			result= pow(num, (double)1/4);
			printf("Raiz quarta de %lf: %.2lf", num, result);
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
