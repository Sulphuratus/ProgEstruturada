#include<stdio.h>
#include<stdlib.h>

void procedimento_imprime(int a)
{
    int i, j;
    int vet[11], k;
    int cont_cima = a;
    int cont_baixo = a;
    int cont = 0;
    vet[5] = a;
    i = 6;
    j = 4;

    while ( i <= 10 && i > 5)
    {
        cont_cima ++;

        if( cont_cima % 2 == 0)
        {
            vet[i] = cont_cima;
            i++;
        }
    }

    while (j >= 0 && j < 5)
    {
        cont_baixo--;

        if( cont_baixo % 2 != 0)
        {
            vet[j] = cont_baixo;
            j--;
        }
        cont ++;

    }

    for (k = 0; k < 11; k++)
    {
        printf("%d ,", vet[k]);
    }
}

int main(){

    procedimento_imprime(88);

    return 0;

}
