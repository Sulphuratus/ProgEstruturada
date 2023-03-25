#include<stdio.h>

int main(){
    int i;
    float resto;

    for ( i = 100; i < 200; i++){
        resto = i%3;
        if(resto == 0){
            printf("Multiplo de 3: %d\n", i);
        }
    }
    return 0;

}