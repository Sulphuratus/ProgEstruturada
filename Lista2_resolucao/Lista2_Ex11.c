#include<stdio.h>

int main(){
    int vitEstrela, derEstrela, empEstrela, vitCometa, derCometa, empCometa, pEstrela, pCometa;

    printf("\nDigite os dados para cada Equipe.\n\n");

    printf("Número de vitórias da equipe Estrela: ");
    scanf("%d", &vitEstrela);

    printf("Número de empates da equipe Estrela: ");
    scanf("%d", &empEstrela);

    printf("Número de derrotas da equipe Estrela: ");
    scanf("%d", &derEstrela);

    printf("\nNnúmero de vitórias da equipe Cometa: ");
    scanf("%d", &vitCometa);

    printf("Número de empates da equipe Cometa: ");
    scanf("%d", &empCometa);

    printf("Número de derrotas da equipe Cometa: ");
    scanf("%d", &derCometa);

    pEstrela = vitEstrela*3+empEstrela;
    pCometa = vitCometa*3+empCometa;

    printf("\n\n==========  RESULTADO FINAL  ==========   \n");
    printf("\nEquipe Estrela: \n");
    printf("Vitorias = %d      Empates = %d       Derrotas = %d \n", vitEstrela, empEstrela, derEstrela);
    printf("Pontuacao final: %d pontos.", pEstrela);

    printf("\n\nEquipe Cometa: \n");
    printf("Vitorias = %d      Empates = %d       Derrotas = %d \n", vitCometa, empCometa, derCometa);
    printf("Pontuacao final: %d pontos.\n\n", pCometa);

    return 0;
}
