#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, j, min, max;
    int matriz[6][6];

    for(i=0; i < 6; i++)
    {
        for(j=0; j < 6; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }

            printf("%d, ", matriz[i][j]);

        }printf("\n");
    }
    return 0;
}
