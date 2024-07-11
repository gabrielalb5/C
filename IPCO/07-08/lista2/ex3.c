#include <stdio.h>
#define TAM 6

void lerVetor(int vetor[]);
void amplitude(int vetor[]);

int main(){
    int i, maior=0, menor=0, vetor[TAM];

    lerVetor(vetor);
    amplitude(vetor);
    return 0;
}

void lerVetor(int vetor[]){
    int i;

    for(i=0;i<TAM;i++){
        printf("Digite a posição %d: ",i);
        scanf("%d",&vetor[i]);
    }
}

void amplitude(int vetor[]){
    int i, maior=0, menor=0;

    for(i=0;i<TAM;i++){
        if(i==0){
            menor = vetor[i];
        }
        if(vetor[i]>maior){
            maior=vetor[i];
        }
        if(vetor[i]<menor){
            menor=vetor[i];
        }
    }

    printf("\nVetor: ");
    for(i=0;i<TAM;i++){
        printf("%d ",vetor[i]);
    }
    printf("\nMaior: %d ",maior);
    printf("\nMenor: %d ",menor);
}