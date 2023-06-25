#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

    FILE *target;
    target = fopen("senhas.txt", "w");

    srand(time(0));
    int numero, caracteres, min_sorteio, max_sorteio, num_min, num_max, num_senhas, sorteio, i, j, maiuscula, minuscula, especiais;
    int cont = 0;
    min_sorteio = 33;
    max_sorteio = 122;

    printf("\n >>>>>   Gerador de senhas aleatorias   <<<<<<<< \n");

    printf("\nDigite a quantidade de senhas a serem criadas: ");
    scanf("%d", &num_senhas);

    printf("\nDigite o número minimo de caracteres na senha: ");
    scanf("%d", &num_min);

    printf("\nDigite o número maximo de caracteres na senha: ");
    scanf("%d", &num_max);

    printf("\nAs senhas terão letras maiusculas? (1 = positivo, 0 = negativo)  ");
    scanf("%d", &maiuscula);

    printf("\nAs senhas terão letras minusculas? (1 = positivo, 0 = negativo)  ");
    scanf("%d", &minuscula);

    printf("\nAs senhas terão letras caracteres especiais? (1 = positivo, 0 = negativo)  ");
    scanf("%d", &especiais);

    printf("\nAs senhas terão numeros? (1 = positivo, 0 = negativo)  ");
    scanf("%d", &numero);

    printf("\n\nGerando senhas... ");
    printf("\nGravando senhas em um arquivo de texto 'senhas.txt'\n\n");
    //scanf("%d", &num);

    if (target == NULL)
    {
        printf("Erro ao ler arquivo, não pôde ser aberto!!");
        return 1;
    }
    else
    {

        for( j = 0; j < num_senhas; j++)
        {
            caracteres = num_min + rand()%(num_max - num_min + 1 );

            fprintf(target,"\n Senha %d, No de caracteres: %d = ", j+1, caracteres);

            //for (i = 0; i < caracteres; i++)
            i = 0;
            while (i < caracteres)
            {
                //sorteio = min_sorteio + rand()%(max_sorteio - min_sorteio + 1 );

                //if (sorteio <= 90 && sorteio >= 97)

                do
                {
                    sorteio = min_sorteio + rand()%(max_sorteio - min_sorteio + 1 );
                    //fprintf(target, "\n\nSorteado: %d \n\n", sorteio);
                }
                while (sorteio <= 90 && sorteio >= 97);

                {
                    // ESCOLHA DE TODAS: MAIUSCULAS + MINUSCULAS + CARACT. ESPECIAIS + NUMEROS
                    if (maiuscula == 1 && minuscula == 1 && especiais == 1 && numero == 1)
                    {
                        fprintf(target, "%c", sorteio);
                        i++;
                    }
                    // ESCOLHA DE UMA: APENAS MAIUSCULAS
                    else if (maiuscula == 1 && minuscula == 0 && especiais == 0 && numero == 0)
                    {
                        if ( sorteio >= 65 && sorteio <= 90)
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }

                    }
                    // ESCOLHA DE UMA: APENAS MINUSCULAS
                    else if (maiuscula == 0 && minuscula == 1 && especiais == 0 && numero == 0)
                    {
                        if ( sorteio >= 97 && sorteio <= 122)
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }
                    }
                    // ESCOLHA DE UMA: APENAS CARACT. ESPECIAIS
                    else if (maiuscula == 0 && minuscula == 0 && especiais == 1 && numero == 0)
                    {
                        if ( (sorteio >= 33 && sorteio <= 47) || (sorteio >= 58 && sorteio <= 64))
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }
                    }
                    // ESCOLHA DE UMA: APENAS NUMEROS
                    else if (maiuscula == 0 && minuscula == 0 && especiais == 0 && numero == 1)
                    {
                        if ((sorteio >= 48 && sorteio <= 57))
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }
                    }
                    // ESCOLHA DE DUAS: MAIUSCULAS + MINUSCULAS
                    else if (maiuscula == 1 && minuscula == 1 && especiais == 0 && numero == 0)
                    {
                        if ( (sorteio >= 65 && sorteio <= 90) || (sorteio >= 97 && sorteio <= 122))
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }
                    }
                    // ESCOLHA DE DUAS: MAIUSCULAS + ESPECIAIS
                    else if (maiuscula == 1 && minuscula == 0 && especiais == 1 && numero == 0)
                    {
                        if ( (sorteio >= 65 && sorteio <= 90) || (sorteio >= 58 && sorteio <= 64))
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }
                    }
                    // ESCOLHA DE DUAS: MAIUSCULAS + NUMEROS
                    else if (maiuscula == 1 && minuscula == 0 && especiais == 0 && numero == 1)
                    {
                        if ( (sorteio >= 65 && sorteio <= 90) || (sorteio >= 48 && sorteio <= 57))
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }
                    }
                    // ESCOLHA DE DUAS: MINUSCULAS + ESPECIAIS
                    else if (maiuscula == 0 && minuscula == 1 && especiais == 1 && numero == 0)
                    {
                        if ( (sorteio >= 97 && sorteio <= 122) || (sorteio >= 33 && sorteio <= 47) || (sorteio >= 58 && sorteio <= 64))
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }
                    }
                    // ESCOLHA DE DUAS: MINUSCULAS + NUMEROS
                    else if (maiuscula == 0 && minuscula == 1 && especiais == 0 && numero == 1)
                    {
                        if ( (sorteio >= 97 && sorteio <= 122) || (sorteio >= 48 && sorteio <= 57))
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }
                    }
                    // ESCOLHA DE DUAS: CARACTERES ESPECIAIS + NUMEROS
                    else if (maiuscula == 0 && minuscula == 0 && especiais == 1 && numero == 1)
                    {
                        if ( (sorteio >= 33 && sorteio <= 47) || (sorteio >= 58 && sorteio <= 64) || (sorteio >= 48 && sorteio <= 57))
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }
                    }
                    // ESCOLHA DE TRES: TODAS MENOS OS NUMEROS
                    else if (maiuscula == 1 && minuscula == 1 && especiais == 1 && numero == 0)
                    {
                        if ( (sorteio >= 33 && sorteio <= 47) || (sorteio >= 58 && sorteio <= 64) || (sorteio >= 65 && sorteio <= 90) || (sorteio >= 97 && sorteio <= 122))
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }
                    }
                    // ESCOLHA DE TRES: TODAS MENOS OS ESPECIAIS
                    else if (maiuscula == 1 && minuscula == 1 && especiais == 0 && numero == 1)
                    {
                        if ((sorteio >= 65 && sorteio <= 90) || (sorteio >= 97 && sorteio <= 122) || (sorteio >= 48 && sorteio <= 57))
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }
                    }
                    // ESCOLHA DE TRES: TODAS MENOS AS MINUSCULAS
                    else if (maiuscula == 1 && minuscula == 0 && especiais == 1 && numero == 1)
                    {
                        if ((sorteio >= 33 && sorteio <= 90))
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }
                    }
                    // ESCOLHA DE TRES: TODAS MENOS AS MAIUSCULAS
                    else if (maiuscula == 0 && minuscula == 1 && especiais == 1 && numero == 1)
                    {
                        if ((sorteio >= 33 && sorteio <= 64) || (sorteio >= 97 && sorteio <= 122) )
                        {
                            fprintf(target, "%c", sorteio);
                            i++;
                        }
                    }




                }
                //fprintf(target,"\n Caracteres: %d, i: %d", caracteres, i);
                //i++;

            }

        }
    }
    fclose(target);

    return 0;
}
