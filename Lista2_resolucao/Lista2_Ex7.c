#include<stdio.h>

int main(){
	
	double area, volumeTinta, lataTinta, custoTotal, dif;
	int lata;
	
	printf("Digite o tamanho da area a ser pintada em metros quadrados: ");
	scanf("%lf", &area);
	
	volumeTinta = area/3;
	lataTinta = volumeTinta/18;
	
	lata = lataTinta;
	dif = lataTinta - lata;
	
	if(dif != 0){
		lataTinta = lata + 1;
	}else{
		lataTinta = lata;
	}
	
	custoTotal = lataTinta * 80;
	
	printf("Para a area de %.1lf metros quadrados \nsera necessario: %.1lf litros de tinta.", area, volumeTinta);
printf("Quantidade de latas de tinta: %.0lf latas. \nValor Total = R$%.2lf\n\n", lataTinta, custoTotal);
	
	return 0;
}
