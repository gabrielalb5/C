/*Na linha de montagem de uma fábrica existem 3 classes de operários:
1. Operários que montam até 30 peças por mês
2. Operários que montam de 31 até 50 peças por mês
3. Operários que montam mais de 50 peças por mês

Os operários de classe 1 ganham o salário-mínimo. Os da classe 2 ganham o salário mínimo mais uma
comissão de 3% (do salário-mínimo) por peça montada acima das 30 iniciais, e os da classe 3, recebem
o salário-mínimo mais 5% (do salário-mínimo) por peça acima das 50 iniciais.

Implemente um programa em C que leia o valor do salário-mínimo, a classe do operário
e a quantidade de peças montadas no mês pelo operário, e calcule o salário bruto do
operário, informando o valor ganho com comissão.*/

#include <stdio.h>
int main(){

    int classe, qtd_pecas;
    float salario_min, salario_bruto;

    printf("CALCULO DE SALARIO DE OPERARIOS\n");
    printf("Digite o salario minimo: ");
    scanf("%f",&salario_min);
    printf("Digite a classe do operario (1, 2 ou 3): ");
    scanf("%d",&classe);
    printf("Digite a quantidade de pecas montadas: ");
    scanf("%d",&qtd_pecas);

    if(classe==1 && qtd_pecas<=30){
        salario_bruto = salario_min;
        printf("Salario: R$%.2f ",salario_bruto);
    }else if(classe==2 && (qtd_pecas>30 && qtd_pecas<=50)){
        salario_bruto = salario_min+(salario_min*0.03*(qtd_pecas-30));
        printf("Salario: R$%.2f ",salario_bruto);
        printf("\nComissao: R$%.2f",(salario_bruto-salario_min));
    }else if(classe==3 && qtd_pecas>50){
        salario_bruto = salario_min+(salario_min*0.05*(qtd_pecas-50));
        printf("Salario: R$%.2f ",salario_bruto);
        printf("\nComissao: R$%.2f",(salario_bruto-salario_min));
    }else{
        printf("Informacoes divergentes (classe e quantidade de pecas). Tente novamente.");
    }

    return 0;
}