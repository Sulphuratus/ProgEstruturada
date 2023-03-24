#include<stdio.h>

int main(){
	
	double raio, perimetro, area;
	
	printf("Digite o valor do raio do circulo: ");
	scanf("%lf", &raio);
	
	perimetro = 2 * 3.14159 * raio;
	area = 3.14159 * raio * raio;
	
	printf("Raio do circulo: %.0lf - Perimetro: %.1lf - Area: %.1lf", raio, perimetro, area);
	
	return 0;
}
