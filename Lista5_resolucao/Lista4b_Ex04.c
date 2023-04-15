#include<stdio.h>

int main(){

    int num, i, j;
    int a;
    int cont = 0;
    //char a = '*';

    printf("Digite o número de linhas desejado: ");
    scanf("%d", &num);

    for (i=1; i < num+1; i++){
        
        for(j=1; j <= i; j++){
            cont++;
            printf("%d ",cont);
        }
        printf("\n");
    }

    return 0;

}