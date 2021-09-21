#include <stdio.h>
#include <stdlib.h>

void main(void){
	FILE *e;
	int i, insc, ptos;
	char gab[6], resp[6];
	if( (e=fopen("cand.txt","r"))==NULL ) {
	printf("Arquivo não pôde ser aberto\n");
	exit(1);
	}
	printf("\nGabarito? ");
	gets(gab);
	while( 1 ) {
		fscanf(e, "%d %s", &insc, resp);
		if( feof(e) ) break;
		for(ptos=i=0; i<5; i++)
			if( resp[i]==gab[i] ) ptos++;
		printf("\n%d %d",insc,ptos);
	}
	fclose(e);
} 
