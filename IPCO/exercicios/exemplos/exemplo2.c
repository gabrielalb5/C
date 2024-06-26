/* Programa que fornece a parte fracionária de um número dado */
#include <stdio.h>
int main() {
    float num, frac;
    int inteiro;

    printf("Digite um numero ");
    scanf("%f", &num);

    inteiro = num;
    frac = num - inteiro;
    
    printf("A parte fracionaria de %f e' %f ", num, frac);
    return 0;
} 