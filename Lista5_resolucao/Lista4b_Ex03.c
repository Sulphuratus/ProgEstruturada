#include<stdio.h>

int main(){

    int num, i, j;
    int a;

    printf("Digite o número de linhas desejado: ");
    scanf("%d", &num);

    for (i=1; i < num+1; i++){
        for(j=1; j <= i; j++){
            a = i;
            printf("%d",a);
        }
        printf("\n");
    }

    //printf("a= %d",a);

    return 0;

}