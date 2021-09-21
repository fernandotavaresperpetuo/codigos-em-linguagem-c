#include <stdio.h>
#include <stdlib.h>

void imprime_log(int x){
	if(x <= 0)
		return imprime_log(x + 30);
	printf("\nvalor eh: %d\n", x);
}
int main(){
	int d;
	printf("Digite f: \t");
	scanf("%d", &d);
	imprime_log(d);

	printf("\n\n");
	system("pause");
	return 0;
}
