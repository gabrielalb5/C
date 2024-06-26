/*Faça um programa que leia um valor inteiro correspondente a idade de uma pessoa
em dias e informe-a em anos, meses e dias. Para facilitar o cálculo, considere todo ano com 365 dias
e todo mês com 30 dias.
Por exemplo: Para uma idade informada de 400 dias, a resposta será: 1 ano(s), 1 mês(es) e 5 dia(s)
*/
#include <stdio.h>

int main() {
    int idade, anos, meses, dias;

    printf("Digite a idade em dias: ");
    scanf("%d", &idade);

    anos = idade/365;
    meses = (idade%365)/30;
    dias = (idade%365)%30;

    printf("%d ano(s) %d mes(es) e %d dias", anos, meses, dias);
    getchar();
    return 0;
}