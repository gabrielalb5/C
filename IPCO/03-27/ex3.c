/*Escreva um programa para verificar se um inteiro dado é um quadrado perfeito,
exibindo, nos casos afirmativos, sua raiz quadrada.*/

#include <stdio.h>
#include <math.h>

int main(){
    int n, inteiro;
    float raiz, decimal;

    printf("RAIZES PERFEITAS\n");
    printf("Digite um numero: ");
    scanf("%d",&n);
    
    raiz = sqrt(n);
    inteiro = floor(raiz);
    decimal = raiz - inteiro;

    printf("Raiz de %d = %f",n,raiz);

    if(decimal==0){
        printf("\nQuadrado perfeito!");
    }else{
        printf("\nNao e quadrado perfeito.");
    }

    return 0;
}