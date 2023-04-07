#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(0));
	int num, sorteio;
	int cont = 0;
	
	sorteio = rand() % 101;
	
	printf("Faca sua tentativa: Digite o numero desejado: ");
	scanf("%d", &num);
	
	//printf("Faca sua tentativa: digite o numero desejado: ");
	//scanf("%d", &num);
	
	while (cont < 4 && num != sorteio){
		if (num > sorteio){
			printf("Seu numero eh maior que o sorteado, tente novamente!");
		}else{
			printf("Seu numero eh menor que o sorteado, tente novamente!");
		}	
		scanf("%d", &num);
		cont += 1;
	}
	
	if (num == sorteio){
		printf("\n\nParabens, voce acertou!! Sorteado foi %d ", sorteio);
	}else if( cont == 4){
		printf("\n\nPerdeu! Melhor sorte da proxima vez!! Sorteado foi %d ", sorteio);
	}
	
	return 0;	
}
