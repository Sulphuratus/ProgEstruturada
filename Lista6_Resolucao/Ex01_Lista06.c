#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, j, min, max;
    int matriz[10][10];
    min = 10;
    max = 99;
    srand(time(NULL));

    for(i=0; i < 10; i++)
    {
        for(j=0; j < 10; j++)
        {
            matriz[i][j] = min + rand()%(max - min + 1);
            printf("%d, ", matriz[i][j]);
        }printf("\n");
    }

    return 0;

}
