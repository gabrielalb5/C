#include <stdio.h>
#define TAM 10

void imprimirVetor(int vetor[]);
void BubbleSort(int numeros[]);

int main(){
    // declaração da variáveis composta e inicialização
    int numeros[TAM] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
    printf("Vetor antes da ordencao \n");
    imprimirVetor( numeros );
    BubbleSort( numeros );

    printf("\n Vetor depois da ordencao \n");
    imprimirVetor( numeros );
    return 0;
}

void BubbleSort(int numeros[]){
    int i, continua, aux;
    do{
        continua = 0;
        for(i=0;i<TAM-1;i++){
            if(numeros[i]>numeros[i+1]){
                aux=numeros[i];
                numeros[i]=numeros[i+1];
                numeros[i+1]=aux;
                continua=1;
            }
        }
    }while(continua);
}

void imprimirVetor(int vetor[]){
   int i;
   printf("\n Dados armazenados no vetor \n[ ");
   for(i = 0; i < TAM; i++){
     printf("%d ", vetor[i]);
   }
   printf("]\n");
}