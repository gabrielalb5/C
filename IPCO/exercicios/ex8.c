/*Escreva um programa que converta um intervalo de tempo dado em minutos para horas, minutos e segundos.
Por exemplo, se o tempo dado for 145.87 min, o programa deve fornecer 2 h 25 min 52.2 s
(vale lembrar que o ponto é o separador da parte inteira).
*/
#include <stdio.h>
int main(){

    float entrada, s;
    int h, m;

    printf("Digite o tempo em minutos: ");
    scanf("%f", &entrada);

    h = entrada/60;
    m = entrada-(h*60);
    s = (entrada-m-(h*60))*60;

    printf("\nTempo convertido: %dh %dmin %.1fs", h, m, s);
    getchar();
    return 0;
}
