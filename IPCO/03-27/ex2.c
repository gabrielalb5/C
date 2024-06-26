/* Escreva um programa que realize arredondamentos de números utilizando a regra
usual da matemática: se a parte fracionária for maior do que ou igual a 0,5, o número é arredondado
para o inteiro imediatamente superior, caso contrário, é arredondado para o inteiro imediatamente
inferior.
Observação: para esse exercício considere que o número é informado com uma casa decimal.*/

#include <stdio.h>
#include <math.h>

int main(){
    float n, decimal;
    int inteiro;

    printf("ARREDONDANDO NUMEROS\n");
    printf("Digite um numero: ");
    scanf("%f",&n);
    
    inteiro = floor(n);
    decimal = n - inteiro;

    if(decimal>=0.5){
        inteiro++;
        printf("Numero arredondado para cima: %d",inteiro);
    }else{
        printf("Numero arredondado para baixo: %d",inteiro);
    }

    return 0;
}