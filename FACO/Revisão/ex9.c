#include <stdio.h>
int main(){

    //Entrada
    float temp, vel;
    int km_litro = 12;
    float dist, total_litros;

    printf("Digite o tempo gasto: ");
    scanf("%f",&temp);
    printf("Digite a velocidade media: ");
    scanf("%f",&vel);

    //Processamento
    dist = vel*temp;
    total_litros = dist/km_litro;

    //Saídas
    printf("\nVelocidade média de %.2fkm/h",vel);
    printf("\nTempo gasto de %.2fh",temp);
    printf("\nDistância %.2f km",dist);
    printf("\n%.2f Litros gastos",total_litros);
    
    return 0;
}