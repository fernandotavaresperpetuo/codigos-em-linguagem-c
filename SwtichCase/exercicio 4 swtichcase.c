#include<stdio.h>

void referencia(){
	printf( "4. O cardapio de uma casa de lanches e dado pela tabela abaixo:\n\n");
	printf( "Escolha      Produto              Preco unitario\n"
			" 100         Cachorro quente      R$ 1,70\n"
			" 101         Bauru simples        R$ 2,30\n"
			" 102         Bauru com ovo        R$ 2,60\n"
			" 103         Hamburguer           R$ 2,40\n"
			" 104         Cheeseburguer        R$ 2,50\n"
			" 105         Refrigerante         R$ 1,00\n\n");
}

int main(){
	int quant, cod;
	float valor;
	referencia();
	printf("Digite o codigo do produto: ");
	scanf("%d", &cod);
	getchar();
	
	switch(cod){
		case 100: {
			printf("Digite a quantidade: ");
			scanf("%d", &quant);
			getchar();
			valor= (float)quant*1.7;
			printf("Valor a pagar e: %.2f", valor);
			break;
		}
		case 101: {
			printf("Digite a quantidade: ");
			scanf("%d", &quant);
			getchar();
			valor= (float)quant*2.3;
			printf("Valor a pagar e: %.2f", valor);
			break;
		}
		case 102: {
			printf("Digite a quantidade: ");
			scanf("%d", &quant);
			getchar();
			valor= (float)quant*2.6;
			printf("Valor a pagar e: %.2f", valor);
			break;
		}
		case 103: {
			printf("Digite a quantidade: ");
			scanf("%d", &quant);
			getchar();
			valor= (float)quant*2.4;
			printf("Valor a pagar e: %.2f", valor);
			break;
		}
		case 104: {
			printf("Digite a quantidade: ");
			scanf("%d", &quant);
			getchar();
			valor= (float)quant*2.5;
			printf("Valor a pagar e: %.2f", valor);
			break;
		}
		case 105: {
			printf("Digite a quantidade: ");
			scanf("%d", &quant);
			getchar();
			valor= (float)quant*1.0;
			printf("Valor a pagar e: %.2f", valor);
			break;
		}
		default: {
			printf("O produto nao esta disponivel.");
			break;
		}
	}
	return 0;
}
