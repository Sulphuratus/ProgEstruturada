#include<stdio.h>

int main(){
    int i;
    float resto;

    for ( i = 100; i > 0; i--){
        resto = i%2;
        if(resto != 0){
            printf("Numero impar: %d\n", i);
        }
    }
    return 0;

}