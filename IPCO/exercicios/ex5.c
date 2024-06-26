/*Somar duas frações ordinárias, fornecendo o resultado em forma de fração.*/
#include <stdio.h>
int main(){

    int n1, n2, n3, d1, d2, d3;

    printf("Digite o 1° numerador: ");
    scanf("%d", &n1);
    printf("Digite o 1° denominador: ");
    scanf("%d", &d1);
    printf("Digite o 2° numerador: ");
    scanf("%d", &n2);
    printf("Digite o 2° denominador: ");
    scanf("%d", &d2);

    d3 = d1*d2;
    n3 = (d3/d1)*n1 + (d3/d2)*n2;
    printf("\nSoma das frações\n%d/%d + %d/%d = %d/%d", n1,d1,n2,d2,n3,d3);
    getchar();
    return 0;
}