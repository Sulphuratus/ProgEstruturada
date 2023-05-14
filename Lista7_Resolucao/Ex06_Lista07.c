#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int procedimento_decomposicao(int num){

    int i;
    float unidade, dezena, centena, milhar;
    int convint;

    milhar = round(num/1000)*1000;

    centena = ((num - milhar)/100);
    convint = centena;
    centena = convint * 100;

    dezena = (num-milhar-centena)/10;
    convint = dezena;
    dezena = convint * 10;

    unidade = num-milhar-centena-dezena;

    printf("\nNumero: %d", num);

    printf("\nUnidade: %.0f", unidade);

    printf("\nDezena: %.0f", dezena);

    printf("\nCentena: %.0f", centena);

    printf("\nMilhar: %.0f", milhar);

}



int main(){

    int i, min, max, a, b;

    srand(time(NULL));

    min = 1000;
    max = 9999;

    a = min + rand()%(max - min + 1);

    procedimento_decomposicao(a);

    return 0;
}
