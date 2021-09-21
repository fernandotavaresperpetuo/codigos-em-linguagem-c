#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	if(fp=fopen("teste.txt", "r")){
		fp=fopen("Teste.txt","w");
		for (i=0; i<100; i++)
			fprintf(arq,"%s %d %d %d\n",vazio,0,0,0);
		fclose(arq);
		arq=fopen("rank.txt","r");
	}
}
