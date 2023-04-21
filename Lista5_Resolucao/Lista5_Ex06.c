#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{

    int min, max, i;
    int soma = 0;
    int cont = 0;
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

    for (i = 3; i >= 0; i--)
    {
        soma += vetor[i]*pow(2,cont);
        cont += 1;
    }

    printf("\nValor decimal: %d\n", soma);

    return 0;

}
