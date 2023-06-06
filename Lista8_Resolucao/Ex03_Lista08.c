#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int i, j, min, max, num, b;
    num = 1;
    //int vet[100];
    FILE *guarda_numero;

    guarda_numero = fopen("Ex03_NumerosPositivosNegativos.txt","w");

    while( num != 0)
    {
        printf("\nDigite o numero desejado: ");
        scanf("\n%d", &num);

        if (guarda_numero == NULL)
        {
            printf("Arquivo origem foi nao foi aberto.\n");
            return 1;
        }
        else
        {
            if (num > 0)
            {
                if (num % 2 == 0)
                {
                    fprintf(guarda_numero,"\n%d --> Positivo par", num);
                }
                else
                {
                    fprintf(guarda_numero,"\n%d --> Positivo impar!", num);

                }
        }else if (num < 0)
        {
            if (num % 2 == 0)
            {
                fprintf(guarda_numero,"\n%d --> Negativo par", num);
            }
            else
            {
                fprintf(guarda_numero,"\n%d --> Negativo impar!", num);

            }
        }

        }
    }

    fclose(guarda_numero);

    printf("Dados salvos com sucesso");

    return 0;
}

