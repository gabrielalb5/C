#include <stdio.h>
#define TAM 5

void lerVetor(int A[]);
void inverter(int A[], int B[]);

int main(){
    int i, j=0;
    int A[TAM], B[TAM];
    
    lerVetor(A);
    inverter(A, B);
    return 0;
}

void lerVetor(int A[]){
    int i;
    for(i=0;i<TAM;i++){
        printf("Posição %d: ",i);
        scanf("%d",&A[i]);
    }
}

void inverter(int A[], int B[]){
    int i, j=0;

    for(i=TAM-1;i>=0;i--){
        B[j] = A[i];
        j++;
    }
    printf("Vetor A: ");
    for(i=0;i<TAM;i++){
        printf("%d ",A[i]);
    }
    printf("\nVetor B: ");
    for(i=0;i<TAM;i++){
        printf("%d ",B[i]);
    }
}