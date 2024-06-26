/*Faça um programa para calcular a quantidade de combustível gasto em uma viagem. O programa
deve receber a quantidade de km por litro que o automóvel que faz, o tempo gasto e a
velocidade média durante a viagem.*/
#include <stdio.h>
int main(){

    float vel, qtd_comb, km_litro, tempo;

    printf("Quantos Km por litro o automóvel faz? ");
    scanf("%f", &km_litro);
    printf("Tempo gasto em horas: ");
    scanf("%f", &tempo);
    printf("Velocidade média durante a viagem: ");
    scanf("%f", &vel);

    qtd_comb = (vel*tempo)/km_litro;

    printf("O automóvel utiliza %.2f litros", qtd_comb);
    getchar();
    return 0;
}