#include<stdio.h>
#include<stdlib.h>

int *inserir(int n);
void escreveVetor(FILE *pfile, int n, int *v);

int main(){
	FILE *fw;
	int n, *v;
	fw= fopen("vetor.txt", "w");
	printf("inserir dimensão do vetor\n");
	scanf("%d", &n);
	
	v= inserir(n);
	escreveVetor( fw, n, v);
	
	fclose(fw);
	free(v);
	return 0;
}
int *inserir(int n){
	int i;
	int *vet=NULL;
	vet= (int *) calloc( n, sizeof(int));
	printf(" Inserir %d numeros \n", n);
	for( i=0; i<n; i++){
		scanf("%d", &vet[i]);
	}
	return vet;
}
void escreveVetor(FILE *pfile, int n, int *v){
	int i;
	fprintf(pfile, "dimesao= %d \n", n);
	for(i=0; i<n; i++){
		fprintf(pfile, "%d ", v[i]);
	}
}






