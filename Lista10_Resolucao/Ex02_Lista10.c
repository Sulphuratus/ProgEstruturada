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
    destino = fopen("birdColorMirror.ppm", "w");

    origem1 = fopen("birdgray.ppm", "r");
    destino1 = fopen("birdgrayMirror.ppm", "w");

    // =========================================================================
    // IMAGEM EM CORES

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
            for(j=0;j<colunas;j++){;
                for(k=0; k<3; k++){// valores do r, g, b
                    fscanf(origem,"%d", &matriz[i][j][k]);
                }

            }

        }

        for(i=0; i<linhas;i++){
            for(j=colunas;j>0;j--){;
                for(k=0; k<3; k++){// valores do r, g, b
                    fprintf(destino, "%d ", matriz[i][j][k]);
                    fprintf(destino, "\n");

                }
            }

        }

    }

    fclose(origem);
    fclose(destino);

// ============================================================
// IMAGEM EM ESCALA DE CINZA

    if(origem1 == NULL){
        printf("Erro ao abrir o arquivo 1.");
        return 1;
    }else{

        fgets(bufferbh, 250, origem1); //P3 - linha1
        fgets(bufferbh, 250, origem1); //Comentário- linha 2
        fscanf(origem1, "%d %d", &colunasbh, &linhasbh);
        fscanf(origem1, "%d", &vmaxbh);
        int matrizbh[linhasbh][colunasbh][3];

        fprintf(destino1, "P3\n");
        fprintf(destino1, "#Feito por Joao\n");
        fprintf(destino1, "%d %d\n", colunasbh, linhasbh);
        fprintf(destino1, "%d\n", vmaxbh);

        for(i=0; i<linhasbh;i++){
            for(j=0;j<colunasbh;j++){
                for(k=0; k<3; k++){// valores do r, g, b
                    fscanf(origem1,"%d", &matrizbh[i][j][k]);
                }

            }

        }

        for(i=0; i<linhasbh;i++){
            for(j=colunasbh;j>0;j--){;
                for(k=0; k<3; k++){// valores do r, g, b
                    fprintf(destino1, "%d ", matrizbh[i][j][k]);
                    fprintf(destino1, "\n");
                }
            }

        }


    }
    fclose(origem1);
    fclose(destino1);
    return 0;
}
