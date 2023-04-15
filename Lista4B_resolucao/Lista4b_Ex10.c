#include<stdio.h>

int main(){

    int num, i, j, k;
    int a;

    printf("Digite o número de linhas desejado: ");
    scanf("%d", &num);

    for (i=1; i <= num+1; i++){
        if( i <= num/2+1 )
        {
            for(j=1; j <= i; j++)
            {
                a = i;
                printf("%d  ",a);
            }
            printf("\n");
        }else{
            if (num % 2 == 0)
            {
                for(j=num+1; j > i-1; j--){
                    a = num-i+2;
                    printf("%d  ",a);
                }
            printf("\n");
            }else
            {
                for(j=num; j > i-1; j--){
                    a = num-i+1;
                    printf("%d  ",a);
                }
            printf("\n");
            }
            
        }

        
    }

    return 0;

}