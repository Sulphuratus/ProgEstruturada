#include<stdio.h>

int main(){

    int num, i, j, k;
    char a = '*';

    printf("Digite o número de linhas desejado: ");
    scanf("%d", &num);

    for (i=0; i < num; i++){
        
        for(k = (num-i); k > 0; k--)
        {
            printf(" ");
        }
        for(j=0; j <= i; j++){
            printf("%c",a);
        }
        printf(" ");
        for(j=0; j <= i; j++)
        {
            printf("%c",a);
        }
        printf("\n");
    }

    return 0;

}