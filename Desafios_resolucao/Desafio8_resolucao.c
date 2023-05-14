#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// PROGRAMA DE FUNÇÃO PARA O CÁLCULO DA NORMA DO VETOR |v| = SQRT(X2 + Y2)

int calcula_degrau(int x)
{
    if ( x >= 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

double calcula_sigmoide(int x, double e)
{
    double y;

    printf("\nX=%d e= %.2f", x, e);
    y = 1/(1+pow(e,-x));

    return y;
}

double calcula_tangente(int x, double e)
{
    double y;

    y = (pow(e, x) - pow(e, -x))/(pow(e, x) + pow(e, -x));

    return y;
}

double calcula_sigmoide_linear(int x, double e)
{
    double y;

    y = x/(1+pow(e,-x));

    return y;
}

    double convint;
double calcula_gaussiana(int x, double e)
{
    double y;

    y = pow(e, -pow(x, 2));

    return y;
}

int main()
{
    int x = -1;
    double e = 2.71828;

    printf("\nDegrau para x= %d: %d\n", x, calcula_degrau(x));
    printf("\nSigmoide para x= %d : %.9f\n", x, calcula_sigmoide(x, e));
    printf("\nTangente para x= %d : %.9f\n", x, calcula_tangente(x, e));
    printf("\nSigmoide Linear para x= %d : %.9f\n", x, calcula_sigmoide_linear(x, e));
    printf("\nGaussiana para x= %d : %.9f\n", x, calcula_gaussiana(x, e));

    return 0;
}
