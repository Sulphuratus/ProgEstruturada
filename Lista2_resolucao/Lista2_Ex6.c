#include<stdio.h>

int main(){
	
	double salHora, horasMes, salBruto, valorIr;
	double valorInss, valorSind, salLiq;
		
	printf("Digite o valor do ganho por hora: ");
	scanf("%lf", &salHora);
	
	printf("Digite quantidade de horas trabalhadas no mes: ");
	scanf("%lf", &horasMes);
	
	salBruto = horasMes * salHora;
	valorIr = salBruto * 0.11;
	valorInss = salBruto * 0.08;
	valorSind = salBruto * 0.05;
	salLiq = salBruto - valorIr - valorInss - valorSind;
	
	printf("+ Salario Bruto: R$ %.2lf\n", salBruto);
	printf("- IR(11%%): R$ %.2lf\n", valorIr);
	printf("- INSS(8%%): R$ %.2lf\n", valorInss);
	printf("- Sindicato(5%%): R$ %.2lf\n", valorSind);
	printf("= Salario Liquido: R$ %.2lf\n", salLiq);
	
	return 0;
}
