#include<stdio.h>/
#include<stdlib.h>
#include<time.h>>

int main()
{
    srand(time(NULL));
    int i, j;
    int n;
    FILE *arquivo;
    arquivo = fopen("labirinto.pbm", "w");
    fprintf(arquivo, "P1\n");
    fprintf(arquivo, "#Criado por Joao\n");
    fprintf(arquivo, "11 11\n");
    for(i = 0; i < 11; i++)
    {
        for(j = 0; j < 11; j++)
        {
            if((i == 0 || i == 10) || (i == 2 && ( j > 0 && j < 9 )) || (i == 4 && (j > 1 && j < 10)) || (i == 6 && (j > 0 && j < 3)) || (i == 8 && (j > 1 && j < 9)))
            {
                fprintf(arquivo, "%d ", 1);

                //if(i == 9 || i == 89){
            }else if(((i > 0 && i < 5) && (j == 0 || j == 10)) || ((i > 5 && i < 10) && (j == 0 || j ==10)))
            {
                fprintf(arquivo, "%d ", 1);
            }
            else if((( i > 4 && i < 8) && j == 4) || ((i > 5 && i < 8) && j == 8) || ((i > 4 && i < 7) && j == 6))
            {
                fprintf(arquivo, "%d ", 1);
            }
            else
            {
                fprintf(arquivo, "%d ", 0);
            }
        }
    }
    fclose(arquivo);
    return 0;

}
