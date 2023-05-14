#include<stdio.h>
#include<stdlib.h>


void procedimento_imprime(int a)
{
    int i;
    int cont = 0;
    for (i = 0; i <= a; i++)
    {
        printf("%d ,", cont);
        cont++;
    }
}

int main(){

    printf(procedimento_imprime(10));

    return 0;

}
