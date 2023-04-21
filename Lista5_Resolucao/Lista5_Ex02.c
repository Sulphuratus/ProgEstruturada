#include<stdio.h>

int main(){

    int vetor[10];
    int i;
    int cont = 0;

    for (i = 2; i <=20; i++ )
    {
        if (i % 2 == 0){
            vetor[cont] = i;
            cont += 1;
        }
    }

    for (i = 0; i < 10; i++){
        printf("%d, ", vetor[i]);
    }

    return 0;

}