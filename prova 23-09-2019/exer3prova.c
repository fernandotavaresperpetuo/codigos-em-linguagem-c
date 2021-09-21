#include<stdio.h>


char C;
int I, j, i;
char S[40];

int str(char s[], int k, char c){
	for(i=I; i<j; i++){
		if(c==s[i]) return i;
	}
}

int main(){

	
	printf("letra a verificar:");
	scanf("%c", &C);
	printf("a partir da posicao, a verificar:");
	scanf("%d", &I);
	getchar();
	printf("Digite uma string:");
	fgets(S, sizeof(S), stdin);
	j=sizeof(S);
	printf("%d", str(S, j, C));
	
}
