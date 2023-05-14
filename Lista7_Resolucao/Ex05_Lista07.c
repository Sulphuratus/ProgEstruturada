#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int imprime_intervalo(int num1, int num2){

    int i;
    int comeco, fim;

    if (num1 >= num2)
    {
        comeco = num2;
        fim = num1;
    }
    else
    {
        comeco = num1;
        fim = num2;
    }


    printf("\nInicio: %d", comeco);
    printf("\nFinal: %d\n\n", fim);

    for (i = comeco; i <= fim; i++)
    {
        printf("%d ,", comeco);
        comeco++;
    }
}



int main(){

    int i, min, max, a, b;

    srand(time(NULL));

    min = 0;
    max = 100;

    a = min + rand()%(max - min + 1);

    b = min + rand()%(max - min + 1);

    imprime_intervalo(a, b);

    return 0;
}
