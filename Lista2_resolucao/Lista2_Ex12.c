#include<stdio.h>

int main(){
    int vitEstrela, derEstrela, empEstrela, vitCometa, derCometa, empCometa;
    double somaEstrela, somaCometa, percEstrela, percCometa;
    double pvitEst, pempEst, pderEst, pvitCom, pempCom, pderCom;

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

    somaEstrela = vitEstrela + empEstrela + derEstrela;
    somaCometa = vitCometa + empCometa + derCometa;

    pvitEst = vitEstrela/somaEstrela*100;
    pempEst = empEstrela/somaEstrela*100;
    pderEst = derEstrela/somaEstrela*100;

    pvitCom = vitCometa/somaCometa*100;
    pempCom = empCometa/somaCometa*100;
    pderCom = derCometa/somaCometa*100;


    printf("\n\n==========  RESULTADO FINAL  ==========   \n");
    printf("\nEquipe Estrela: \n");
    printf("%d Vitorias = %.0lf%%      %d Empates = %.0lf%%       %d Derrotas = %.0lf%% \n", vitEstrela, pvitEst, empEstrela, pempEst, derEstrela, pderEst);

    printf("\n\nEquipe Cometa: \n");
    printf("%d Vitorias = %.0lf%%      %d Empates = %.0lf%%       %d Derrotas = %.0lf%% \n", vitCometa, pvitCom, empCometa, pempCom, derCometa, pderCom);

    return 0;
}

