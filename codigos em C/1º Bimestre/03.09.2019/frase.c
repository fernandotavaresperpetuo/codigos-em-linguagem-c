#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/*
	char frasee[100];
	char frase[100];

	printf("Digite uma frase: \n")
	gets(frase);

	printf("Digite outra frase: \n")
	gets(frasee);

	printf("%s\n", frase);
	printf("%s\n", frasee);

	system("pause");
	return 0;
}*/

char str[20] = "programa_computador";
char str2[20];
int i,j=0;

for(i=strlen (str)-1; i>0; i--){
	str2[j] = str[i];
	j++;
}
str2[j] = '\0';
printf("%s/n",str2);
system("pause");
	return 0;
}
