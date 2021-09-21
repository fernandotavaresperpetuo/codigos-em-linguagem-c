#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i;

struct endereco{
	char rua[31];
	int  numero;
	int  quadra;
	int  lote;
	char bairro[21];
	char cidade[31];
	char estado[3];
};
struct cadastro {
	char   nome[31];
	int    telefone;
	struct endereco endereco;
};
struct cadastro cads[10];
void buscaNome();
void entrada();
void saida();

int main(){
	char opcao;
	while(1>0){
		printf( "menu de opcoes:\n\n"
				"a) Cadastrar os dez registros.\n"
				"b)Pesquisar um registro de cada vez pelo campo nome (usar o metodo sequencial).\n"
				"c) Apresentar todos os registros.\n"
				"d) Sair do programa de cadastro.\n");
		printf("Digite sua opcao: ");
		fflush(stdin);
		scanf("%c", &opcao); getchar();
		switch(opcao){
			case 'a': entrada(); break;
			case 'b': buscaNome(); break;
			case 'c': saida(); break;
			case 'd': exit(1);
			default: printf("Opcao inexistente\n\n"); break;
		}
	}
	return 0;
}
void entrada(){
	printf("Registrar pessoas.\nentre com os valores pedidos\n\n");
	for(i=0;i<10;i++){
		fflush(stdin);
		printf("Digite o nome: ");
		fgets(cads[i].nome, 31, stdin);
		printf("Digite o telefone: ");
		scanf("%d", &cads[i].telefone); getchar();
		printf("Digite o endereco\n");
		printf("Digite .........rua: ");
		fgets(cads[i].endereco.rua, 31, stdin);
		printf("Digite ......numero: ");
		scanf("%d", &cads[i].endereco.numero); getchar();
		printf("Digite ......quadra: ");
		scanf("%d", &cads[i].endereco.quadra); getchar();
		printf("Digite ........lote: ");
		scanf("%d", &cads[i].endereco.lote); getchar();
		printf("Digite ......bairro: ");
		fgets(cads[i].endereco.bairro, 21, stdin);
		printf("Digite ......cidade: ");
		fgets(cads[i].endereco.cidade, 31, stdin);
		printf("Digite ....sigla.UF: ");
		fgets(cads[i].endereco.estado, 3, stdin);
	}
}
void buscaNome(){
	int vf=0;
	char chama[31];
	fflush(stdin);
	printf("Solicitou buscar nome\n");
	printf("Digite o nome: ");
	fgets(chama, 31, stdin);
	for(i=0;i<10;i++){
		if(strcmp(chama, cads[i].nome)==0){
			printf("......Nome: %s", cads[i].nome);
			printf("..Telefone: %i\n", cads[i].telefone);
			printf("..Endereco: Rua %s \t\tN. %d Q. %d L. %d\n", cads[i].endereco.rua, cads[i].endereco.numero,
					cads[i].endereco.quadra, cads[i].endereco.lote);
			printf("....Bairro: %s", cads[i].endereco.bairro);
			printf("....Cidade: %s", cads[i].endereco.cidade);
			printf("..Sigla.UF: %s\n", cads[i].endereco.estado);
			vf++;
		}
	}
	if(vf==0) printf("Cadastro nao existente\n");
}
void saida(){
	for(i=0;i<10;i++){
		printf("......Nome: %s",   cads[i].nome);
		printf("..Telefone: %i\n",   cads[i].telefone);
		printf("..Endereco: Rua %s \t\tN. %d Q. %d L. %d\n", cads[i].endereco.rua, cads[i].endereco.numero,
				cads[i].endereco.quadra, cads[i].endereco.lote);
		printf("....Bairro: %s",   cads[i].endereco.bairro);
		printf("....Cidade: %s",   cads[i].endereco.cidade);
		printf("..Sigla.UF: %s\n", cads[i].endereco.estado);
	}
}
