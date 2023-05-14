#include<stdio.h>
#include<stdlib.h>

int fatorial(int num)
{
    int mult = 1;

    //printf("Fatorial de: %d\n", num);

    while( num > 0){
        mult = mult*(num);
        num--;
    }
    return mult;
}


int main()
{
    int n = 5;

    printf("\n\n\Fatorial de: %d = %d.", n, fatorial(n));

    return 0;

}
