/*Uma companhia de carros paga a seus vendedores um salário de R$ 1000,00
por mês, mais uma comissão de R$ 500,00 para cada carro vendido e mais 5% do valor das
venda. Caso o vendedor seja gerente, ele ainda receberá um bônus de 1% sobre as
vendas. Faça um programa para calcular e exibir o salário do vendedor num dado mês,
recebendo como dados de entrada o CPF do vendedor, o número de carros vendidos, o
valor total das vendas e caso seja gerente, o valor de seu bônus.*/

#include <stdio.h>

int main(){
    int cpf, carros, perfil;
    float sal, v_total;

    printf("SALARIO DE VENDEDORES\n");
    printf("Digite o CPF do vendedor: ");
    scanf("%d",&cpf);
    printf("Quantos carros foram vendidos? ");
    scanf("%d",&carros);
    printf("Qual o valor total de vendas? R$");
    scanf("%f",&v_total);

    sal = 1000;
    sal = sal+(carros*500);
    sal = sal+(v_total*0.05);

    printf("Voce e gerente? [0] Nao [1] Sim\n");
    scanf("%d",&perfil);

    if(perfil==1){
        sal = sal+(v_total*0.01);
    }

    printf("Funcionario do CPF %d\n",cpf);
    printf("Salario de R$%.2f",sal);

    return 0;
}