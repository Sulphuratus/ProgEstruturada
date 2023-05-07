#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

int main()
{
    int i, j, min, max, maior, menor, k, l, m, n;
    int smenor, smaior;
    int matriz[5][5];
    min = 100;
    max = 999;
    smaior = INT_MIN;
    smenor = INT_MAX;
    maior = INT_MIN;
    menor = INT_MAX;
    srand(time(NULL));

    for(i=0; i < 5; i++)
    {
        for(j=0; j < 5; j++)
        {
            matriz[i][j] = min + rand()%(max - min + 1);
            printf("%d, ", matriz[i][j]);

            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                k = i;
                l = j;
//                if (matriz[i][j] < smenor && matriz[i][j] != menor)
//                {
//                    smenor = matriz[i][j];
//                }


            }else if (matriz[i][j] > maior)
            {

                maior = matriz[i][j];
                m = i;
                n = j;
//                if (matriz[i][j] > smaior && matriz[i][j] != maior)
//                {
//                    smaior = matriz[i][j];
//                }
            }

        }printf("\n");
    }


    for(i=0; i < 5; i++)
    {
        for(j=0; j < 5; j++)
        {
            if (matriz[i][j] < smenor && matriz[i][j] != menor)
                {
                    smenor = matriz[i][j];
                }
            if (matriz[i][j] > smaior && matriz[i][j] != maior)
                {
                    smaior = matriz[i][j];
                }
        }

    }

//    for(i=0; i < 5; i++)
//    {
//        for(j=0; j < 5; j++)
//        {
//            matriz[i][j] = min + rand()%(max - min + 1);
//            printf("%d, ", matriz[i][j]);
//
//            if (matriz[i][j] < menor)
//            {
//                smenor = menor;
//
//                menor = matriz[i][j];
//                k = i;
//                l = j;
//
//            }else if (matriz[i][j] > maior)
//            {
//                smaior = maior;
//
//                maior = matriz[i][j];
//                m = i;
//                n = j;
//            }
//
//        }printf("\n");
//    }

    printf("\n\nO menor numero é: %d , Posicao: (%d,%d)", menor, k+1, l+1);

    printf("\n\nO maior numero é: %d , Posicao: (%d,%d)", maior, m+1, n+1);

    printf("\n\nO segundo menor numero é: %d", smenor);

    printf("\n\nO segundo maior numero é: %d", smaior);

    return 0;

}
