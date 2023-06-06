#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    FILE *destino;
    destino = fopen("Ex06_Matriz10x10.txt", "w");

    int num, min, max, i, j;
    srand(time(NULL));
    min = 10;
    max = 99;

    if (destino == NULL)
    {
        printf("Erro ao ler o arquivo!!");
    }
    else
    {
         for (i = 0; i < 10; i++)
        {
            for(j = 0; j < 10; j++)
            {
                num = min + rand()%(max - min + 1);
                fprintf(destino, "%d ", num);
            }
        fprintf(destino, "\n");
        }

    }

    fclose(destino);


    return 0;

}
