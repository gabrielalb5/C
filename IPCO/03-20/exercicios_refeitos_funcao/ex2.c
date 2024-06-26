/*Gerar o inverso de um número com três algarismos (exemplo: o inverso de 498 é 894).*/
#include <stdio.h>

int inverterNum(int n){
    int u, d, c;
    c = n/100;
    d = (n % 100)/10;
    u = n % 10;
    return(u*100+d*10+c);
}

int main(){

    int n;

    printf("Digite um número com 3 algarismos: ");
    scanf("%d", &n);

    printf("Invertido: %d", inverterNum(n));
    getchar();
    return 0;
}