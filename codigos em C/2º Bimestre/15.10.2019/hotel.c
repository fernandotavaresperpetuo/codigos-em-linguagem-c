# include <stdio.h>
#include <string.h>

struct Cadastra_quartos{
int numero[50];
char nome[50],quarto[50],leito[50];
};

struct Cadastra_quartos cad;

void Cadastra_quartos(){
	for(i=0; i<50; i++){
		printf("Digite o cpf do cliente %i: ",i+1);
		scanf("%i",&cad[i].Cadastra_quartos);
		printf("Nome do cliente: ");
		fflush(stdin);
		fgets(cad[i].nome, 51, stdin);
	    for(j=0; j<50; j++){
			printf("Digite o quarto do cliente %i:",j+1);
			scanf("%f",&cad[i].quarto[j]);
		}
	}
}

void Lista_todos_os_quartos(){
	for(i=0; i<50; i++){
		printf("Numero do cpf %i: ",cad[i].Cadastra_quartos);
		printf("Nome do cliente %s: ",cad[i].nome);
		printf("quarto\n");
	    for(j=0; j<50; j++){
			printf("%.1f\n",cad[i].quarto[j]);
		}
	}
}

void Lista_quartos_ocupados(){
	for(i=0; i<50; i++){
		printf("Numero do cliente %i: ",cad[i].Cadastra_quartos);
	    for(j=0; j<50; j++){
			printf("%.1f\n",cad[i].quarto[j]);
		}
	}
}
void Aluguel_reserva_quarto(){
	for(i=0; i<50; i++){
		printf("Numero do cliente %i: ",cad[i].Cadastra_quartos);
	    for(j=0; j<3; j++){
			printf("%.1f\n",cad[i].quarto[j]);
		}
	}
}
void Entra_despesas_extras(){
	for(i=0; i<50; i++){
		printf("Numero do cliente %i: ",cad[i].Cadastra_quartos);
	    for(j=0; j<50; j++){
			printf("%.1f\n",cad[i].numero[j]);
		}
	}
}
void Calcula_despesa_do_quarto(){
	for(i=0; i<50; i++){
		printf("Numero do cliente %i: ",cad[i].Cadastra_quartos);
	    for(j=0; j<50; j++){
			printf("%.1f\n",cad[i].numero[j]);
		}
	}
}
/*
50 quartos

Número de leitos por quarto;
· Situação: alugado, livre ou reservado;
· Aluguel do quarto com data de entrada e de saída e número de diárias;
· Despesas dentro do hotel;
· Valor a ser pago;
· Mostrar todos os quartos com a situação de cada um;
· Mostrar os quartos livres.

1- Cadastra quartos
2- Lista todos os quartos
3- Lista quartos ocupados
4- Aluguel/reserva quarto
5- Entra despesas extras
6- Calcula despesa do quarto
7- Sai

· Usar matriz heterogênea
· Criar menu
· Implementar pelo menos uma função com parâmetros
· Usar o comando switch .. case
*/



int main(){

	int op=0;

	while(op!=7){
		menu();
		printf("Digite o que deseja fazer: ");
		scanf("%i",&op);
		switch(op){
			case 1: Cadastra_quartos();  break;
			case 2: Lista_todos_os_quartos(); break;
			case 3: Lista_quartos_ocupados(); break;
			case 4: Aluguel_reserva_quarto(); break;
			case 5: Entra_despesas_extras(); break;
			case 6: Calcula_despesa_do_quarto(); break;
			case 7: Sai(0); break;
			default: printf("Opcao invalida!\n"); break;
		}

	}

	return 0;
}
