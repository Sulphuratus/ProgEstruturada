#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(0));
	
	int num_computador, num_humano;
		
	num_computador = rand() % 3;
	printf("Digite a opcao desejada: (0)=Pedra, (1)=Papel, (2)=Tesoura: ");
	scanf("%d", &num_humano);
	
	while (num_humano == num_computador){
		printf("Empate!! Escolheram numeros iguais, tente novamente!\n\n");
		num_computador = rand() % 2;
		printf("Digite a opcao desejada: (0)=Pedra, (1)=Papel, (2)=Tesoura: \n");
		scanf("%d", &num_humano);

	}
	
	printf("Numero do Computador: %d\n", num_computador);
	printf("Seu numero: %d", num_humano);
	
	
	if (num_humano == 0){
		if (num_computador == 1){
			printf("\nNao foi desta vez, Computador venceu, pedra embrulha papel!");
		}else if(num_computador == 2){
			printf("\nParabens, voce venceu, pedra ganha de tesoura!!");
		}
	}else if(num_humano == 1){
		if (num_computador == 0){
			printf("\nParabens, voce venceu, pedra embrulha papel!");
		}else if(num_computador == 2){
			printf("\nNao foi desta vez, Computador venceu, tesoura corta papel!");	
		}
	}else if(num_humano == 2){
		if (num_computador == 0){
			printf("\nNao foi desta vez, Computador venceu, pedra ganha de tesoura!");
		}else if(num_computador == 1){
			printf("\nParabens, voce venceu, tesoura corta papel!");
		}
	}
	
	return 0;	
	
}
