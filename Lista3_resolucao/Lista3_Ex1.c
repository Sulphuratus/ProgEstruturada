#include<stdio.h>

int main (){

    int nskin;
    float total;

    printf("\nQuantas unidades de Skins deseja comprar? ");
    scanf("%d", &nskin);

    if (nskin < 10){
        total = nskin * 1.3;
    }else if(nskin >= 10){
        total = nskin * 1.0;
    }
    printf("\nO total da compra será: R$ %.2f\n\n", total);

    return 0;

}