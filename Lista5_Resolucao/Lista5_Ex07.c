#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{

    int min, max, i, num, resta;
    int soma = 0;
    int cont = 0;
    resta = 3-cont;
    int vetor[4];
    srand(time(NULL));

    min = 0;
    max = 1;

    printf("\nNumero binário sorteado:\n");
    printf("\n[");

    for (i = 0; i < 4; i++)
    {
        vetor[i] = min + rand()%( max - min + 1);
        printf("%d", vetor[i]);
        if (i < 3)
        {
            printf(", ");
        }
    }
    printf("]\n");

    for (i = 3; i >= 0; i--)
    {
        soma += vetor[i]*pow(2,cont);
        cont += 1;
    }

    cont = 0;

    printf("\nDigite seu palpite para o numero decimal correspondente, voce tem %d chances: ", 3-cont);

    while (cont < 3) {
    scanf("%d", &num);
    cont ++;

    if( soma == num)
    {
        printf("\nParabens!! Você acertou!! ");
        break;

    }else
    {
        if ( cont < 3 )
        {
            printf("Errou!!! Você tem mais %d chances, tente novamente: ", 3-cont);

        }else
        {
            printf("\nTentativas esgotadas! Fim do jogo!");
        }
    }

    }

    printf("\nValor decimal correspondente: %d\n", soma);


    return 0;

}
