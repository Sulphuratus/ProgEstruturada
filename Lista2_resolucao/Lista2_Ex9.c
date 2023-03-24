#include<stdio.h>

int main(){

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if( 100 < num && num < 200){
        printf("\nO numero %d está entre 100 e 200.\n\n", num);
    }else{
        printf("\nO numéro %d está fora da faixa de 100 a 200.\n\n", num);
    
    }

    return 0;
}