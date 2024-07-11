#include <stdio.h>
#define TAM 5

void lerVetor(int vetor[]);
void inverter(int vetor[]);

int main(){

    int vetor[TAM];

    lerVetor(vetor);
    inverter(vetor);

    return 0;
}

void lerVetor(int vetor[]){
    int i;

    for(i=0;i<TAM;i++){
        printf("Digite a posição %d: ",i);
        scanf("%d",&vetor[i]);
    }
}

void inverter(int vetor[]){
    int i;

    printf("\nVetor normal: ");
    for(i=0;i<TAM;i++){
        printf("%d ",vetor[i]);
    }
    printf("\nVetor inverso: ");
    for(i=TAM;i>=0;i--){
        printf("%d ",vetor[i]);
    }
}