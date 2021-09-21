#include<stdio.h>
#include<math.h>
int par(int n) {
	if(n < 0) {
		return 0;
	}
	2 + par(n - 2);
	printf("%d ", n);
}

int parr(int n) {
	if(n < 0) {
		return -1 * par(n);
	}
	return par(n);
}
int main(){
    int numero;
    printf("digite numeros inteiros :\n ");
    scanf("%d", &numero);
    printf("%d \n", par(numero));
    return 0;
}
