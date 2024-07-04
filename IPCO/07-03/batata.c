/*Implemente um jogo que:
- gere um número aleatoriamente;
- aceite o palpite de adivinhação do usuário;
- o palpite correto termina o jogo;
- a cada palpite errado, o jogo informa o quanto o palpite do usuário está distante do número gerado.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void){
    int numero;
    int palpite;
    int max=100;
    
    srand((unsigned)time(NULL));

    numero = rand() % max;
     printf("Adivinhe um número com dicas. Quanto mais quente, mais perto.\n");
    printf("Digite um número (até %d): ", max);
    scanf("%d",&palpite);

    do{
        if(abs(numero-palpite)<=5){
            printf("Pegando fogo!\n");
        }else if(abs(numero-palpite)<=10){
            printf("Quente\n");
        }else if(abs(numero-palpite)<=20){
            printf("Morno\n");
        }else if(abs(numero-palpite)<=30){
            printf("Frio\n");
        }else{
            printf("Congelante\n");
        }

        printf("\nDigite um número (até %d): ",max);
        scanf("%d",&palpite);
    }while(palpite!=numero);

    printf("\nACERTOU!\n");
    printf("O número é %d", numero);
}
