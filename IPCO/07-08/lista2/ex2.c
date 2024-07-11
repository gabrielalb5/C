#include <stdio.h>
#define TAM 10

void lerVetor(int vetor[]);
void separarVetor(int vetor[], int a[], int b[]);

int main(){
    int i, j=0, k=0, vetor[TAM], a[TAM], b[TAM];

    lerVetor(vetor);
    separarVetor(vetor,a,b);
    return 0;
}

void lerVetor(int vetor[]){
    int i;

    for(i=0;i<TAM;i++){
        printf("Digite a posição %d: ",i);
        scanf("%d",&vetor[i]);
    }
}

void separarVetor(int vetor[], int a[], int b[]){
    int i, j=0, k=0;

    for(i=0;i<TAM;i++){
        if(i%2==0){
            a[j] = vetor[i];
            j++;
        }else{
            b[k] = vetor[i];
            k++;
        }
    }

    printf("\nVetor normal: ");
    for(i=0;i<TAM;i++){
        printf("%d ",vetor[i]);
    }
    printf("\nVetor a: ");
    for(i=0;i<j;i++){
        printf("%d ",a[i]);
    }
    printf("\nVetor b: ");
    for(i=0;i<k;i++){
        printf("%d ",b[i]);
    }
}