/* Programa que inverte um número com dois algarismos */
#include <stdio.h>
int main() {
int num, unidades, dezenas, invertido;

printf("Digite um inteiro com dois algarismos: ");
scanf("%d", &num);

unidades = num % 10;
dezenas = num/10;
invertido = unidades * 10 + dezenas;

printf("O inverso de %d e' %d ", num, invertido);
return 0;
} 