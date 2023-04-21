#include<stdio.h>

int main(){

    int A[10], B[10], soma[10];
    int i;
    int conta = 0;
    int contb = 0;

    for (i = 2; i <=20; i++ )
    {
        if (i % 2 == 0){
            A[conta] = i;
            conta += 1;
        }
        if ( i > 9 && i < 20)
        {
            B[contb] = i;
            contb += 1;
        }
    }

    printf("\nVetor A: \n");
    for (i = 0; i < 10; i++){
        printf("%d, ", A[i]);
    }
    printf("\n\n");

    printf("\nVetor B: \n");
    for (i = 0; i < 10; i++){
        printf("%d, ", B[i]);
    }
    printf("\n\n");

    printf("\nVetor Soma: \n");
    for (i = 0; i < 10; i++){
        soma[i] = A[i] + B[i];
        printf("%d, ", soma[i]);
    }
    printf("\n\n");

    return 0;

}