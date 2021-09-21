#include<stdio.h>
#include<stdlib.h>


int recusiv(int n){
	if(n) return n*recusiv(n-1);
	else return 1;
}
int rec(int n){
	if(n) return 2*n*rec(n-1);
	else return 1;
}

int main(){
	int k;
	printf("Digite um numero: ");
	scanf("%d", &k);
	getchar();
	printf("%d", rec(k)/recusiv(k));
	
	return 0;
}
