#include<stdio.h>
#include<stdlib.h>


int main(){
    int i, j;
    int n;

    FILE *arquivo;
    arquivo = fopen("Ex8_escala_cinza.pgm", "w");
    fprintf(arquivo, "P2\n");
    fprintf(arquivo, "#Criado por Joao\n");
    fprintf(arquivo, "60 100\n");
    fprintf(arquivo, "255\n");
    n = 0;

    for(i = 0; i < 100; i++)
    {
        for(j = 0; j < 60; j++)
        {
            fprintf(arquivo, "%d ", n);

        }
        if(i == 19 || i == 39 || i == 59)
        {
            n = n + 64;

        }else if( i == 79 )
        {
            n = 255;
        }

    }

    fclose(arquivo);
    return 0;
}
