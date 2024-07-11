#include <stdio.h>
#define TAM 10

void lerVetor(int A[], int B[]);
void intercalar(int A[], int B[], int C[]);
void imprimirVet(int A[], int B[], int C[]);

int main(){
    int i, j=0;
    int A[TAM], B[TAM], C[TAM*2];
    
    lerVetor(A, B);
    intercalar(A, B, C);
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

void intercalar(int A[], int B[], int C[]){
    int i, j=0;

    for(i=0;i<TAM;i++){
        C[j] = A[i];
        j++;
        C[j] = B[i];
        j++;
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
    for(i=0;i<TAM*2;i++){
        printf("%d ",C[i]);
    }
}