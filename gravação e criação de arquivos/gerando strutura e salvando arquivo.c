#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i;
typedef struct Aluno{
	char   nome[100];
	int    idade;
	double nota1, nota2;
}ALU;

void inserir(ALU *alu, int n);
void escreve(FILE *pfile, ALU *alu, int n);

int main(){
	FILE *fw;
	ALU *alu= NULL;
	int n;
	printf("Inserir numero dos alunos ");
	scanf("%d", &n);
	//scanf("%d %*c", &n);
	alu= (ALU *)calloc(n, sizeof(ALU));
	fw= fopen("aluno.txt", "w");
	inserir(alu, n);
	escreve(fw, alu, n);
	fclose(fw);
	free(alu);
    return 0;	
}
void inserir(ALU *alu, int n){
	for(i=0; i<n; i++){
		fflush(stdin);
		printf("Cadastro aluno %d \n", i+1);
		printf("Inserir nome: ");
		fgets(alu[i].nome, 100, stdin);
		printf("Inserir idade: ");
		scanf("%d", &alu[i].idade);
		printf("Inserir duas notas: ");
		scanf("%lf %lf", &alu[i].nota1, &alu[i].nota2);
		//scanf("%lf %lf %*c", &alu[i].nota1, &alu[i].nota2);
		
	}	
}
void escreve(FILE *pfile, ALU *alu, int n){
	int pos;
	for(i=0; i<n; i++){
		pos= strlen(alu[i].nome)-1;
		alu[i].nome[pos]= '\0';
		fprintf(pfile, "%s\t%d\t%lf\t%lf\t%lf\n", alu[i].nome, alu[i].idade, alu[i].nota1,
												alu[i].nota2, (alu[i].nota1+alu[i].nota2)/2);
	}
}
