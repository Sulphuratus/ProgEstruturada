#include<stdio.h>

int main(){
	
	double celsius, farenheit;
	
	printf("Digite o valor da temperatura em graus Celsius: ");
	scanf("%lf", &celsius);
	
	farenheit = 32+(celsius*9/5);
	
	printf("A temperatura de %.0lf graus Celsius equivale a %.1lf graus Farenheit.", celsius, farenheit);
	
	return 0;
}
