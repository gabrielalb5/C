#include <stdio.h>
#define TAM 8

void lerVetor(int A[]);
void imprimeVetor(int A[]);
void Maior(int A[]);

int main(){
    int A[TAM];
    int i, maior, pos;
    
    lerVetor(A);
    imprimeVetor(A);
    Maior(A);
    return 0;
}

void lerVetor(int A[]){
    int i;
    for(i=0;i<TAM;i++){
        printf("Posição %d: ",i);
        scanf("%d",&A[i]);
    }
}

void imprimeVetor(int A[]){
    int i;
    for(i=0;i<TAM;i++){
        printf("%d ",A[i]);
    }
}

void Maior(int A[]){
    int i, maior=0, pos=0;

    for(i=0;i<TAM;i++){
        if(A[i]>maior){
            maior = A[i];
            pos = i;
        }
    }
    printf("\nMaior numero: %d na posição %d do vetor A",maior, pos);
}