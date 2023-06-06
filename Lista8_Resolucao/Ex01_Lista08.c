#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int i, min, max, num, b;
    int vet[100];
    FILE *guarda_numero;

    guarda_numero = fopen("Ex01_100NumerosAleatorios.txt","w");

    srand(time(NULL));

    min = -100;
    max = 100;

    for (i = 0; i < 100; i++)
    {
        vet[i] = min + rand()%(max - min + 1);
    }

        if (guarda_numero == NULL)
        {
            printf("Arquivo origem nao foi nao foi aberto.\n");
            return 1;
        }
        else
        {
            for(i=0; i<100; i++){
                fprintf(guarda_numero,"%d ,\n", vet[i]);

            }
            fclose(guarda_numero);

            printf("Dados salvos com sucesso");
        }

    return 0;

}
