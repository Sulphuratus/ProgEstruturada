#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, j, k;
    int n, min, max;
    srand(time(NULL));

    FILE *arquivo;
    arquivo = fopen("Ex10_colorida.ppm", "w");
    fprintf(arquivo, "P3\n");
    fprintf(arquivo, "#Criado por Joao\n");
    fprintf(arquivo, "60 100\n");
    fprintf(arquivo, "255\n");

    //n = min + rand() % ( max - min + 1 );


    for(i = 0; i < 100; i++)
    {
        if(i >= 0 && i < 20)
        {
            min = 0;
            max = 56;

            for(j = 0; j < 60; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    n = min + rand() % ( max - min + 1 );
                    fprintf(arquivo, "%d ", n);

                }

            }

        }
        else if(i >= 20 && i < 40)
        {
            min = 45;
            max = 106;

            for(j = 0; j < 60; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    n = min + rand() % ( max - min + 1 );
                    fprintf(arquivo, "%d ", n);

                }

            }

        }
        else if(i >= 40 && i < 60)
        {
            min = 95;
            max = 156;

            for(j = 0; j < 60; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    n = min + rand() % ( max - min + 1 );
                    fprintf(arquivo, "%d ", n);

                }

            }

        }
        else if(i >= 60 && i < 80)
        {
            min = 145;
            max = 206;

            for(j = 0; j < 60; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    n = min + rand() % ( max - min + 1 );
                    fprintf(arquivo, "%d ", n);

                }

            }

        }
        else if(i >= 80 && i < 100)
        {
            min = 195;
            max = 256;

            for(j = 0; j < 60; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    n = min + rand() % ( max - min + 1 );
                    fprintf(arquivo, "%d ", n);

                }

            }
        }

        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
    return 0;
}
