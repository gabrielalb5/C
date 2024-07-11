#include <stdio.h>

int main(){
    int vetor[5];
    int i;

    for(i=0;i<5;i++)
        vetor[i] = i*10;

    printf("\n Dados armazenados no vetor \n [ ");
    for(i=0;i<5;i++){
        printf("%d ",vetor[i]);
    }
    printf("] \n");

    return 0;
}