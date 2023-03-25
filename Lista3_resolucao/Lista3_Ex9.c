#include<stdio.h>

int main(){

    int i, soma;
    soma = 0;

    for ( i = 1; i <= 10; i++){
        printf("%d\n", i);
        soma += i;                   
    }
    printf("O valor da soma dos numeros é: %d\n\n", soma);

    return 0;
}