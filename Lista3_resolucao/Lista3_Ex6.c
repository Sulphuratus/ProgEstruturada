#include<stdio.h>

int main(){
    int i;
    float resto;

    for ( i = 300; i > 100; i--){
        resto = i%4;
        if(resto == 0){
            printf("Multiplo de 4: %d\n", i);
        }
    }
    return 0;

}