#include<stdio.h>
int i;
/* com numeros aleatorios fica dificil verificar adicionei retorno 0 para não receber lixo
mais funciona */

int vetorZ(int v[], int u[]){
	if(v[i]==u[i]) return v[i];
	else return 0;
}

int main(){
	int vetX[10], vetY[10], vetZ[10];
	for(i=0; i<10; i++){
		vetX[i]= rand() %50;
	}
	for(i=0; i<10; i++){
		vetY[i]= rand() %50;
	}
	for(i=0; i<10; i++){
		vetZ[i]= vetorZ(vetX, vetY);
	}
	for(i=0; i<10; i++){
		printf("%d", vetZ[i]);
	}
	
	return 0;
}

