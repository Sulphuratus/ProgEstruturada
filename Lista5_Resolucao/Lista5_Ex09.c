#include<stdio.h>

int main(){

    int i, j, contv;
    int vetor[11], vetori[5];
    contv = 10;
    j = 0;

    for (i = 0; i <= 10; i++)
    {
        vetor[i] = contv;
        contv ++;
    }

    printf("\nVetor de numeros pares de 10 a 20 em ordem decrescente:\n");

    for (i = 10; i >= 0 ; i--)
    {
        if ( vetor[i] % 2 == 0 )
        {
            printf("%d, ", vetor[i] );

        }
        else{
            vetori[j] = vetor[i];
            j ++;
        }
    }

    printf("\n\nVetor de numeros impares de 10 a 20 em ordem decrescente:\n");

    for (j = 0; j < 5; j++)
    {
        printf("%d, ", vetori[j]);
    }

    printf("\n");

    return 0;
}
