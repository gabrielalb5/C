#include <stdio.h>
#define TAM 20

void lerVetor(int A[]);
void media(int A[]);

int main(){
    int A[TAM];
    int i;
    float m=0;
    
    lerVetor(A);
    media(A);
    return 0;
}

void lerVetor(int A[]){
    int i;
    for(i=0;i<TAM;i++){
        printf("Posição %d: ",i);
        scanf("%d",&A[i]);
    }
}

void media(int A[]){
    int i;
    float m=0;

    for(i=0;i<TAM;i++){
        m += A[i];
    }
    m = m/TAM;

    printf("Media: %.2f\n",m);

    printf("Os numeros acima da media sao: ");
    for(i=0;i<TAM;i++){
        if(A[i]>m){
            printf("%d ",A[i]);
        }
    }
}