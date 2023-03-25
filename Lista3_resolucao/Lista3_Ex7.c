#include<stdio.h>

int main(){
    int i;
    float resto;

    for ( i = 0; i <= 100; i++){
        resto = i%4;
        if(resto == 0 && i != 0){
            printf("Plim, ");
        }else{
            printf("%d, ", i);
        }
    }
    return 0;

}