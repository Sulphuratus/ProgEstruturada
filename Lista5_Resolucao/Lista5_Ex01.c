#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int i, num, min, max, posicao;
    int vetor[8];
    int checa = 0;
    srand(time(NULL));

    min = 0;
    max = 10;

    //qualquer = min + rand()% (max - min + 1);

     for (i = 0; i < 8; i++)
    {
        vetor[i] = min + rand()% (max - min + 1);
        printf("\n%d", vetor[i]);
    }   

    printf("Digite o número que deseja buscar no vetor: ");
    scanf("%d", &num);

    for (i = 0; i < 8; i++)
    {
        if (vetor[i] == num)
        {
            checa = 1;
            posicao = i;
        }     
    }

    if(checa == 1)
        {
            printf("\nO numero %d está na posicao %d do vetor!",num, posicao);
        }
        else
        {
            printf("\nO numero %d não está no vetor!",num);
        }

    return 0;
}