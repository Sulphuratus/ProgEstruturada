#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int i, j, min, max, num, b;
    //int vet[100];
    FILE *guarda_numero;

    guarda_numero = fopen("Ex02_DezNumerosPorLinha.txt","w");

    srand(time(NULL));

    min = 0;
    max = 100;

        if (guarda_numero == NULL)
        {
            printf("Arquivo origem nao foi nao foi aberto.\n");
            return 1;
        }
        else
        {
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 10; j++){
                    num = min + rand()%(max - min + 1);
                    fprintf(guarda_numero,"%d ,", num);

                }fprintf(guarda_numero,"\n");
            }
        }


    fclose(guarda_numero);

    printf("Dados salvos com sucesso");

    return 0;
}

