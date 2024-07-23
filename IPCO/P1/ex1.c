#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int min, int max);
void adivinhar(int min, int max, int num, int palp);

int main(){

    int min, max, num, palp;

    printf("JOGO DE ADIVINHAÇÃO\n\n");
    printf("DEFINA OS LIMITES\n");
    printf("Mínimo: ");
    scanf("%d",&min);
    printf("Máximo: ");
    scanf("%d",&max);
    
    while(min>max){
        printf("\nMínimo maior que máximo. Digite outros limites.\n");
        printf("\nDEFINA OS LIMITES\n");
        printf("Mínimo: ");
        scanf("%d",&min);
        printf("Máximo: ");
        scanf("%d",&max);
    }

    num = aleatorio(min,max);

    printf("\nNúmero gerado. Qual seu palpite? ");
    scanf("%d",&palp);

    adivinhar(min,max,num,palp);

    return 0;
}

int aleatorio(int min, int max){
    srand((unsigned)time(NULL));
    return ((rand() % (max-min+1))+min);
}

void adivinhar(int min, int max, int num, int palp){
    int cont=0, tentativas=3, diferenca;

    if(num-palp<0){
        diferenca = -(num-palp);
    }else{
        diferenca = num-palp;
    }

    while(palp!=num && cont<tentativas-1){
        if(diferenca<=(max-min)*0.1){
            printf("Muito quente");
        }else if(diferenca<=(max-min)*0.3){
            printf("Quente");
        }else if(diferenca<=(max-min)*0.6){
            printf("Frio");
        }else{
            printf("Muito frio");
        }
        cont++;
        printf("\nTente novamente: ");
        scanf("%d",&palp);

        if(num-palp<0){
            diferenca = -(num-palp);
        }else{
            diferenca = num-palp;
        }
   }

    if(num==palp){
        printf("\nParabéns você adivinhou o número!!!");
    }else{
        printf("\nLimite de tentativas atingido. O número era %d",num);
    }
}