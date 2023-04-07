#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int max, min, count;
    int num1, num2, num3, num4, num5, num6;

    srand(time(0));

    min = 1;
    max = 61;

    while (num1 == 0 || num1 == num2 || num3 == num2 || num4 == num3 || num5 == num4 || num6 == num5)
    {

        num1 = min + rand() % (max - min + 1);
        num2 = min + rand() % (max - min + 1);
        num3 = min + rand() % (max - min + 1);
        num4 = min + rand() % (max - min + 1);
        num5 = min + rand() % (max - min + 1);
        num6 = min + rand() % (max - min + 1);
  
    }

    printf("Numeros sorteados foram: %d, %d, %d, %d, %d, %d \n\n", num1, num2, num3, num4, num5, num6);

    return 0;
}