#include<stdio.h>

int main()
{
    FILE *origem;
    char aux, inicial;
    char Linha[100];
    char *result;
    int count = 0;
    int i;
    int num = 10;


    origem = fopen("pokemon.txt", "r");
    aux = fgetc(origem);

    if ( origem == NULL)
    {
        printf("Erro ao ler arquivo!!");
        return 1;
    }
    else
    {

        while (num != 0)
        {
            printf("\n===================   M E N U  ======================");
            printf("\n");
            printf("\n1. Ler e imprimir o conteúdo do arquivo na tela.");
            printf("\n2. Contar e exibir a quantidade de linhas na tela.");
            printf("\n3. Digite uma letra para exibir os pokemons que começam com esta letra.");
            printf("\n0. Sair do programa");
            printf("\n\nDigite o numero correspondente a opcao desejada:  ");
            scanf("%d", &num);

            if (num == 1)
            {
                origem = fopen("pokemon.txt", "r");
                aux = fgetc(origem);
                while (aux != EOF)
                {
                    printf("%c", aux);
                    aux = fgetc(origem);

//                    if (aux == '\n')
//                    {
//                        count++;
//                    }

                }fclose(origem);

            }
            else if ( num == 2 )
            {
                origem = fopen("pokemon.txt", "r");
                while (!feof(origem) )
                {
                    //printf("%c", aux);
                    aux = fgets(Linha, 100, origem);

                    //if (aux == '\n')
                    //{
                        count++;
                    //}
                }
                fclose(origem);
                printf("\n\nTexto do arquivo tem %d linhas!!\n\n", count-1);
                count = 0;

            }
            else if( num == 3 )
            {
                origem = fopen("pokemon.txt", "r");
                printf("\n\nDigite uma letra:\n");
                scanf(" %c", &inicial);

                while (!feof(origem) )
                {
                    fgets(Linha, 100, origem);
                    if (inicial == Linha[0])
                    {
                        printf("%s\n", Linha);
                    }

                }
                fclose(origem);
            }

        }

        fclose(origem);

        return 0;
    }
}
