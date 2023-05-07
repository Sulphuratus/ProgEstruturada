#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

int main()
{
    int i, j, min, max, maior, menor, k, l, m, n;
    int matriz[10][10];
    min = 0;
    max = 100;
    maior = INT_MIN;
    menor = INT_MAX;
    srand(time(NULL));

    for(i=0; i < 10; i++)
    {
        for(j=0; j < 10; j++)
        {
            matriz[i][j] = min + rand()%(max - min + 1);
            printf("%d, ", matriz[i][j]);

            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                k = i;
                l = j;

            }else if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                m = i;
                n = j;
            }

        }printf("\n");
    }

    printf("\n\nO menor numero é: %d , Posicao: (%d,%d)", menor, k+1, l+1);

    printf("\n\nO maior numero é: %d , Posicao: (%d,%d)", maior, m+1, n+1);

    return 0;

}
