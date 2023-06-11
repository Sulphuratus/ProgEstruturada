#include<stdio.h>
#include<stdlib.h>

// PROGRAMA PARA O CÁLCULO DE NUMERO DE EULER PARA NÚMERO FINITO DE ELEMENTOS

double calcula_Euler(int num)
{
    int i,j;
    long int mult;
    double soma = 0;
    double convint;

    printf("\n[n]    Euler");

    for (i = 0; i < num; i++){

        mult = 1;
        j = i;

        while( j > 0){
            mult = mult*(j);
            j--;
        }

        //printf("\nMult: %ld", mult);
        convint = mult;
        soma = soma + 1/convint;
        if (i < 3)
        {
            printf("\n %d    %.1f", i, soma);
        }
        else
        {
            printf("\n %d    %.12f", i, soma);
        }

    }

    return soma;

}


int main()
{
    int n = 20;

    printf("\n\nNumero de Euler para %d elementos = %f\n\n", n, calcula_Euler(n));

    return 0;

}
