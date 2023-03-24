#include<stdio.h>

int main(){
	
	double celsius, farenheit;
	
	printf("Digite o valor da temperatura em graus Farenheit: ");
	scanf("%lf", &farenheit);
	
	celsius = 5*(farenheit-32)/9;
	
	printf("A temperatura de %.0lf graus Farenheit equivale a %.1lf graus Celsius.", farenheit, celsius);
	
	return 0;
}
