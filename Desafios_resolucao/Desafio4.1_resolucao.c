#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int num, opNum, opMin, opMax, min, max, cont, a, b, palpite;
    int resultado;
    srand(time(0));

    cont = 0;
    opMin = 1;
    opMax = 5;
    opNum = opMin + (rand() % (opMax - opMin + 1));

    min = 0;
    max = 10;

    a = min + (rand() % (max - min + 1));
    b = min + (rand() % (max - min + 1));

    while (cont < 5){

        printf("\n\n=================================================================== ");
        printf("\n===== >       J O G O   D A   A D I V I N H A C A O         < ===== ");
        printf("\n===== >                                                     < ===== ");
        printf("\n===== >        Venha testar seu poder dedutivo e            < ===== ");
        printf("\n===== >        desenvolva seu raciocínio lógico             < ===== ");
        printf("\n===== >        através das tentativas disponíveis!          < ===== ");
        printf("\n===== > --------------------------------------------------- < ===== ");
        printf("\n===== >        Match até 5 tentativas = Você começou bem!   < ===== ");
        printf("\n===== >        Match até 4 tentativas = Está esquentando!   < ===== ");
        printf("\n===== >        Match até 3 tentativas = De vento em popa!   < ===== ");
        printf("\n===== >        Match até 2 tentativas = Quase lá!           < ===== ");
        printf("\n===== >        Match com 1 tentativa = Você arrasou!        < ===== ");
        printf("\n===== >        Será que consegue repetir a façanha??        < ===== ");
        printf("\n===== > --------------------------------------------------- < ===== ");

        printf("\nNumeros sorteados sao: %d e %d", a, b);

        if (opNum == 1)
        {
            resultado = a + b;
            printf("\nOperação SOMA");
        }
        else if (opNum == 2)
        {
            resultado == a - b;
            printf("\nOperação SUBTRACAO");
        }
        else if (opNum == 3)
        {
            resultado = a * b;
            printf("\nOperação MULTIPLICACAO");
        }
        else if (opNum == 4)
        {
            resultado = a / b;
            printf("\nOperação DIVISAO");
        }

        printf("\n\nVocê tem %d chances, escolha o numero que será o resultado: \n", 5 - cont);
        scanf("%d", &palpite);
        cont += 1;
        if (palpite == resultado)
        {
            printf("\n ================================================================== ");
            if (cont == 1)
            {
                printf("\n   *.*.*.*. Você arrasou!! Acertou com %d tentativa(s)  *.*.*.*.* ", cont);
            }else if (cont == 2)
            {
                printf("\n   *.*.*.*. Quase lá!! Acertou com %d tentativa(s)  *.*.*.*.* ", cont);
            }else if (cont == 3)
            {
                printf("\n   *.*.*.*. De vento em popa!! Acertou com %d tentativa(s)  *.*.*.*.* ", cont);
            }else if (cont == 4)
            {
                printf("\n   *.*.*.*. Está esquentando!! Acertou com %d tentativa(s)  *.*.*.*.* ", cont);
            }else if (cont == 5)
            {
                printf("\n   *.*.*.*. Começou bem!! Acertou com %d tentativa(s)  *.*.*.*.* ", cont);
            }
            printf("\n =================================================================== \n\n");
            break;
        }
        else
        {
            if (cont < 5)
            {
                printf("\n ================================================================== ");
                printf("\n       <:-|  ===   Nao foi dessa vez ainda, tente novamente!  --    ");
                printf("\n ================================================================== \n");
            }
            else
            {
                printf("\n ================================================================== ");
                printf("\n   >:-( ==    Perdeu!! Melhor sorte da proxima vez!!   ---          ");
                printf("\n ================================================================== \n\n");
            }

            printf("Palpite: %d , Resultado: %d", palpite, resultado);
        }
    }

    return 0;
}