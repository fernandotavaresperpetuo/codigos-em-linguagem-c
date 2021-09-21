#include<stdio.h>
#include<stdlib.h>
#define t 5
int i, j;

int gonalPrinc(int mtz [][t]){
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(i==j) mtz[i][j]= mtz[i+j];
		}
	}
}
int gonalSec(int mtz [][t]){
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(i+j==4) mtz[i][j]= mtz[i==j];
		}
	}
}

int main(){
	int i, j, m[5][5];
	srand(time(NULL));
	for (i=0; i<5; i++){
		for(j=0; j<5; j++){
			m[i][j]= rand() % 100;
		}
	}
	for(i=0; i<5; i++){
		printf("\n");
		for(j=0; j<5; j++){
			printf("%d\t", m[i][j]);
		}
	}
	puts("\n");
	
	for(i=0; i<5; i++){
		printf("\n");
		for(j=0; j<5; j++){
			printf("%d\t", m[i][j]);
		}
	}
	return 0;
}

	

