#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, j, min, max;
    int matriz[5][5];
    min = -10;
    max = 10;
    srand(time(NULL));

    for(i=0; i < 5; i++)
    {
        for(j=0; j < 5; j++)
        {
            matriz[i][j] = min + rand()%(max - min + 1);
                printf("%3d ,", matriz[i][j]);
        }printf("\n");
    }

    return 0;

}
