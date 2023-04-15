#include<stdio.h>

int main(){

    int num, i, j;
    //int a = 0;
    char a = '*';

    printf("Digite o número de linhas desejado: ");
    scanf("%d", &num);

    for (i=0; i < num; i++){
        for(j=0; j <= i; j++){
            printf("%c",a);
        }
        printf("\n");
    }

    //printf("a= %d",a);

    return 0;

}