#include<stdio.h>

int main(){
    int num, i, j, k;
    int cont = 0;
    int col = 0;

    printf("Digite o número de linhas desejado: ");
    scanf("%d", &num);


    for (i=1; i <= num; i++){
        for(k = (num-i); k > 0; k--)
        {
            printf(" ");
        }
        for(j=1; j <= i; j++)
        {
            cont++;
            printf("%d ",cont);
        }
        printf("\n");
    }

    // col = num;
    // for (i=1; i < num+1; i++){
        
    //     for(j=col*2; j >= i; j--){
    //         if (j == col+1){
    //             cont++;
    //             printf("%d",cont);
    //         }
    //         else
    //         {
    //             printf(".");
    //         }
            
    //     }
    //     printf("\n");
    //     col--;

    // }


    // for (i=1; i < num+1; i++){
        
    //     for(j=num*2; j >= i; j--){
    //     //for(j=1; j <= i; j++){
            
    //         if (j == num+1){
    //             cont++;
    //             printf("%d",cont);
                
    //         }else{
    //             printf("*");
    //         }
            
    //     }
    //     printf("\n");
    // }

    return 0;

}