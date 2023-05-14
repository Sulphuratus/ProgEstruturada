#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// PROGRAMA DE FUNÇÃO PARA O CÁLCULO DA NORMA DO VETOR |v| = SQRT(X2 + Y2)

double calcula_norma(int x, int y)
{
    double z;
    double convint;

    z = sqrt(pow(x,2) + pow(y,2));

    return z;
}

int main()
{
    int x = 10;
    int y = 15;

    printf("\nNorma do vetor |v|: %.2f\n", calcula_norma(x, y));

    return 0;
}
