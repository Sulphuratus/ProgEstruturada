#include<stdio.h>

int main(){
    int i;
    float resto;

    for ( i = 0; i < 100; i++){
        resto = i%2;
        if(resto == 0 && i > 0){
            printf("Numero par: %d\n", i);
        }
    }
    return 0;

}