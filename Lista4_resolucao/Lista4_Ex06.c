#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int num, i;
    srand(time(0));

    for (i = 0; i < 10; i++){

        num = rand() % 100;
        printf("%d, ", num);

    }

    return 0;

}