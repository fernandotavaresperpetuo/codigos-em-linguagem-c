#include <stdio.h>
#include <stdlib.h>

int quadrado(int valor){
    valor=valor*valor;
    return valor;
}




int main(){
    int valor, resultado;

    printf("\nDigite um valor: ");
    scanf("%d", &valor);

    resultado=quadrado(valor);
    printf("\n%d\n", resultado);

    system("pause");

    return 0;
}
