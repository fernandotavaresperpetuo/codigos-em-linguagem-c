#include<stdio.h>

void referencia(){
	printf( "Codigo    Classificacao\n"
			" 1        Alimento nao-perecivel\n"
			" 2, 3, 4  Alimento perecivel\n"
			" 5, 6     Vestuario\n"
			" 7        Higiene pessoal\n"
			" 8 a 15   Limpeza e Utensilios domesticos\n"
			" outros   Codigo invalido\n\n");
}
int entradaCodigo(){
	int codigo;
	printf("Digite o codigo do produto: ");
	scanf("%d", &codigo);
	return codigo;
}

int main(){
	int op;
	printf( "1) Leia o codigo de um determinado produto e mostre sua classificacao.\n"
			"Utilize aseguinte tabela como referencia:\n\n");
	referencia();
	op= entradaCodigo();
	switch(op) {
		case 1: {
			printf("Alimento nao-perecivel\n");
			break;
		}
		case 2: {
			printf("Alimento perecivel\n");
			break;
		}
		case 3: {
			printf("Alimento perecivel\n");
			break;
		}
		case 4: {
			printf("Alimento perecivel\n");
			break;
		}
		case 5: {
			printf("Vestuario\n");
			break;
		}
		case 6: {
			printf("Vestuario\n");
			break;
		}
		case 7: {
			printf("Higiene pessoal\n");
			break;
		}
		case 8: {
			printf("Limpeza e Utensilios domesticos\n");
			break;
		}
		case 9: {
			printf("Limpeza e Utensilios domesticos\n");
			break;
		}
		case 10: {
			printf("Limpeza e Utensilios domesticos\n");
			break;
		}
		case 11: {
			printf("Limpeza e Utensilios domesticos\n");
			break;
		}
		case 12: {
			printf("Limpeza e Utensilios domesticos\n");
			break;
		}
		case 13: {
			printf("Limpeza e Utensilios domesticos\n");
			break;
		}
		case 14: {
			printf("Limpeza e Utensilios domesticos\n");
			break;
		}
		case 15: {
			printf("Limpeza e Utensilios domesticos\n");
			break;
		}
		default: {
			printf("Codigo invalido\n");
			break;
		}
	}
	return 0;
}


		
