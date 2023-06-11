#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int n, i, j;

    FILE *fonte;
    fonte = fopen("imagem3.ppm", "w");

    fprintf(fonte, "P3\n");
    fprintf(fonte, "#imagem3.ppm\n");
    fprintf(fonte, "100 100\n");
    fprintf(fonte, "255\n");


    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 300; j++)
        {
            n = rand()%256;
            fprintf(fonte, "%d ", n);
        }
    }
    fclose(fonte);

    return 0;

}
