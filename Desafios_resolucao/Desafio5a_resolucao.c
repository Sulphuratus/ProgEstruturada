#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{

    int min, max, i, j, count, testa;
    int vetor[15];
    srand(time(NULL));

    min = 1;
    max = 25;

    for (i = 0; i < 15; i++)
    {
        vetor[i] = min + rand()%( max - min + 1); // Vetor inicial a ser usado para comparação e evitar elementos repetidos
    }

// Primeiro teste para verificar se houve elementos repetidos, percorrer o vetor comparando cada elemento

    for (i = 0; i < 15; i++)
    {
        for(j = 1; j < 15; j++){
            if (vetor[j] == vetor [i])
            {
                if (i != j)
                {
                    count ++; // Se houver repetição adiciona na variável cont
                }
            }
        }

    }

    // Bloco para gerar o novo vetor aleatŕio e refazer a comparação dos elementos até que a variável cont seja zerada

    while (count > 0){
        for (i = 0; i < 15; i++)
        {
            vetor[i] = min + rand()%( max - min + 1);
        }
        count = 0;
        for (i = 0; i < 15; i++)
        {
            for(j = 1; j < 15; j++){
                if (vetor[j] == vetor [i])
                {
                    if (i != j)
                    {
                        count ++;
                    }
                }
            }
        }
    }

// Impressão do vetor resultado com elementos sem repetições

    printf("\nVetor de 15 numeros aleatorios (sem repeticoes) entre 1 e 25:\n");

    printf("\n[");
    for(i=0;i<15;i++){
    printf("%d, ", vetor[i]);
    }
    printf("]");
    printf("\n\n");

    return 0;

}
