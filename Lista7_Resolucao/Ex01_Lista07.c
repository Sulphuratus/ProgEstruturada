#include<stdio.h>
#include<stdlib.h>

int procedimento(int a, int b, int c){
    int i;
    double incremento, primeiro, ultimo, passo;
    primeiro = a;
    ultimo = b;
    passo = c;

    incremento = ( ultimo - primeiro)/(passo-1);

    printf("%.2f, ", primeiro);

    for (i = 0; i < passo-1; i++){
        primeiro += incremento;
        printf("%.2f, ", primeiro);
    }
}

int main(){

    int start, stop, step;
    start = 2;
    stop = 3;
    step = 5;

    procedimento(start, stop, step);

    return 0;

}
