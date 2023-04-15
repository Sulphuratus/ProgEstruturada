#include<stdio.h>

int main(){

    int num, i, j, k;
    char a = '*';

    printf("Digite o número de linhas desejado: ");
    scanf("%d", &num);

    for (i=0; i < num; i++){
        if( i < num/2 )
        {
            for(j=0; j <= i; j++)
            {
                printf("%c",a);
            }
            printf("\n");
        }else{
            for(j=num; j >= i+1; j--)
            {
                printf("%c",a);
            }
            printf("\n");
        }

        
    }

    return 0;

}