#include <stdio.h>
#define TAM 10

void imprimirVetor(int vetor[]);
void SelectionSort(int numeros[]);

int main(){
    // declaração da variáveis composta e inicialização
    int numeros[TAM] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
    printf("Vetor antes da ordencao");
    imprimirVetor( numeros );
    SelectionSort( numeros );

    printf("\n Vetor depois da ordencao");
    imprimirVetor( numeros );
    return 0;
}

void imprimirVetor(int vetor[]){
   int i;
   printf("\n Dados armazenados no vetor \n[ ");
   for(i = 0; i < TAM; i++){
     printf("%d ", vetor[i]);
   }
   printf("]\n");
}

void SelectionSort(int numeros[]){
    int i, j, posMenor, aux;
    for(i=0;i<TAM-1;i++){
        posMenor = i;
        for(j=i+1;j<TAM;j++){
            if(numeros[j]<numeros[posMenor])
                posMenor = j;
        }
        if(i!= posMenor){
            aux=numeros[i];
            numeros[i]=numeros[posMenor];
            numeros[posMenor]=aux;
        }
    }
}

