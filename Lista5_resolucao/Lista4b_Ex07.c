#include<stdio.h>

int main(){

    int num, i, j;
    int a;

    printf("Digite o número de linhas desejado: ");
    scanf("%d", &num);
   

    for (i=1; i <= num; i++){
        
        for(j=num+1; j > i; j--){
            a = j-i;
            printf("%d ",a);
        }
        printf("\n");
    }

    return 0;

}