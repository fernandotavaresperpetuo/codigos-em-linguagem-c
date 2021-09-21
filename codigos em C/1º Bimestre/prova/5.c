#include<stdio.h>
# include<locale.h >

 int main ( )
{
    char menu;
 float taxa_natalidade,taxa_mortalidade,num_habit;
 float num_obitos,num_nascimentos;

    setlocale(LC_ALL,"portuguese");
    printf("\n\t Menu -DIGITE (N ou M) PARA CALCULAR \n\n");
    printf("N – A taxa de natalidade \n");
    printf("M – A taxa de mortalidade \n");

    scanf("%c",&menu);

    switch(menu)
    {
        case 'N':
            printf ( "Digite o número de nascimentos : \n" );
            scanf ( " %f",&num_nascimentos);
            printf ( "\n Digite o número de habitantes : \n" );
            scanf ( " %f",&num_habit);
            taxa_natalidade=(num_nascimentos*1000)/num_habit;
            printf ( " Taxa de Natalidade = %.2f",taxa_natalidade );
            printf("\n Relógio >>> %s \n",__TIME__);    /* é para mostrar a hora           que   está sendo imprimida o valor da taxa de natalidade*/
            break;

        case 'M':
            printf ( "Digite o números de óbitos: \n" );
            scanf ( " %f",&num_obitos);
            printf ( " Digite o número de habitantes : " );
            scanf ( " %f",&num_habit);
            taxa_mortalidade=(num_obitos*1000)/num_habit;
            printf ( " Taxa de Mortalidade = %.2f ",taxa_mortalidade );
            printf("\n Relógio >>> %s\n",__TIME__);      /* é para mostrar a
   hora que está sendo imprimida o valor da taxa de mortalidade*/
            break;

        default :
            printf ( "\n opção não válida " ) ;
    }
 return 0;
}
