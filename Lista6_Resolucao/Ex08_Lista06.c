#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, j;
    double matriz[6][6], converte, soma, media, cont;
    int min = 0;
    int max = 100;
    soma = 0.0;
    cont = 0.0;

    srand(time(NULL));


    for(i=0; i < 6; i++)
    {
        for(j=0; j < 6; j++)
        {
            matriz[i][j] = (min + rand()%(max - min + 1));
            converte = matriz[i][j]/100;
            printf("%.1f, ", converte);
            soma += converte;
            cont ++;
            //printf("CONT = %.3f", cont);

        }printf("\n");
    }

    media = soma/cont;

    printf("\n\nA media dos %.0f elementos eh: %.1f", cont, media);

    return 0;

}
