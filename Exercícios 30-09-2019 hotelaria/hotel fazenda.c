#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define total 50
#define v "vazio    "
#define o "ocupado  "
#define r "reservado"

int i, quantidade;

struct quarto{
	char nome[41];
};

struct hotel{
	int    qtPessoas;
	char   status[10];
	float  despezaEx;
	float  despezaQt;
	struct quarto quarto[6];
};
struct hotel ht[total];
void  pausa();
void  cadastro();
void  despExtra();
void  despezaTotal();
void  mostraTodosQuarto();
void  reservaQuarto();
void  mostraQuartoOcupadoReservado();
float despezaGeral(float x, float y);

int main(){
	char op;
	// inicializando despezaExtra e despezaQuarto
	for(i=0; i<total; i++){
		ht[i].despezaEx=0;
		ht[i].despezaQt=0;
	}
	// inicializando status dos quartos todos vazios
	for(i=0; i<total; i++){
		strcpy(ht[i].status, v);
	}
	while(1>0){
		printf( "\t\t\tHotel-Fazenda Sucesso\n\n"
				" Menu operacional.\n\n"
				" 1 %c Cadastra quartos\n"
				" 2 %c Lista todos os quartos\n"
				" 3 %c Lista quartos ocupados e reservados\n"
				" 4 %c Aluguel/reserva quarto\n"
				" 5 %c Entra despesas extras\n"
				" 6 %c Calcula despesa do quarto\n"
				" 7 %c Sair programa\n\n", 175, 175, 175, 175, 175, 175, 175);
		scanf("%c", &op); getchar();
		switch(op){
			case '1': cadastro(); break;
			case '2': mostraTodosQuarto(); break;
			case '3': mostraQuartoOcupadoReservado(); break;
			case '4': reservaQuarto(); break;
			case '5': despExtra() ;break;
			case '6': despezaTotal(); break;
			case '7': exit(1); break;
			default: printf(" Operacao inexistente"); break;
		}
	}	
	return 0;
}
void cadastro(){
	int a=1, qrt=0;
	printf("Custo do quarto R%c 300,00.\n", 36);
	fflush(stdin);
	while(a>0){
		printf("Escolha o quarto a ser ocupado: ");
		scanf("%d", &qrt); getchar();
		if(qrt<1 || qrt>50) printf("Este numero de quarto nao existe");
		else if(strcmp(ht[qrt-1].status, o)==0) printf("Este quarto ja esta ocupado\n");
		else if(strcmp(ht[qrt-1].status, r)==0) printf("Este quarto ja esta reservado\n");
		else {
			printf(" Informe a quantidade de pessoas no quarto: ");
			scanf("%i", &quantidade); getchar();
			ht[qrt-1].qtPessoas= quantidade;
			for(i=0; i<ht[qrt-1].qtPessoas; i++){
				printf(" Informe o nome das no quarto: ");
				printf("\n Nome %i%c pessoa: ", i+1, 167);
				fgets(ht[qrt-1].quarto[i].nome, 41, stdin);
			}
			strcpy(ht[qrt-1].status, o);
			ht[qrt-1].despezaQt += 300;
			a=-1;
		}
	}
	pausa();
}
void mostraTodosQuarto(){
	for(i=0; i<total; i++){
		if((i+1)%3==0) printf("Quarto %02d %c %s\n", i+1, 175, ht[i].status);
		else printf("Quarto %02d %c %s\t", i+1, 175, ht[i].status);
	}
	pausa();
}
void mostraQuartoOcupadoReservado(){
	for(i=0; i<total; i++){
		if(strcmp(ht[i].status, o)==0) printf("Quarto %02d %c %s\n", i+1, 175, ht[i].status);
		else if(strcmp(ht[i].status, r)==0) printf("Quarto %02d %c %s\n", i+1, 175, ht[i].status);
	}
	pausa();
}
void reservaQuarto(){
	int a=1, resv=0;
	printf("Reserva custa R%c 200,00.\n", 36);
	fflush(stdin);
	while(a>0){
		printf("Escolha o quarto a ser reservado: ");
		scanf("%d", &resv); getchar();
		if(resv<1 || resv>50) printf("Este numero de quarto nao existe");
		else if(strcmp(ht[resv-1].status, o)==0) printf("Este quarto ja esta ocupado\n");
		else if(strcmp(ht[resv-1].status, r)==0) printf("Este quarto ja esta reservado\n");
		else {
			strcpy(ht[resv-1].status, r);
			ht[resv-1].despezaQt += 200;
			a=-1;
		}
	}
	pausa();
}
void despExtra(){
	int a=99, quart=0;
	float valor=0;
	printf("Adicione despeza extra ao quarto\n");
	fflush(stdin);
	while(a>0){
		printf("\t\tNumero do quarto: ");
		scanf("%d", &quart); getchar();
		if(quart<1 || quart>50) printf("Este numero de quarto nao existe\n");
		else {
			printf("Digite o valor a ser adicionado: ");
			scanf("%f", &valor); getchar();
			ht[quart-1].despezaEx += valor;
			a=-99;
		}
	}
	pausa();
}
float despezaGeral(float x, float y){
	return x+y;
}
void despezaTotal(){
	int a, qt, k=1;
	printf( " Digite 1 %c escolher um quarto especifico.\n"
			" Digite 2 %c mostrar todos.\n", 175, 175);
	fflush(stdin);
	while(k>0){
		scanf("%i", &a); getchar();
		switch(a){
			case 1:{
				printf("Digite o numero do quarto: ");
				scanf("%d", &qt); getchar();
				printf("Despeza do    quarto %02i %c %.2f\n", qt, 175, ht[qt-1].despezaQt);
				printf("Despeza extra quarto %02i %c %.2f\n", qt, 175, ht[qt-1].despezaEx);
				printf("Despeza total quarto %02i %c %.2f", qt, 175, despezaGeral(ht[qt-1].despezaQt,
																				ht[qt-1].despezaEx));
				k=-1;
				break;
			}
			case 2:{
				for(i=0; i<total; i++){
					printf("Despeza do    quarto %02i %c %.2f\n", i+1, 175, ht[i].despezaQt);
					printf("Despeza extra quarto %02i %c %.2f\n", i+1, 175, ht[i].despezaEx);
					printf("Despeza total quarto %02i %c %.2f", i+1, 175, despezaGeral(ht[i].despezaQt,
																					ht[i].despezaEx));
				}
				k=-1;
				break;
			}
			default: {
				printf(" ! sua escolha nao existe. Escolha 1 ou 2.\n"); 
				break;
			}
		}
	}
	pausa();
}
void pausa(){
	puts("\n");
	system("pause");
}
