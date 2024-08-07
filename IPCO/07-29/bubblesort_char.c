#include <stdio.h>
#define TAM 10

void imprimirVetor(char vetor[]);
void BubbleSort(char letras[]);

int main(){
    // declaração da variáveis composta e inicialização
    char letras[TAM] = {'a', 'r', 'P', 'q', 'M', 'l', 'v', 'x', 'I', 'D'};
    printf("Vetor antes da ordenacao \n");
    imprimirVetor( letras );
    BubbleSort( letras );

    printf("\n Vetor depois da ordenacao \n");
    imprimirVetor( letras );
    return 0;
}

void BubbleSort(char letras[]){
    int i, continua;
    char aux;
    do{
        continua = 0;
        for(i=0;i<TAM-1;i++){
            if(letras[i]>letras[i+1]){
                aux=letras[i];
                letras[i]=letras[i+1];
                letras[i+1]=aux;
                continua=1;
            }
        }
    }while(continua);
}

void imprimirVetor(char vetor[]){
   int i;
   printf("\n Dados armazenados no vetor \n[ ");
   for(i = 0; i < TAM; i++){
     printf("%c ", vetor[i]);
   }
   printf("]\n");
}