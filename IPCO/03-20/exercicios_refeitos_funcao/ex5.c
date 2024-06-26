/*Somar duas frações ordinárias, fornecendo o resultado em forma de fração.*/
#include <stdio.h>

int somaFracao(int n1, int d1, int n2, int d2){
    int n3, d3;
    d3 = d1*d2;
    n3 = (d3/d1)*n1 + (d3/d2)*n2;
    return(n3,d3);
}

int main(){

    int n1, n2, d1, d2;

    printf("Digite o 1° numerador: ");
    scanf("%d", &n1);
    printf("Digite o 1° denominador: ");
    scanf("%d", &d1);
    printf("Digite o 2° numerador: ");
    scanf("%d", &n2);
    printf("Digite o 2° denominador: ");
    scanf("%d", &d2);

    printf("\nSoma das frações\n%d/%d + %d/%d = %d/%d", n1,d1,n2,d2,somaFracao(n1,d1,n2,d2));
    getchar();
    return 0;
}