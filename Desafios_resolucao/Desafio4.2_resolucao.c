#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i, n;
    int soma = 0;
    n = 1000;

    for(i = 1; i < n; i++){
        if(i % 3 == 0 || i % 5 == 0){
            soma += i;
        } 
    }

    printf("A soma dos multiplos de 3 e 5 até %d eh: %d \n\n", n, soma);


    return 0;
}