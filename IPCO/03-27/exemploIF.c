/*Escreva um programa que calcule o valor de
uma média aritmética e */

#include <stdio.h>

float Media(float n1, float n2);

int main(){
    float n1, n2;
    float resultado;
    printf("Digite a nota 1: ");
    scanf("%f",&n1);
    printf("Digite a nota 2: ");
    scanf("%f",&n2);
    resultado = Media(n1,n2);
    printf("Media = %.2f", resultado);

    if(resultado>=5){
        printf("\nAPROVADO");
    }else{
        printf("\nREPROVADO");
    }
    
    printf("\nfinal do programa!");

    return 0;
}

float Media(float n1, float n2){
    return ((n1+n2)/2);
}