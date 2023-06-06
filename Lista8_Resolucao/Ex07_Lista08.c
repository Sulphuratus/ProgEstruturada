#include<stdio.h>

int main()
{
    FILE *origem;
    char aux;
    int count = 0;

    origem = fopen("lorem.txt", "r");
    aux = getc(origem);

    if ( origem == NULL)
    {
        printf("Erro ao ler arquivo!!");
        return 1;
    }
    else
    {
        while (aux != EOF)
        {
           printf("%c", aux);
           aux = getc(origem);

           if (aux == '\n')
            {
                count++;
            }
        }

    }

    fclose(origem);

    printf("\n\nTexto do arquivo tem %d linhas!!", count);

    return 0;

}
