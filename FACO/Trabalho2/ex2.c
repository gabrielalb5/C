/*Considere um vetor de números reais de 10 elementos. Em seguida, leia um valor e procure-o no vetor. Se
encontrar, exibir os valores 10% menores que o valor encontrado. Caso contrário, exibir uma mensagem.*/
#define max 10
#include <stdio.h>

int main(){
    float vet[max] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29}, n, encontrado;
    int i;
    printf("Digite um valor para ser buscado: ");
    scanf("%f", &n);

    for(i=0;i<max;i++){
        if(n==vet[i]){
            encontrado = 1;
        }
    }

    if(encontrado){
        printf("[ ");
        for(i=0;i<max;i++){
            if(vet[i]<n*0.9){
                printf("%.2f ",vet[i]);
            }
        }
        printf("]");
    }else{
        printf("O valor não foi encontrado!");
    }

    return 0;
}