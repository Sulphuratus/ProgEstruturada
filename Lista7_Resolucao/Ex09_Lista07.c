#include<stdio.h>
#include<stdlib.h>


// PROGRAMA QUE CRIA PROCEDIMENTO PARA CALCULO DO VALOR DA SEQUÊNCIA DE FIBONACCI


int procedimento_fibonacci(int num)
{
    int proximo, anterior, i;
    int atual = 2;
    anterior = 2;

    for(i = 0; i < num; i++){

        if (i > 1)
        {
            //anterior = atual;
            proximo = atual + anterior;
            atual = anterior;
            anterior = proximo;
            //anterior = atual;


            //printf("\n\nAnterior: %d:  Atual: %d", anterior, atual);

        }else
        {
            atual = 1;
        }

        printf("\nElemento %d: %d",i, atual);


    }
}


int main()
{
    int n = 11;

    printf("\n\n\Sequencia de Fibonacci com %d elementos.", procedimento_fibonacci(n));

    return 0;

}
