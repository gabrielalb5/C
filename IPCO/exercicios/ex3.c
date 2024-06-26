/*Escreva um programa que permute o conteúdo de duas variáveis.*/
#include <stdio.h>
int main(){

    int x, y, aux;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    
    aux = x;
    x = y;
    y = aux;

    printf("Os valores foram permutados\nx = %d e y = %d ", x, y);
    getchar();
    return 0;
}