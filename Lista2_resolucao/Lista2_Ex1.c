#include<stdio.h>

int main(){
	int num;
	double calc;
	
	printf("Digite o valor em metros: ");
	scanf("%d", &num);
	
	calc = num / 0.0254;
	
	printf("O valor de %d metro(s) em polegadas eh: %.2lf", num, calc);
	
	return 0;
}
