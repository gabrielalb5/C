/*programa para ler e somar 2 números, exibindo o resultado da soma*/
#include <stdio.h>

void main(){
    //criação das variáveis
    int n1, n2;
    printf("Digite o numero 1:");
    scanf("%d", &n1);
    printf("Digite o numero 2:");
    scanf("%d", &n2);
    printf("O resultado = %d", soma(n1,n2));
}

int soma(int num1, int num2){
    return(num1+num2);
}