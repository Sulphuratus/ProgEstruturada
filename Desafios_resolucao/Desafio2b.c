#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    float randnum;
    int min = 1;
    int max = 100;
    int num, rnum, n;

    randnum = min + rand() % (max - min + 1);
    rnum = randnum;
    n = 0;

    //printf("Numero aleatorio: %d\n", rnum);

    printf("(1) Digite um número inteiro de 1 a 100: ");
    scanf("%d", &num);

//    printf("\nNumero digitado: %d\n", num);

    if (num == rnum){
        printf("\nSenha correta! Acesso garantido!\n\n");
    }else if( num > rnum ){
        printf("A senha é menor que o valor inserido!\n");
        printf("\n(2) Digite outro numero: ");
        scanf("%d", &num);
        n++;
    }else if( num < rnum ){
        printf("A senha é maior que o valor inserido!\n");
        printf("\n(2) Digite outro numero: ");
        scanf("%d", &num);
        n++;
    }

    if (num == rnum && n > 0){
        printf("\nSenha correta! Acesso garantido!\n\n");
    }else if( num > rnum ){
        printf("A senha é menor que o valor inserido!\n");
        printf("\n(3) Digite outro numero: ");
        scanf("%d", &num);
        n++;
    }else if( num < rnum ){
        printf("A senha é maior que o valor inserido!\n");
        printf("\n(3) Digite outro numero: ");
        scanf("%d", &num);
        n++;
    }

    if (num == rnum && n > 1){
        printf("\nSenha correta! Acesso garantido!\n\n");
    }else if( num > rnum ){
        printf("A senha é menor que o valor inserido!\n");
        printf("\n(4) Digite outro numero: ");
        scanf("%d", &num);
        n++;
    }else if( num < rnum ){
        printf("A senha é maior que o valor inserido!\n");
        printf("\n(4) Digite outro numero: ");
        scanf("%d", &num);
        n++;
    }

    if (num == rnum && n > 2){
        printf("\nSenha correta! Acesso garantido!\n\n");
    }else if( num > rnum ){
        printf("A senha é menor que o valor inserido!\n");
        printf("\n(5) Digite outro numero: ");
        scanf("%d", &num);
        n++;
    }else if( num < rnum ){
        printf("A senha é maior que o valor inserido!\n");
        printf("\n(5) Digite outro numero: ");
        scanf("%d", &num);
        n++;
    }

    if (n >= 4){
        printf("\nSenha incorreta. Numero de tentativas excedido!\n\n");
    }

    return 0;
}