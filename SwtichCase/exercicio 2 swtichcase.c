#include<stdio.h>

void referencia(){
	printf( "2) Faça um programa que receba duas notas, calcule e mostre a média\n"
			"aritmética e mensagem que está na tabela a seguir:\n\n");
	printf( "Media aritmetica      Mensagem\n"
			" 0,0 - 4,0            Reprovado\n"
			" 4,1 - 7,0            Exame\n"
			" 7,1 - 10,0           Aprovado\n\n");
}
char media(float n1, float n2){
	int md;
	md= (n1+n2)/2;
	if(md<4) return 'r';
	else if(md<7) return 'e';
	else return 'a';
}
int main(){
	char ch;
	float nota1, nota2;
	referencia();
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	ch= media(nota1, nota2);
	switch(ch){
		case 'r': {
			printf("Voce foi Reprovado.");
			break;
		}
		case 'e': {
			printf("Voce esta de recuperacao.");
			break;
		}
		case 'a': {
			printf("Voce foi Aprovado.");
			break;
		}
	}
	
}
