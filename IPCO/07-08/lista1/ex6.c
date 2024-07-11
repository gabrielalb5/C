#include <stdio.h>
#define TAM 10

void lerVetor(int A[], int B[]);
void somarVet(int A[], int B[], int C[]);
void imprimirVet(int A[], int B[], int C[]);

int main(){
    int i;
    int A[TAM], B[TAM], C[TAM];
    
    lerVetor(A, B);
    somarVet(A, B, C);
    imprimirVet(A, B, C);
    return 0;
}

void lerVetor(int A[], int B[]){
    int i;
    printf("Leitura do vetor A\n");
    for(i=0;i<TAM;i++){
        printf("Posição %d: ",i);
        scanf("%d",&A[i]);
    }
    printf("Leitura do vetor B\n");
    for(i=0;i<TAM;i++){
        printf("Posição %d: ",i);
        scanf("%d",&B[i]);
    }
}

void somarVet(int A[], int B[], int C[]){
    int i;

    for(i=0;i<TAM;i++){
        C[i] = A[i]+B[i];
    }
}

void imprimirVet(int A[], int B[], int C[]){
    int i;

    printf("A = ");
    for(i=0;i<TAM;i++){
        printf("%d ",A[i]);
    }
    printf("\nB = ");
    for(i=0;i<TAM;i++){
        printf("%d ",B[i]);
    }
    printf("\nC = ");
    for(i=0;i<TAM;i++){
        printf("%d ",C[i]);
    }
}
