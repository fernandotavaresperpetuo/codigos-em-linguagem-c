#include<stdio.h>
#include<stdlib.h>

int **inserir(int lin, int col);
void escreveMatriz(FILE *pfile, int lin, int col, int **m);

int main(){
	FILE *fw;
	int lin, col, **m = NULL;
	fw = fopen("matrix.txt", "w");
	printf("inserir dimensao da matriz \n");
	scanf(" %d %d", &lin, &col);
	m= inserir( lin, col); //insere dados no vetor
	escreveMatriz( fw, lin, col, m);// escreve no arquivo
	fclose(fw);
	if(m[0] != NULL) free(m[0]);
	if(m != NULL) free(m);	
	return 0;
}
int **inserir(int lin, int col){
	int i, j, **mat = NULL;
	mat= (int **)calloc(lin*col, sizeof(int *));
	mat[0]= (int *)calloc(lin*col, sizeof(int));
	for(i=1; i<lin; i++){
		mat[i]= &mat[0][col*i];
	}
	printf(" inserir %d numeros\n", lin*col);
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			scanf("%d", &mat[i][j]);//formato matriz
			/* scanf("%d", *(mat+i)+j) formato ponteiro */
		}
	}
	return mat;
}
void escreveMatriz(FILE *pfile, int lin, int col, int **m){
	int i, j;
	fprintf(pfile, "%d %d\n", lin, col); //dimensão
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			fprintf(pfile, "%d", m[i][j]);
			fprintf(pfile, "\n");
		}
	}
}






