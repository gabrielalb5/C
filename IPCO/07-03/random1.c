/*1. Altere o código-fonte do jogo de adivinhar o número aleatório, permitindo que o usuário
continue seus palpites até acertar o número*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void){
    int numero;
    int palpite;
    
    srand((unsigned)time(NULL));
    
    numero = rand();

    printf("Adivinhe o número: ");
    scanf("%d",&palpite);

    do{
        if(palpite>numero){
            printf("Errado, muito alto");
        }else{
            printf("Errado, muito baixo");
        };
        
        printf("\nAdivinhe o número: ");
        scanf("%d",&palpite);
    }while(palpite!=numero);

    printf("\nACERTOU!\n");
    printf("O número é %d ", numero);
}