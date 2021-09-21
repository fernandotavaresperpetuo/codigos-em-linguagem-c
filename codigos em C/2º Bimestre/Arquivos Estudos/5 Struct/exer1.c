# include <stdio.h>
#include <string.h>

struct Cadastropessoa{
int numero[9];
char nome[51],rua[51],cidade[51];
};

struct Cadastropessoa cad;

void entradados(){
printf("Digite o nome.\n");
fgets(cad.nome,51,stdin);
printf("Digite a rua.\n");
fgets(cad.rua,51,stdin);
printf("Digite a cidade.\n");
fgets(cad.cidade,51,stdin);
printf("Digite a nota.\n");
scanf("%i", cad.numero);}

void print(){
printf("");
}
