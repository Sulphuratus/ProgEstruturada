#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){


    int defesa, chute, teste, jogador, goleiro;
    srand(time(0));
    
    int max = 9;
    int min = 0;
    jogador = 0;
    goleiro = 0;
    teste = 1;

    printf("\n\n                                                                    ");
    printf("\n===== >      D I S P U T A    D O S   P E N A L T I S         < ===== ");
    printf("\n\n  ================================================================= ");
    printf("\n  |        |1|        |         |2|          |         |3|        |");
    printf("\n  |                   |                      |                    |");
    printf("\n  |                   |                      |                    |");
    printf("\n  |        |4|        |         |5|          |         |6|        |");
    printf("\n  |                   |                      |                    |");
    printf("\n  |                   |                      |                    |");
    printf("\n  |        |7|        |         |8|          |         |9|        |");
    printf("\n  |                   |                      |                    |\n\n");

    while(teste == 1){

        defesa = min + rand() % (max - min + 1);

        printf("Digite sua posicao de 1 a 9 para o chute ao gol: ");
        scanf("%d", &chute);
        if(chute == defesa){
            goleiro += 1;
            printf("\nGoleiro defendeu, sua posição foi a mesma que a do goleiro!");

        }else{
            jogador += 1;
            printf("\n\n*.*.*.* Goooool!!! Parabens, seu chute pegou o goleiro desprevenido!! .*.*.*.\n");

        }
        printf("\ndeseja tentar novamente?\n");
            printf("\nDigite < 1 > = Tentar");
            printf("\nDigite < 2 > = Sair\n\n");
            scanf("%d", &teste);
                if(teste != 1){
                    break;
                }  
    }

    printf("\n\nNumero de pontos do jogador: %d\n", jogador);
    printf("\nNumero de pontos do golero: %d\n\n", goleiro);

    return 0;

}