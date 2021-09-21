#include<stdio.h>

struct CadastroAluno{
	char nome[51];
	float nota[4];
};
struct CadastroAluno cadastro;

int i;

void EntradaDados(){
	printf("Digite o nome: ");
	fgets(cadastro.nome,51,stdin);
	for(i=0; i<4; i++){
		printf("Digite a %d nota: ",i+1);
		scanf("%f",&cadastro.nota[i]);
	}
}

void Saida(){
	printf("Nome: %s ",cadastro.nome);
	printf("\nNotas:\n");
	for(i=0; i<4; i++){
		printf("%.1f\n",cadastro.nota[i]);
	}
	
}

int main(){
 EntradaDados();
 Saida(); 
 return 0;	
}