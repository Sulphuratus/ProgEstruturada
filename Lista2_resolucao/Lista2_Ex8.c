#include<stdio.h>

int main(){
	
	double tamArq, velocidade, tempo_min, tempo_seg;
    int tempo, segundos;
	
	printf("Digite o tamanho do arquivo a ser transferido em MB: ");
	scanf("%lf", &tamArq);

    printf("Digite a velocidade da conexão em Mb: ");
	scanf("%lf", &velocidade);
	
    tempo_seg = (tamArq*8/velocidade);
    tempo_min = tempo_seg/60;
    tempo = tempo_min;
    segundos = (tempo_min - tempo)*60;

	
	printf("\nO tempo de espera para o download será de %d minutos e %d segundos.\n\n", tempo, segundos);
	
	return 0;
}