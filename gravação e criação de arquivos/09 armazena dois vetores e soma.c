#include<stdio.h>
#include<stdlib.h>

#define tam 10
int i;

int *insere();
void escrev(FILE *pf, int *v);
int *le_arq(FILE *pf);
void grava();
void leitura();

int main(){
	//grava();
	leitura();
	return 0;
}
void grava(){
	FILE *fp;
	int n, *vetor1, *vetor2;
	fp= fopen("09_Exercicio.txt", "w");
	vetor1= insere();
	escrev(fp, vetor1);
	vetor2= insere();
	escrev(fp, vetor2);
	fclose(fp);
	free(vetor1);
	free(vetor2);
}
int *insere(){
	int *vet1= NULL;
	vet1= (int *)calloc( tam, sizeof(int));
	printf(" Inserir %d numeros \n", tam);
	for( i=0; i<tam; i++){
		scanf("%d", &vet1[i]);
	}
	return vet1;
}
void escrev(FILE *pf, int *v){
	for(i=0; i<tam; i++){
		fprintf(pf, "%3d ", v[i]);
	}
	fprintf(pf, "\n");
}
int *le_arq(FILE *pf){
	int *v;
	for(i=0; i<tam; i++){
		fscanf(pf, "%d ", &v[i]);
	}
	return v;
}
void leitura(){
	FILE *fp;
	int vetor1[tam], vetor2[tam];
	fp = fopen("09_Exercicio.txt", "r");
	for(i=0; i<tam; i++){
		fscanf(fp,"%d",&vetor1[i]);
	}
	for(i=0; i<tam; i++){
		printf("%3d", vetor1[i]);
	}
	for(i=10; i<20; i++){
		fscanf(fp,"%d",&vetor2[i]);
	}
	for(i=10; i<20; i++){
		printf("%3d", vetor2[i]);
	}
	fclose(fp);
}







