/*Considere um vetor de números reais de 10 elementos. Em seguida, leia um valor e procure-o no vetor. Se
encontrar, exibir os valores 10% menores que o valor encontrado. Caso contrário, exibir uma mensagem.*/
#define max 5
#include <stdio.h>

int main(){
    float a[max] = {7.5, 6.5, 6.7, 8.5, 4.0}, media;
    int i;
    
    for (i = 0; i < max; i++){
        media += a[i];
    }
    media = media / max; 
    printf("A media e %.2f\n", media);

    printf("[ ");
    for (i = 0; i < max; i++){
        if (a[i] > media*1.1){
            printf("%.2f ", a[i]);
        }
    }
    printf("]\n");

    return 0;
}