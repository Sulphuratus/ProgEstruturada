#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int i, dia_max, dia_min, mes_max, mes_min, ano_max, ano_min;
    int dia, mes, ano, cont;

    srand(time(NULL));

    dia_min = 1;
    mes_min = 1;
    ano_min = 2020;
    //dia_max = 30;
    mes_max = 12;
    ano_max = 2022;
    //ano = 2020;
    //mes = 2;


    ano = ano_min + rand() % (ano_max - ano_min + 1);
        mes = mes_min + rand() % (mes_max - mes_min + 1);

    if(mes == 2){
        if(ano % 4 == 0){
            dia_max = 29;
            printf("Ano bissexto, fevereiro tem no maximo 29 dias!\n");

        }else{
            printf("Ano nao bissexto, fevereiro tem no maximo 28 dias!\n");
            dia_max = 28;
        }
    }else{
        if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            dia_max = 30;
            printf("Mes de 30 dias!\n");
        }else{
            dia_max = 31;
            printf("Mes de 31 dias!\n");

        }
        
    }

    dia = dia_min + rand() % (dia_max - dia_min + 1);
    

    printf("A data sorteada entre 01/01/2000 e 31/12/2022 é: %d/%d/%d\n\n", dia, mes, ano);

    return 0;

}