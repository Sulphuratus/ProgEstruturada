#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(0));
	
	int num_computador, num_humano, soma, escolha;
	
	num_computador = rand() % 5;
	
	printf("Digite a opcao de escolha (1)=Par ou (2)=Impar:  ");
	scanf("%d", &escolha);
	
	printf("Qual eh o seu numero entre 0 e 5? ");
	scanf("%d", &num_humano);
	
	printf("\nNumero do computador: %d", num_computador);
	printf("\nSeu numero: %d\n", num_humano);
		
	soma = num_humano + num_computador;
	
	printf("\n\nResultado = %d", soma);
	
	if(escolha == 1){
		if( soma % 2 == 0){
			printf("\nParabens, voce venceu!!");
		}else{
			printf("\nNao foi desta vez, Computador venceu!");
		}
	}else if(escolha = 2){
		if( soma % 2 == 0){
			printf("\nNao foi desta vez, Computador venceu!");
		}else{
			printf("\nParabens, voce venceu!!");
		}		
	}
	
//	printf("Num computador: %d\n", num_computador);
//	printf("Num humano: %d", num_humano);
		
	
	return 0;
}
