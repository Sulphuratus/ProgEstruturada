#include<stdio.h>

int main()
{
    FILE *origem;
    char aux;
    int indice = 1;
    int count = 0;

    origem = fopen("Ex08_textoBase.txt", "r");
    aux = getc(origem);

    if ( origem == NULL)
    {
        printf("Erro ao ler arquivo!!");
        return 1;
    }
    else
    {
        printf("\n%d. ", indice);
        while ( aux != EOF)
        {
            if (aux == '\n' && indice < 11)
            {
                indice++;
                printf("\n%d. ", indice);
                aux = getc(origem);
            }
            else
            {
                printf("%c", aux);
                aux = getc(origem);
            }
        }
    }

    fclose(origem);

    printf("\n\nTexto do arquivo tem %d linhas!!", count);

    return 0;

}
