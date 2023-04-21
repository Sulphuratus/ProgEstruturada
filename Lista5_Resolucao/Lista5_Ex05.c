#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int min, max, i;
    int vetor[4];
    srand(time(NULL));

    min = 0;
    max = 1;

    printf("\nVetor de 4 posicoes de elementos aleatorios entre 0 e 1:\n");
    printf("\n[");

    for (i = 0; i < 4; i++)
    {
        vetor[i] = min + rand()%( max - min + 1);
        printf("%d, ", vetor[i]);
    }
    printf("]");
    printf("\n\n");
    
    return 0;

}