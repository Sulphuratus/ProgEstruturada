#include<stdio.h>
#include<stdlib.h>
#include<time.h>>

int main(){
    srand(time(NULL));
    int i, j;
    int n;

    FILE *arquivo;
    arquivo = fopen("Ex6_escala_cinza.pgm", "w");
    fprintf(arquivo, "P2\n");
    fprintf(arquivo, "#Criado por Joao\n");
    fprintf(arquivo, "100 100\n");
    fprintf(arquivo, "255\n");

    for(i = 0; i < 100; i++)
    {
        n = rand() % 256;
        for(j = 0; j < 100; j++)
        {
            fprintf(arquivo, "%d ", n);
        }

    }

    fclose(arquivo);
    return 0;
}
