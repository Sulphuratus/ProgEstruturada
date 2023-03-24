#include<stdio.h>

int main(){
	
	double d1, produto, soma, cubo, p1, p2, c1, c2;
	int n1, n2;
		
	printf("Digite o valor de n1: ");
	scanf("%d", &n1);
	
	printf("Digite o valor de n2: ");
	scanf("%d", &n2);
	
	printf("Digite o valor de um numero real: ");
	scanf("%lf", &d1);
	
	c1 = n1;
	c2 = n2;
	
	p1 = c1*2;
	p2 = c2/2;
	//printf("p1:%.0lf - p2:%.0lf ", p1, p2);
	produto = p1 * p2;
	soma = c1*3+d1;
	cubo = d1*d1*d1;
	
	printf("O produto do dobro do primeiro com metade do segundo: %.1lf\n", produto);
	printf("A soma do triplo do primeiro com o terceiro: %.1lf\n", soma);
	printf("O terceiro elevado ao cubo: %.1lf\n", cubo);
	
	return 0;
}
