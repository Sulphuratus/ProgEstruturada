#include<stdio.h>

int main(){

    int classe, territorio, arma; 

printf("\nDigite o numero correspondente a classe: ");
printf("\n1 - Guerreiro");
printf("\n2 - Mago");
printf("\n3 - Druida");
printf("\n4 - Sacerdote\n\n");
printf("Numero escolhido: ");
scanf("%d", &classe);


printf("\n\nDigite o numero correspondente ao territorio: ");
printf("\n1 - Azeroth");
printf("\n2 - Azkaban");
printf("\n3 - Aurora");
printf("\n4 - Brightwood\n\n");
printf("Numero escolhido: ");
scanf("%d", &territorio);


printf("\n\nDigite o numero correspondente a arma: ");
printf("\n1 - Machado cego");
printf("\n2 - Picareta invertida");
printf("\n3 - Adaga sem ponta");
printf("\n4 - Corrente sem elo\n\n");
printf("Numero escolhido: ");
scanf("%d", &arma);
printf("\n");

if (classe == 1){
    if (territorio == 1){
        if (arma == 1){
            printf("Você agora é um Guerreiro na regiao de Azeroth com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Guerreiro na regiao de Azeroth com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Guerreiro na regiao de Azeroth com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Guerreiro na regiao de Azeroth com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else if(territorio == 2){
        if (arma == 1){
            printf("Você agora é um Guerreiro na regiao de Azkaban com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Guerreiro na regiao de Azkaban com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Guerreiro na regiao de Azkaban com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Guerreiro na regiao de Azkaban com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else if(territorio == 3){
        if (arma == 1){
            printf("Você agora é um Guerreiro na regiao de Aurora com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Guerreiro na regiao de Aurora com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Guerreiro na regiao de Aurora com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Guerreiro na regiao de Aurora com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else if(territorio == 4){
        if (arma == 1){
            printf("Você agora é um Guerreiro na regiao de Brightwood com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Guerreiro na regiao de Brightwood com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Guerreiro na regiao de Brightwood com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Guerreiro na regiao de Brightwood com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else{
        printf("Opcao de territorio invalida");
    }
}else if(classe == 2){
    if (territorio == 1){
        if (arma == 1){
            printf("Você agora é um Mago na regiao de Azeroth com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Mago na regiao de Azeroth com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Mago na regiao de Azeroth com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Mago na regiao de Azeroth com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else if(territorio == 2){
        if (arma == 1){
            printf("Você agora é um Mago na regiao de Azkaban com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Mago na regiao de Azkaban com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Mago na regiao de Azkaban com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Mago na regiao de Azkaban com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else if(territorio == 3){
        if (arma == 1){
            printf("Você agora é um Mago na regiao de Aurora com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Mago na regiao de Aurora com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Mago na regiao de Aurora com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Mago na regiao de Aurora com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else if(territorio == 4){
        if (arma == 1){
            printf("Você agora é um Mago na regiao de Brightwood com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Mago na regiao de Brightwood com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Mago na regiao de Brightwood com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Mago na regiao de Brightwood com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else{
        printf("Opcao de territorio invalida");
    }
}else if(classe == 3){
    if (territorio == 1){
        if (arma == 1){
            printf("Você agora é um Druida na regiao de Azeroth com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Druida na regiao de Azeroth com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Druida na regiao de Azeroth com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Druida na regiao de Azeroth com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else if(territorio == 2){
        if (arma == 1){
            printf("Você agora é um Druida na regiao de Azkaban com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Druida na regiao de Azkaban com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Druida na regiao de Azkaban com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Druida na regiao de Azkaban com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else if(territorio == 3){
        if (arma == 1){
            printf("Você agora é um Druida na regiao de Aurora com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Druida na regiao de Aurora com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Druida na regiao de Aurora com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Druida na regiao de Aurora com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else if(territorio == 4){
        if (arma == 1){
            printf("Você agora é um Druida na regiao de Brightwood com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Druida na regiao de Brightwood com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Druida na regiao de Brightwood com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Druida na regiao de Brightwood com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else{
        printf("Opcao de territorio invalida");
    }
}else if(classe == 4){
    if (territorio == 1){
        if (arma == 1){
            printf("Você agora é um Sacerdote na regiao de Azeroth com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Sacerdote na regiao de Azeroth com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Sacerdote na regiao de Azeroth com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Sacerdote na regiao de Azeroth com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else if(territorio == 2){
        if (arma == 1){
            printf("Você agora é um Sacerdote na regiao de Azkaban com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Sacerdote na regiao de Azkaban com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Sacerdote na regiao de Azkaban com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Sacerdote na regiao de Azkaban com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else if(territorio == 3){
        if (arma == 1){
            printf("Você agora é um Sacerdote na regiao de Aurora com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Sacerdote na regiao de Aurora com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Sacerdote na regiao de Aurora com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Sacerdote na regiao de Aurora com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else if(territorio == 4){
        if (arma == 1){
            printf("Você agora é um Sacerdote na regiao de Brightwood com um Machado cego.");
        }else if(arma == 2){
            printf("Você agora é um Sacerdote na regiao de Brightwood com uma Picareta Invertida.");
        }else if(arma == 3){
            printf("Você agora é um Sacerdote na regiao de Brightwood com uma Adaga sem ponta.");
        }else if(arma == 4){
            printf("Você agora é um Sacerdote na regiao de Brightwood com uma Corrente sem elo.");
        }else{
            printf("Opcao de arma invalida");
        }
    }else{
        printf("Opcao de territorio invalida");
    }

}else{
    printf("Opcao classe invalida");
}
printf("\n\n");

return 0;
}

