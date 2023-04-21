#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){

    srand(time(NULL));
    int min, max, i, j, contv, contc;
    int vetor[5], cubo[5];
    min = 0;
    max = 10;

    //num = min + rand()%( max - min + 1 )

    for (i = 0; i < 5; i++)
    {
        vetor[i] = min + rand()%( max - min + 1 );
        cubo[i] = pow(vetor[i], 3);
    }
    contv = 0;
    contc = 0;
    for (i = 0; i < 11 ; i++)
        {
        if ( i < 5 )
        {
            printf("%d,   ", vetor[contv] );
            contv ++;
        }
        else if (i == 5)
        {
            printf("\n");
        }
        else
        {
            printf("%d,  ", cubo[contc] );
            contc ++;
        }
}
    return 0;
}


