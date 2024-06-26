/*Escreva um programa para determinar o maior de três números inteiros informados pelo
usuário.*/

#include <stdio.h>

int main(){
    int n1, n2, n3;

    printf("MAIOR NUMERO\n");
    printf("Digite o primeiro 1: ");
    scanf("%d",&n1);
    printf("Digite o primeiro 2: ");
    scanf("%d",&n2);
    printf("Digite o primeiro 3: ");
    scanf("%d",&n3);
    
    if(n1==n2 && n1==n3){
        printf("Os numeros sao iguais");
    }else if(n1>n2 && n1>n3){
        printf("O maior numero e o primeiro: %d",n1);
    }else if(n2>n1 && n2>n3){
        printf("O maior numero e o segundo: %d",n2);
    }else{
        printf("O maior numero e o terceiro: %d",n3);
    }

    return 0;
}