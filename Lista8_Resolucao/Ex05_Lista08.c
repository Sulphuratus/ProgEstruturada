#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    FILE *destino;
    destino = fopen("Ex05_TextoAleatorio.txt", "w");

    int min_lin, max_lin, min_let, max_let, min_pal, max_pal;
    int min_ascii, max_ascii;
    int num_linha, num_palavra, num_letra, let_aleatoria;
    int i, j, k;
    srand(time(NULL));

    min_lin = 10;
    max_lin = 20;

    min_pal = 5;
    max_pal = 20;

    min_let = 1;
    max_let = 15;

    min_ascii = 65;
    max_ascii = 90;

    if (destino == NULL)
    {
        printf("Erro ao ler arquivo, não pôde ser aberto!!");
        return 1;
    }
    else
    {
        num_linha = min_lin + rand()%(max_lin-min_lin+1);
        fprintf(destino, "\nNum Linhas: %d", num_linha);

        num_palavra = min_pal + rand()%(max_pal-min_pal+1);
        fprintf(destino, "\nNum palavras: %d\n\n", num_palavra);
        //num_letra = min_let + rand()%(max_let-min_let+1);

        for (i = 0; i < num_linha; i++)
        {
            for (j = 0; j < num_palavra; j++)
            {
                num_letra = min_let + rand()%(max_let-min_let+1);
                for (k = 0; k < num_letra; k++)
                {
                    let_aleatoria = min_ascii + rand()%(max_ascii-min_ascii+1);
                    fprintf(destino, "%c", let_aleatoria);
                }
                fprintf(destino, " ");

            }
            fprintf(destino, "\n");
        }



    }
    fclose(destino);

    return 0;
}
