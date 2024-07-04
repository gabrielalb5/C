/*Jogo de adivinhar número aleatório*/
#include <stdio.h>
#include <stdlib.h>

void main(void){
    int numero;
    int palpite;

    numero = rand();

    printf("Adivinhe o número: ");
    scanf("%d",&palpite);

    if(palpite==numero){
        printf("**certo**");
        printf("%d, o número = ", numero);
    }
    else if(palpite>numero)
        printf("Errado, muito alto");
    else printf("Errado, muito baixo");
}