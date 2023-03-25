#include<stdio.h>

int main(){

    int i, soma, resto;
    soma = 0;

    for ( i = 0; i <= 100; i++){
        resto = i%2;
        if(resto == 0){
            printf("%d, ", i);
            soma += i;
        }                       
    }
    printf("\n---------");
    printf("\nA soma dos numeros pares entre 0 e 100 é: %d\n\n", soma);

    return 0;
}