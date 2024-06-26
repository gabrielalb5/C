/*Determinar o maior múltiplo de um inteiro dado menor do que ou igual a um outro inteiro dado.
Por exemplo: o maior múltiplo de 7 menor que 50 é 49.*/
#include <stdio.h>
int main(){

    int limite, n, vezes, maiorMult;

    printf("Digite o limite: ");
    scanf("%d", &limite);
    printf("Digite um número: ");
    scanf("%d", &n);

    vezes = limite/n;
    maiorMult = n*vezes;

    printf("\nO maior múltiplo de %d que cabe em %d é %d ", n, limite, maiorMult);
    getchar();
    return 0;
}