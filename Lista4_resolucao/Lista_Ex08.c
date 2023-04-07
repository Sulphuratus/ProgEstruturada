#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int numSorteio, i, max, min, count;
    int num1, num2, num3, num4, num5, num6, num7;

    srand(time(0));

    count = 0;
    min = 1;
    max = 61;

    numSorteio = min + rand() % (max - min + 1);
    num1 = numSorteio;

    //for (i = 0; i < 6; i++)
    //while (num1 == num2 || num3 == num2 || num4 == num3 || num5 == num4 || num6 == num5)
    //{
        //num1 = numSorteio;
        
        numSorteio = min + rand() % (max - min + 1);
        if (numSorteio == num1)
        {
            while (numSorteio == num1)
            {
                numSorteio = min + rand() % (max - min + 1);
                num2 = numSorteio;
                printf("Num2: %d", num2);
                
            }
            
        }
        num2 = numSorteio;
        numSorteio = min + rand() % (max - min + 1);

        if (numSorteio == num2)
        {
            while (numSorteio == num2)
            {
                numSorteio = min + rand() % (max - min + 1);
                num3 = numSorteio;
                printf("Num3: %d", num3);
                //num3 = numSorteio;
            }  
        }

        num3 = numSorteio;
        numSorteio = min + rand() % (max - min + 1);

        if (numSorteio == num3)
        {
            while (numSorteio == num3)
            {
                numSorteio = min + rand() % (max - min + 1);
                num3 = numSorteio;
                printf("Num3: %d", num3);
                //num3 = numSorteio;
            }
             
        }

        num4 = numSorteio;
        numSorteio = min + rand() % (max - min + 1);

        if (numSorteio == num4)
        {
            while (numSorteio == num4)
            {
                numSorteio = min + rand() % (max - min + 1);
                num4 = numSorteio;
                printf("Num4: %d", num4);
                //num4 = numSorteio;
            }
            
        }
        num5 = numSorteio;
        numSorteio = min + rand() % (max - min + 1);

        if (numSorteio == num5)
        {
            while (numSorteio == num5 )
            {
                numSorteio = min + rand() % (max - min + 1);
                num5 = numSorteio;
                printf("Num5: %d", num5);
                //num5 = numSorteio;
            }

        }
        num6 = numSorteio;

        // if (num6 == numSorteio || num6 == 0)
        // {
        //     while (num6 == numSorteio || num6 == 0)
        //     {
        //         numSorteio = min + rand() % (max - min + 1);
        //         num6 = numSorteio;
        //         printf("Num6: %d", num6);
        //         //num6 = numSorteio;
        //     }
            
        // }

        // num6 = numSorteio;

        // else if (num6 == 0)
        // {
        //     while (num6 == numSorteio)
        //     {
        //         numSorteio = min + rand() % (max - min + 1);
        //         //num6 = numSorteio;
        //     }
        //     num6 = numSorteio;
        //     numSorteio = min + rand() % (max - min + 1);
        // }
    //}

    printf("Numeros sorteados foram: %d, %d, %d, %d, %d, %d \n\n", num1, num2, num3, num4, num5, num6);

    return 0;
}