#include <stdio.h>
#define TAM 10

void imprimirVetor(char vetor[]);
void SelectionSort(char letras[]);

int main(){
    // declaração da variáveis composta e inicialização
    char letras[TAM] = {'a', 'r', 'P', 'q', 'M', 'l', 'v', 'x', 'I', 'D'};
    printf("Vetor antes da ordenacao");
    imprimirVetor( letras );
    SelectionSort( letras );

    printf("\n Vetor depois da ordenacao");
    imprimirVetor( letras );
    return 0;
}

void imprimirVetor(char vetor[]){
   int i;
   printf("\n Dados armazenados no vetor \n[ ");
   for(i = 0; i < TAM; i++){
     printf("%c ", vetor[i]);
   }
   printf("]\n");
}

void SelectionSort(char letras[]){
    int i, j, posMenor;
    char aux;
    for(i=0;i<TAM-1;i++){
        posMenor = i;
        for(j=i+1;j<TAM;j++){
            if(letras[j]<letras[posMenor])
                posMenor = j;
        }
        if(i!= posMenor){
            aux=letras[i];
            letras[i]=letras[posMenor];
            letras[posMenor]=aux;
        }
    }
}