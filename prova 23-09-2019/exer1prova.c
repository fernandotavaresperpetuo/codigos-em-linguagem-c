#include<stdio.h>

int verificaConsoante(char ch){
	int i, vef;
	char n[43]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z','\0'};

	for(i=0; i<43; i++){
		if(ch==n[i]){
			vef=1;
			break;
		} 
		else vef=0;
	}
	if (vef==1) return 1;
	else return 0;
}

int main(){
	char caract;
	printf("digite um caracter para verificar:");
	scanf("%c", &caract);
	printf("\n\no retorno e: %d", verificaConsoante(caract));	
	return 0;
}
