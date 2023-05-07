#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, j, min, max, somal, somac, dim;
    dim = 3;
    int matriz[dim][dim];
    int vet[dim];
    min = 0;
    max = 9;
    srand(time(NULL));

    for(i=0; i < (dim-1); i++)
    {
        somal = 0;
        for(j=0; j < dim; j++)
        {
        matriz[i][j] = min + rand()%(max - min + 1);

            if (j < (dim-1))
            {
                somal += matriz[i][j];
            }
            else
            {
                matriz[i][j] = somal;
            }

            printf("%3d, ", matriz[i][j]);

        }printf("\n");
    }

    for(i=0; i < dim; i++)
    {
        somac = 0;
        for(j=0; j < (dim-1); j++)
        {
            somac += matriz[j][i];
            vet[i] = somac;

        }

        printf("%3d, ", vet[i]);

    }


    return 0;

}
