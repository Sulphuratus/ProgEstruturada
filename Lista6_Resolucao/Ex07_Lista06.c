#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, j, min, max;
    int matriz[7][7];
    min = 10;
    max = 50;
    srand(time(NULL));

    for(i=0; i < 7; i++)
    {
        for(j=0; j < 7; j++)
        {
            matriz[i][j] = min + rand()%(max - min + 1);
            printf("%3d, ", matriz[i][j]);

        }printf("\n");
    }

    printf("\n\nMatriz com numeros pares trocados pelo zero:\n\n");


    for(i=0; i < 7; i++)
    {
        for(j=0; j < 7; j++)
        {
            if (matriz[i][j] % 2 == 0)
                {
                    matriz[i][j] = 0;
                }
            printf("%3d, ", matriz[i][j]);
        }printf("\n");

    }

    printf("\n\nMatriz com numeros impares trocados pelo numero 1:\n\n");

    for(i=0; i < 7; i++)
    {
        for(j=0; j < 7; j++)
        {
            if (matriz[i][j] % 2 != 0)
                {
                    matriz[i][j] = 1;
                }
            printf("%3d, ", matriz[i][j]);
        }printf("\n");

    }


    return 0;

}
