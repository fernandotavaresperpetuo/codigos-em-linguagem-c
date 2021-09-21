#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define Qnota 3
#define tam   3

int i, j;

struct aluno{
	char   nome[31];
	int    matric;
	float  nota[3];
	float  md;
};
struct aluno alu[tam];
void entrada();
int menorMediaGeral();
int maiorMediaGeral();
int maiorPrimeiraNota();
bool aprovacao(float x);

int main(){
	char opcao;
	while(1>0){
		printf( "Representando os alunos de um determinado curso e suas respectivas notas\n\n"
				"a) Permita ao usuario entrar com os dados de 5 alunos.\n"
				"b) Encontre o aluno com maior nota da primeira prova.\n"
				"c) Encontre o aluno com maior media geral.\n"
				"d) Encontre o aluno com menor media geral.\n"
				"e) Para cada aluno diga se ele foi aprovado ou reprovado.\n\n"
				"   Entre com a opcao (s) para sair\n");
		printf(" Digite sua opcao: ");
		fflush(stdin);
		scanf("%c", &opcao); getchar();
		switch(opcao){
			case 'a': entrada(); break;
			case 'b': {
				i= maiorPrimeiraNota();
				printf(" Aluno com a maior primeira nota: %s\n\n", alu[i].nome);
				break;
			}
			case 'c': {
				i= maiorMediaGeral();
				printf(" Aluno com a maior media geral: %s\n\n", alu[i].nome);
				break;
			}
			case 'd': {
				i= menorMediaGeral();
				printf(" Aluno com a menor media geral: %s\n\n", alu[i].nome);
				break;
			}
			case 'e': {
				bool res;
				for(i=0; i<tam; i++){
					res= aprovacao(alu[i].md);
					if(res==true) printf(" O aluno %s foi aprovado\n", alu[i].nome);
					else printf(" O aluno %s foi reprovado\n", alu[i].nome);
				}
				break;
			}
			case 's': exit(1);
			 default: printf(" Opcao inexistente\n\n"); break;
		}
	}
	return 0;
}
void entrada() {
	for(i=0;i<tam;i++){
		fflush(stdin);
		printf("Digite o nome do %d%c aluno: ", i+1,167);
		fgets(alu[i].nome, 31, stdin);
		printf("Digite matricula:");
		scanf("%d", &alu[i].matric); getchar();
		float md=0;
		for(j=0; j<Qnota; j++){
			printf("Digite a %d%c nota aluno: ", j+1,167);
			scanf("%f", &alu[i].nota[j]);
			md += alu[i].nota[j];
		}
		alu[i].md= md/3;
	}
}
int maiorPrimeiraNota(){
	int k=99;
	float maiorNota= 0;
	for(i=0; i<tam; i++){
		if(alu[i].nota[0]>maiorNota) {
			maiorNota= alu[i].nota[0];
			k= i;
		}
	}
	return k;
}
int maiorMediaGeral(){
	int k=99;
	float maiorMedia= 0;
	for(i=0; i<tam; i++){
		if(alu[i].nota[0]>maiorMedia) {
			maiorMedia= alu[i].md;
			k= i;
		}
	}
	return k;
}
int menorMediaGeral(){
	int k=99;
	float menorMedia= 110;
	for(i=0; i<tam; i++){
		if(alu[i].md<menorMedia) {
			menorMedia= alu[i].md;
			k= i;
		}
	}
	return k;
}
bool aprovacao(float x){
	if (x>=6) return true;
	else return false;
}
