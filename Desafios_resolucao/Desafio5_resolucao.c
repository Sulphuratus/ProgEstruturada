#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{

    int min, max, i, k, compara;
    int soma = 0;
    int j = 0;
    int vetor[15];
    srand(time(NULL));

    min = 1;
    max = 25;

    printf("\nVetor de 15 numeros aleatorios entre 1 e 25:\n");
    printf("\n[");

    for (i = 0; i < 15; i++)
    {
        vetor[i] = min + rand()%( max - min + 1);
        printf("\nVetor1[%d]: %d", i, vetor[i]);


        //compara = vetor[i];

        if( i > 0){
            for (j = i-1; j >= 0; j--){
                printf("\nVetor-j-for[%d]: %d", j, vetor[j]);
                printf("\nVetor-i-for[%d]: %d", i, vetor[i]);
                if (vetor[j] == vetor[i])
                {
                    vetor[i] = min + rand()%( max - min + 1);
                    printf("\nVetor-j-if[%d]: %d", j, vetor[j]);
                    printf("\nVetor-i-if[%d]: %d", i, vetor[i]);
                };
            }

        }

//        for (j = i - 1; j > 0; j--)
//        {
//            if (compara == vetor[j]){
//                vetor[i] = min + rand()%( max - min + 1);
//                printf("Vetor2[%d]: %d", i, vetor[i]);
//            }
//            j --;
//        }


        //printf("%d, ", vetor[i]);
    }
    printf("]");
    printf("\n\n");

    for(i=0;i<15;i++){
    printf("%d, ", vetor[i]);
    }

    printf("\n\n");

    return 0;

}
