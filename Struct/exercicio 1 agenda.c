#include<stdio.h>
#define tam 2

int i;

struct agenda {
	char nome[31];
	char rua[21];
	int num;
	char cidade[31];
};
void entrada(){
	struct agenda agenda[tam];
	printf("Registrar pessoas.\nentre com os valores pedidos\n\n");
	for(i=0;i<tam;i++){
		printf("Digite o nome: ");
		scanf("%[^\n]s", agenda[i].nome);
		fflush(stdin);
		//fgets(agenda[i].nome, 31, stdin);
		printf("Digite a rua: ");
		fgets(agenda[i].rua, 21, stdin);
		printf("Digite o numero: ");
		scanf("%d", &agenda[i].num);
		getchar();
		printf("Digite a cidade: ");
		fgets(agenda[i].cidade, 31, stdin);
	}
}
void saida(){
	struct agenda agenda[tam];
	for(i=0;i<tam;i++){
		printf("    nome: %s\n", agenda[i].nome);
		printf("     rua: %s\n", agenda[i].rua);
		printf("  numero: %i\n", agenda[i].num);
		printf("  cidade: %s\n", agenda[i].cidade);
		puts("\n");
	}
}

int main(){
	entrada();
	saida();
	
	return 0;
}
