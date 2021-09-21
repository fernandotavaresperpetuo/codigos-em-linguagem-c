#include<stdio.h>

struct CadastroAluno{
	char nome[51];
	float nota[4];
};
struct CadastroAluno cadastro[3];

int i,j;

void EntradaDados(){
	for(j=0; j<3; j++){
	   printf("Digite o nome do aluno %d: ",j+1);
	   fflush(stdin);
	   fgets(cadastro[j].nome,51,stdin);
	   for(i=0; i<4; i++){
          printf("Digite a %d nota: ",i+1);
		  scanf("%f",&cadastro[j].nota[i]);
	    }	
	}
}

void Saida(){
	for(j=0; j<3; j++){
	   printf("Nome: %s ",cadastro[j].nome);
	   printf("\nNotas:\n");
	   for(i=0; i<4; i++){
          printf("%.1f\n",cadastro[j].nota[i]);
	   }		
	}
}

int main(){
 EntradaDados();
 Saida(); 
 return 0;	
}