#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int joga_dado(){


    int i, min, max, face;
    min = 1;
    max = 6;

    face = min + rand()%(max - min + 1);

    return face;
}



int main(){

    srand(time(NULL));
    double percentual1, percentual2, percentual3, percentual4, percentual5, percentual6;
    double f1, f2, f3, f4, f5, f6;
    int i, jogadas, cont6, cont5, cont4, cont3, cont2, cont1, face;

    jogadas = 1000;

    for (i = 0; i < jogadas; i++)
    {

        face = joga_dado();
        //printf("\nface = %d", face);

        if( face == 6)
        {
            cont6 ++;

        }else if( face == 5)
        {
            cont5 ++;
        }else if( face == 4)
        {
            cont4 ++;
        }else if( face == 3)
        {
            cont3 ++;
        }else if( face == 2)
        {
            cont2 ++;
        }else if( face == 1)
        {
            cont1 ++;
        }
    }

     f6 = cont6;
     f5 = cont5;
     f4 = cont4;
     f3 = cont3;
     f2 = cont2;
     f1 = cont1;

     percentual1 = f1/jogadas*100;
     percentual2 = f2/jogadas*100;
     percentual3 = f3/jogadas*100;
     percentual4 = f4/jogadas*100;
     percentual5 = f5/jogadas*100;
     percentual6 = f6/jogadas*100;


    printf("\nNumero 1: %.1f %% das ocorrencias.", percentual1);
    printf("\nNumero 2: %.1f %% das ocorrencias.", percentual2);
    printf("\nNumero 3: %.1f %% das ocorrencias.", percentual3);
    printf("\nNumero 4: %.1f %% das ocorrencias.", percentual4);
    printf("\nNumero 5: %.1f %% das ocorrencias.", percentual5);
    printf("\nNumero 6: %.1f %% das ocorrencias.", percentual6);


    return 0;
}
