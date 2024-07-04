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

    numero = rand() %100;
    printf("%d\n",numero);
    
    printf("Digite um número (até %d): ",max);
    scanf("%d",&palpite);

    do{
        if((palpite==(numero-1)) || (palpite==(numero+1))){
            printf("Pegando fogo!\n");
        }else if((palpite(numero+5)) || (palpite(numero-5))){
            printf("Quente\n");
        }else if((palpite<=(numero/2)) || (palpite>=(numero*2))){
            printf("Frio\n");
        }else if((palpite<=(numero/3)) || (palpite>=(numero*3))){
            printf("Congelante\n");
        }

        printf("\nDigite um número (até %d): ",max);
        scanf("%d",&palpite);
    }while(palpite!=numero);

    printf("\nACERTOU!\n");
    printf("O número é %d", numero);
}