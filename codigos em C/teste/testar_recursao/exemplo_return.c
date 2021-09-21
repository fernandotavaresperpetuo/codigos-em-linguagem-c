#include <stdio.h>
#include <stdlib.h>

int *maior(int x, int y){
    if (*&x > *&y){
        printf("o maior numero eh: %d\n\n", *&x);
        return x;
    }else{
        printf("o maior numero eh: %d\n\n", *&y);
        return y;
        }
}
int main(){
    int *w, *s;

    printf("digite o primeiro numero: \n");
    scanf("%d", &w);
    printf("digite o segundo numero: \n");
    scanf("%d", &s);
    maior(&*w, &*s);

	system("pause");
	return 0;
}
