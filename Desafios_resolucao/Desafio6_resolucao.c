#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
    int min, max, i, j, x, y;
    srand(time(NULL));

    min = 1;
    max = 10;

    printf("\n\nInsira o tamanho do vetor (maior que 3): ");
    scanf("%d", &j);

    while ( j <= 3)
    {
        printf("\nValor inválido, tente novamente!");
        printf("\n\nInsira o tamanho do vetor (maior que 3): ");
        scanf("%d", &j);
    }
    int vetor[j];

    for (i = 0; i < j; i++)
    {
        vetor[i] = min + rand()%( max - min + 1); // Vetor inicial a ser usado para comparação e evitar elementos repetidos
    }

    printf("\nVETOR\n[");
    for(i=0;i<j;i++){
        printf("%d, ", vetor[i]);
    }
    printf("]");
    printf("\n\n");

    printf("Digite o valor de X(indice inicial): ");
    scanf("%d", &x);

    printf("Digite o valor de Y(indice final): ");
    scanf("%d", &y);

    printf("SUB-VETOR\n[");
    for(i=x;i<=y;i++){
        printf("%d, ", vetor[i]);
    }
    printf("]");
    printf("\n\n");

    return 0;

}
