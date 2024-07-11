#include <stdio.h>
#define TAM 5

void inicializarVetor(int vetor[]);
void imprimeVetor(int vetor[]);

int main(){
    int vetor[TAM];
    int i;

    inicializarVetor(vetor);
    imprimeVetor(vetor);
    return 0;
}

void inicializarVetor(int vetor[]){
    int i;
    for(i=0;i<TAM;i++){
        printf("\n Valor [%d]: ", i);
        scanf("%d", &vetor[i]);
    }
}

void imprimeVetor(int vetor[]){
    int i;
    printf("\n Dados armazenados no vetor \n [ ");
    for(i=0;i<TAM;i++){
        printf("%d ",vetor[i]);
    }
    printf("] \n");
}