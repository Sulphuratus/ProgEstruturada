#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int num, max, min, num1, num2, soma, teste;
    srand(time(0));

    max = 99;
    min = 0;

    num1 = min + rand() % (max - min + 1);
    num2 = min + rand() % (max - min + 1);

    soma = num1 + num2;

    while(num != soma){
        printf("Digite seu palpite para a soma de dois numeros sorteados entre 0 e 99: ");
        scanf("%d", &num);
        if(num == soma){
            printf("\n\nParabés, voce adivinhou!! \n\n");
            break;
        }else{
            printf("\n\nNao foi desta vez, seu numero é diferente da soma!!\n");
            printf("\nDeseja tentar novamente? Digite: "); 
            printf("\n< 1 > = Tentar novamente");
            printf("\n< Qualquer numero > = Sair\n");
            scanf("%d", &teste);
            if(teste != 1){
                printf("\n *.*.* ATÉ LOGO!! *.*.*. \n\N");
                break;
            }else{

            }
        }
    }

    // if(num == soma){
    //     printf("\n\nParabés, voce adivinhou!! \n\n");
    // }else{
    //     printf("\n\nNao foi desta vez, seu numero é diferente da soma!! \n\n");
    // }

    return 0;
}