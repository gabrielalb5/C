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
    int diferenca;
    int max=100;
    
    srand((unsigned)time(NULL));

    numero = rand() % max;
    
    printf("Adivinhe um número com dicas. Quanto mais quente, mais perto.\n");
    printf("Digite um número (até %d): ", max);
    scanf("%d",&palpite);
    
    if(numero-palpite<0){
        diferenca = -(numero-palpite);
    }else{
        diferenca = numero-palpite;
    }
    
    while(palpite!=numero){
        if(diferenca<=5){
            printf("Pegando fogo!");
        }else if(diferenca<=10){
            printf("Quente");
        }else if(diferenca<=20){
            printf("Morno");
        }else if(diferenca<=30){
            printf("Frio");
        }else{
            printf("Congelante");
        }
        
        printf("\nAdivinhe um número com dicas. Quanto mais quente, mais perto.\n");
        printf("Digite um número (até %d): ", max);
        scanf("%d",&palpite);
        
        if(numero-palpite<0){
            diferenca = -(numero-palpite);
        }else{
            diferenca = numero-palpite;
        }
    }
    printf("Acertou, o número é %d",numero);
}
