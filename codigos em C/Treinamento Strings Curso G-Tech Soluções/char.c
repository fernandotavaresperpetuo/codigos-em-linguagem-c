#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char caracter;

    caracter = 'c';

    caracter = toupper(caracter);

    printf("%c %d\n" , caracter, caracter);

    caracter = tolower(caracter);

    printf("%c %d\n" , caracter, caracter);

    system("pause");
    return 0;
}
