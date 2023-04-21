#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int i, num, min, max, cont, soma, soma_tudo;
    int vetor[8];
    cont = 0;
    soma = 0;
    soma_tudo = 0;
    min = 0;
    max = 50;

    for (i = 0; i < 8; i++)
    {
        vetor[i] = min + rand()%( max - min +1 );
        soma_tudo += vetor[i];
        if (vetor[i] > 30){
            cont += 1;
            soma += vetor[i];
        }

    }
    printf("\nVetor aleatorio de 8 elementos entre 0 e 50: ");
    for (i = 0; i < 8; i++)
    {
        printf("%d, ", vetor[i]);
    }

    printf("\n\nQuantidade de numeros maior que 30: %d", cont);
    printf("\n\nSoma dos elementos maiores que 30: %d", soma);
    printf("\n\nSoma de todos os elementos do vetor: %d\n\n", soma_tudo);

    return 0;

}