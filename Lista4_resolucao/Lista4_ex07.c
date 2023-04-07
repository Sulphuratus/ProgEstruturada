#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int num, i, max, min, count;
    srand(time(0));

    count = 0;
    min = 100;
    max = 999;

    while (count < 3){

        num = min + rand() % (max - min +1);
        if(num % 5 == 0){
            count += 1;
            printf("%d, ", num);
        }
        
    }

    return 0;


}