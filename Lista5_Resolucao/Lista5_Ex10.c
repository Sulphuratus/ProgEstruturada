#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{

    int min, max, i;
    int soma = 0;
    int cont = 0;
    int A[20];
    srand(time(NULL));

    min = 97;
    max = 122;

    printf("\nVetor de 20 numeros aleatorios entre 97 e 122:");

    printf("\n[");

    for (i = 0; i < 20; i++)
    {
        A[i] = min + rand()%( max - min + 1);
        printf("%d", A[i]);
        if (i < 19)
        {
            printf(", ");
        }
    }
    printf("]\n");

    printf("\nImpressão do mesmo vetor usando a mascara de char:");

    printf("\n[");

    for (i = 0; i < 20; i++)
    {
        A[i] = min + rand()%( max - min + 1);
        printf("%c", A[i]);
        if (i < 19)
        {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;

}
