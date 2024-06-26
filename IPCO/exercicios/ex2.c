/*Gerar o inverso de um número com três algarismos (exemplo: o inverso de 498 é 894).*/
#include <stdio.h>
int main(){

    int n, u, d, c;

    printf("Digite um número com 3 algarismos: ");
    scanf("%d", &n);
    c = n/100;
    d = (n % 100)/10;
    u = n % 10;

    printf("Invertido: %d%d%d", u,d,c);
    getchar();
    return 0;
}