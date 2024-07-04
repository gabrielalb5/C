/*2. Altere o código-fonte do jogo de adivinhar o número aleatório, permitindo que o usuário
tenha até 3 tentativas para acertar o número;*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void){
    int numero;
    int palpite;
    int cont = 1;
    
    srand((unsigned)time(NULL));
    
    numero = rand()%100;

    do{
        printf("\nChance %d de 3\n",cont);
        printf("Adivinhe o número (até 100): ");
        scanf("%d",&palpite);
        if(palpite<numero)
            printf("Errado, seu número é menor\n",cont);
        else if(palpite>numero)
            printf("Errado, seu número é maior\n",cont);
            cont++;
    }while(numero!=palpite && cont<=3);

    if(numero==palpite){
        printf("\nACERTOU!\n");
        printf("O número é %d",numero);
    }
}