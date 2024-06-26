/*Dado que um espetáculo teatral tem o custo de R$ 2700,00 e o preço do convite para
esse espetáculo é R$ 30,00. Faça um programa para calcular e mostrar:
a) A quantidade de convites que devem ser vendidos para que, pelo menos, o custo do
espetáculo seja alcançado.
b) A quantidade de convites que devem ser vendidos para que se tenha um lucro de 20%.
*/
#include <stdio.h>
#include <math.h>

int main() {
    float custo, convite, lucro, meta, p;

    printf("Qual o preço do convite? R$");
    scanf("%f", &convite);
    printf("Qual o custo do espetáculo? R$");
    scanf("%f", &custo);
    printf("Digite a porcentagem de lucro desejada: ");
    scanf("%f", &p);

    meta = ceil(custo / convite);
    lucro = (custo*(1+(p/100))/convite);

    printf("É necessário vender pelo menos %.0f convites para cobrir o custo do espetáculo.\n", meta);
    printf("Para que haja lucro de %.0f%%, venda %.0f convites.\n", p, lucro);
    getchar();
    return 0;
}