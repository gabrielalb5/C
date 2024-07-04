/*3. Altere o código-fonte do jogo de adivinhar o número aleatório, fazendo com que o número gerado
Tenha um limite mínimo e máximo. Dica: veja o exemplo do próximo slide.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void){
    int numero;
    int palpite;
    int cont = 1;
    int min=1, max=10;
    
    srand((unsigned)time(NULL));

    numero = min + rand() %max;
    printf("%d\n",numero);
    
    printf("Digite um número entre %d e %d: ",min,max);
    scanf("%d",&palpite);

    do{
        if(palpite>numero){
            printf("Errado, muito alto");
        }else{
            printf("Errado, muito baixo");
        };
        
        printf("\nDigite um número entre %d e %d: ",min,max);
        scanf("%d",&palpite);
    }while(palpite!=numero);

    printf("\nACERTOU!\n");
    printf("O número é %d", numero);
}