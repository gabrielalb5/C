#include <stdio.h>
#define TAM 10

void preencherVetor(int A[]);
void imprimeVetor(int A[]);

int main(){
    int A[TAM];
    int i;
    
    preencherVetor(A);
    imprimeVetor(A);
    return 0;
}

void preencherVetor(int A[]){
    int i;
    for(i=0;i<TAM;i++){
        A[i] = i+1;
    }
}
void imprimeVetor(int A[]){
    int i;
    for(i=0;i<TAM;i++){
        printf("%d ",A[i]);
    }
}