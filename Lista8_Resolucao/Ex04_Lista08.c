#include<stdio.h>
#include<stdlib.h>

int main()
{

    FILE *guarda_nromanos;
    guarda_nromanos = fopen("Ex4_nromanos.txt","w");

    int i, num;
    fprintf(guarda_nromanos, "Numeros   Numeros \n");
    fprintf(guarda_nromanos, "decimais  Romanos\n");
    fprintf(guarda_nromanos, "==================\n");


    if (guarda_nromanos == NULL)
    {
        printf("Arquivo origem foi nao foi aberto.\n");
        return 1;
    }
    else
    {

        for (i = 1; i <= 50; i++)
        {
            num = i;
            fprintf(guarda_nromanos, "  %d        ",i);

            while(num != 0)
            {
                if (num >= 50)    // 50 - l
                {
                    fprintf(guarda_nromanos, "l");
                    num -= 50;
                }


                if (num >= 40)    // 40 - xl
                {
                    fprintf(guarda_nromanos, "xl");
                    num -= 40;
                }

                else if (num >= 10)    // 10 - x
                {
                    fprintf(guarda_nromanos, "x");
                    num -= 10;
                }

                else if (num >= 9)     // 9 - ix
                {
                    fprintf(guarda_nromanos, "ix");
                    num -= 9;
                }

                else if (num >= 5)     // 5 - v
                {
                    fprintf(guarda_nromanos, "v");
                    num -= 5;
                }

                else if (num >= 4)     // 4 - iv
                {
                    fprintf(guarda_nromanos, "iv");
                    num -= 4;
                }

                else if (num >= 1)     // 1 - i
                {
                    fprintf(guarda_nromanos, "i");
                    num -= 1;
                }

            }
            fprintf(guarda_nromanos, "\n");

        }
    }

    return 0;

}


