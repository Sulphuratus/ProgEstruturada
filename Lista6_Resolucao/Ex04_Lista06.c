#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, j, min, max, soma_pos, soma_neg;
    int matriz[5][5];
    min = -10;
    max = 10;
    soma_neg = 0;
    soma_pos = 0;
    srand(time(NULL));

    for(i=0; i < 5; i++)
    {
        for(j=0; j < 5; j++)
        {
            matriz[i][j] = min + rand()%(max - min + 1);
                printf("%3d ,", matriz[i][j]);
                if(matriz[i][j] < 0)
                {
                    soma_neg += matriz[i][j];
                }
                else
                {
                    soma_pos += matriz[i][j];
                }
        }printf("\n");
    }
    printf("\n\nA soma dos numeros negativos é: %d", soma_neg);

    printf("\n\nA soma dos numeros positivos é: %d", soma_pos);


    return 0;

}
