#include<stdio.h>

int main(){

    int vida, ataque, defesa;
    double xp;

    printf("Indique o stat VIDA do jogador:");
    scanf("%d", &vida);

    printf("Indique o stat ATAQUE do jogador:");
    scanf("%d", &ataque);

    printf("Indique o stat DEFESA do jogador:");
    scanf("%d", &defesa);

    xp = (vida+ataque+defesa)/3;

    if( xp >= 0 && xp <= 25 ){
        printf("Jogador é novato.");
    }else{
        if( xp > 25 && xp <= 50 ){
            printf("Jogador é mago.");
        }else{
            if( xp > 50 && xp <= 75 ){
                printf("Jogador é mago supremo.");
            }else{
                if( xp > 75 && xp <= 100 ){
                    printf("Jogador é lorde das magias.");
                }else{
                
                }
            }
        }
    }
    
    return 0;
    
}