#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){

    FILE *arq_origem;
    FILE *arq_destino;
    int c;
    char aux;

    arq_origem = fopen("Ex09_textoBase.txt", "r");
    arq_destino = fopen("Ex09_convertido.txt", "w");

    if( arq_origem == NULL )
    {
        printf("Não foi possível abrir o arquivo de ORIGEM!");

    }
    else if (arq_destino == NULL)
    {
        printf("Não foi possível abrir o arquivo de DESTINO!");

    }
    else
    {
        aux = (fgetc(arq_origem));
        while (aux != EOF)
        {
            fputc(toupper(aux), arq_destino);
            aux = (fgetc(arq_origem));
        }

    }
    fclose(arq_origem);
    fclose(arq_destino);

    return 0;
}
