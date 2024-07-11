#include <stdio.h>
#define TAM 10

void lerVetor(int A[]);

int main(){
    int VET[TAM];
    int i, NUM, posicao;
    
    lerVetor(VET);
    return 0;
}

void lerVetor(int VET[]){
    int i, NUM, posicao=-1;
    for(i=0;i<TAM;i++){
        printf("Posição %d: ",i);
        scanf("%d",&VET[i]);
    }

    printf("\nDigite o valor de NUM: ");
    scanf("%d",&NUM);

    for(i=0;i<TAM;i++){
        if(NUM==VET[i]){
            posicao = i;
        }
    }
    if(posicao<0){
        printf("O NUM não existe dentro do vetor VET");
    }else{
        printf("O NUM (%d) aparece no vetor VET na posição %d",NUM,posicao);
    }
}