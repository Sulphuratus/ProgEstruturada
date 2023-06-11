#include<stdio.h>

int main(){

    int linhas, colunas,linhasbh, colunasbh, vmax, vmaxbh;
    int i, j, k, n, m;
    char buffer[250];
    char bufferbh[250];

    FILE *origem;
    FILE *destino;
    FILE *origem1;
    FILE *destino1;

    origem = fopen("bird.ppm", "r");
    destino = fopen("birdgray.ppm", "w");

    origem1 = fopen("birdgray.ppm", "r");
    destino1 = fopen("birdblackwhite.ppm", "w");

    if(origem == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }else{
        fgets(buffer, 250, origem); //P3 - linha1
        fgets(buffer, 250, origem); //Comentário- linha 2
        fscanf(origem, "%d %d", &colunas, &linhas); // sei o padrão da linha, dois inteiros separados por espaço
        fscanf(origem, "%d", &vmax); // quarta linha = sei o padrão da linha, um inteiro
        int matriz[linhas][colunas][3];

        fprintf(destino, "P3\n");
        fprintf(destino, "#Feito por Joao\n");
        fprintf(destino, "%d %d\n", colunas, linhas);
        fprintf(destino, "%d\n", vmax);

        for(i=0; i<linhas;i++){
            for(j=0;j<colunas;j++){
                n = 0;
                for(k=0; k<3; k++){// valores do r, g, b
                    fscanf(origem,"%d", &matriz[i][j][k]);
                    n = n + matriz[i][j][k];
                    //printf("%d", matriz[i][j][k]);
                }
                n = n / 3; // Calculando a média de n = valores de r, g e b tem q ser igual
                fprintf(destino, "%d %d %d ", n, n, n);
            }

        }

    }

    fclose(origem);
    fclose(destino);

    if(origem1 == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }else{

        fgets(bufferbh, 250, origem1); //P3 - linha1
        fgets(bufferbh, 250, origem1); //Comentário- linha 2
        fscanf(origem1, "%d %d", &colunasbh, &linhasbh); // sei o padrão da linha, dois inteiros separados por espaço
        fscanf(origem1, "%d", &vmaxbh); // quarta linha = sei o padrão da linha, um inteiro
        int matrizbh[linhasbh][colunasbh][3];

        fprintf(destino1, "P3\n");
        fprintf(destino1, "#Feito por Joao\n");
        fprintf(destino1, "%d %d\n", colunasbh, linhasbh);
        fprintf(destino1, "%d\n", vmaxbh);

        for(i=0; i<linhasbh;i++){
            for(j=0;j<colunasbh;j++){
                m = 0;
                for(k=0; k<3; k++){// valores do r, g, b
                    fscanf(origem,"%d", &matrizbh[i][j][k]);
                    m = m + matrizbh[i][j][k];
                    //printf("%d", matriz[i][j][k]);
                }
                //m = m / 3; // Calculando a média de n = valores de r, g e b tem q ser igual
                if (m >= 128)
                {
                    m = 255;
                }else{
                    m = 0;
                }
                fprintf(destino1, "%d %d %d ", m, m, m);
            }

        }

    }
    fclose(origem1);
    fclose(destino1);
    return 0;
}
