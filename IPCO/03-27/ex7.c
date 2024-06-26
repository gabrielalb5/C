/*Uma empresa decidiu dar um aumento escalonado a seus funcionários de acordo com
a seguinte regra: 13% para os salários inferiores ou iguais a R$ 200,00; 11% para os salários
situados entre R$ 200,0 e R$ 400,00 (inclusive); 9 % para os salários entre R$ 400,00 e R$ 800,00
(inclusive) e 7% para os demais salários. Escreva um programa que receba o salário atual de um
funcionário e forneça o valor do seu novo salário.*/

#include <stdio.h>

int main(){
    float sal;

    printf("AUMENTO DE SALARIO\n");
    printf("Digite o salario: R$");
    scanf("%f",&sal);

    if(sal<=200){
        sal = sal*1.13;
    }else if(sal>200 && sal<=400){
        sal = sal*1.11;
    }else if(sal>400 && sal<=800){
        sal = sal*1.09;
    }else{
        sal = sal*1.07;
    }

    printf("Novo salario: R$%.2f",sal);

    return 0;
}