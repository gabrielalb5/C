/*Um programa para gerenciar os saques de um caixa eletrônico deve possuir um
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado para o cliente
que realizou o saque. O critério da distribuição ótima tenta distribuir as notas de menor valor em
número mínimo possível.
Por exemplo, considere que a máquina só dispõe de notas de R$ 50, de R$ 10, de R$ 5 e de R$ 1.
Para uma quantia solicitada de R$ 87, o programa deve indicar uma nota de R$ 50, três notas de R$
10, uma nota de R$ 5 e duas notas de R$ 1.
Escreva um programa que receba o valor da quantia solicitada e retorne a distribuição das notas de
acordo com o critério da distribuição ótima.
*/
#include <stdio.h>
int main(){

    int saque, cq, dz, cn, um;

    printf("Quanto deseja sacar? R$");
    scanf("%d", &saque);

    cq = saque/50;
    dz = (saque-(cq*50))/10;
    cn = (saque-(cq*50)-(dz*10))/5;
    um = (saque-(cq*50)-(dz*10)-(cn*5));

    printf("Quantidade de notas\nR$50 = %d\nR$10 = %d\nR$5 = %d\nR$1 = %d\n", cq, dz, cn, um);
    getchar();
    return 0;
}
