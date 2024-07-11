#include <stdio.h>
#define TAM 7

void lerVetor(int vetor[], int num, int pos);
void incluir(int vetor[], int num, int pos);
void imprimir(int vetor[]);

int main(){
    int i, num, pos, vetor[TAM];

    lerVetor(vetor);
    incluir(vetor, num, pos);
    imprimir(vetor);

    return 0;
}

void lerVetor(int vetor[], int num, int pos){
    int i;
    printf("Leitura do vetor\n");
    for(i=0; i<TAM; i++){
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Numero para substituir: ");
    scanf("%d",&num);
    printf("Posição para substituir: ");
    scanf("%d",&pos);
}

void incluir(int vetor[], int num, int pos){
    int i;
    for(i=TAM-1; i>pos-1; i--){
        vetor[i] = vetor[i-1];
    }
    vetor[pos-1] = num;
}

void imprimir(int vetor[]){
    int i;
    printf("Vetor atualizado: ");
    for(i=0; i<TAM; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
