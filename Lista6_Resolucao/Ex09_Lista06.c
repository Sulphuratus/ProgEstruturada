#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, j;
    double matriz[6][6], converte;
    int min = -100;
    int max = 100;

    srand(time(NULL));

    for(i=0; i < 6; i++)
    {
        for(j=0; j < 6; j++)
        {
            matriz[i][j] = (min + rand()%(max - min + 1));
            matriz[i][j] = matriz[i][j]/100;
            printf("%5.1f, ", matriz[i][j]);
//            printf("%5.1f, ", converte);

        }printf("\n");
    }

    printf("\n\n");

    for(i=0; i < 6; i++)
    {
        for(j=0; j < 6; j++)
        {
            matriz[i][j] *= 2;
            printf("%5.1f, ", matriz[i][j]);

        }printf("\n");
    }

     printf("\n\n");

    for(i=0; i < 6; i++)
    {
        for(j=0; j < 6; j++)
        {
            matriz[i][j] -= 1;
            printf("%5.1f, ", matriz[i][j]);

        }printf("\n");
    }

    return 0;

}
