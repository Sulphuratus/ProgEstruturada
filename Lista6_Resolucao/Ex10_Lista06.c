#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, j, k, l, contl, contc, contt;
    contt = 0;
    int linha[3];
    int coluna[3];
    double matriz[3][3], converte;
    double valorl, valorc;
    int min = 0;
    int max = 100;



    srand(time(NULL));

// **** Gerando a matriz inicial 3x3 com números aleatórios entre 0 e 1 e imprimindo

    for(i=0; i < 3; i++)
    {
        for(j=0; j < 3; j++)
        {
            matriz[i][j] = (min + rand()%(max - min + 1));
            matriz[i][j] = matriz[i][j]/100;
            matriz[1][j] = 0.1;
            printf("%5.1f, ", matriz[i][j]);

        }printf("\n");
    }

// ****** Percorrendo as colunas para ver se a linha está com elementos iguas

    for(i=0; i < 3; i++)
    {
        contl = 0;
        for(j=0; j < 2; j++)
        {
            k = j + 1;
            if ( matriz[i][k] == matriz[i][j] )
            {
                contl ++;
                valorl = matriz[i][j];
            }

        }
        if(contl == 2){
            contt ++;
            linha[i] = i+1;
            printf("\nLinha com elementos iguais = %d", linha[i]);
            printf("\nValor repetido: %.1f\n", valorl);
        }else{
            linha[i] = 0;
        }
    }

// Variando as linhas pra verificar se as colunas têm elementos iguais:

    for(j=0; j < 3; j++)
    {
        contc = 0;
        for(i=0; i < 2; i++)
        {
            k = i + 1;
            if ( matriz[k][j] == matriz[i][j] )
            {
                contc ++;
                valorc = matriz[i][j];
            }

        }
        if(contc == 2){
            contt ++;
            coluna[j] = j+1;
            printf("\nColuna com elementos iguais = %d", coluna[j]);
            printf("\nValor repetido: %.1f\n", valorc);
        }else{
            coluna[j] = 0;
        }
    }

    if (contt == 0){
        printf("\nMatriz sem colunas nem linhas iguais!\n");
    }

    //printf("\nContl = %d, Contc= %d", contl, contc);

    return 0;

}
