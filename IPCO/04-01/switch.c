#include <stdio.h>
double calcularSalario(double salario, double percentualAumento){
    return (salario * (1 + percentualAumento / 100));
}

int main(){

    double salario, novoSalario;
    int profissao;

    printf("Digite sua profissao: [1] Medico; [2] Enfermeiro; [3] Farmaceutico: ");
    scanf("%d", &profissao);
    printf("Digite seu salario: R$ ");
    scanf("%lf", &salario);
    
    switch (profissao){
        case 1: {
            novoSalario = calcularSalario(salario, 30);
            printf("Salario com aumento de 30%% = R$ %.2lf\n\n", novoSalario);
            break;
        }
        case 2: {
            novoSalario = calcularSalario(salario, 45);
            printf("Salario com aumento de 45%% = R$ %.2lf\n\n", novoSalario);
            break;
        }
        case 3: {
            novoSalario = calcularSalario(salario, 50);
            printf("Salario com aumento de 20%% = R$%.2lf\n\n", novoSalario);
            break;
        }
        default: {
            printf("Profissao nao cadastrada!\n\n");
            break;
        }
    }
    return 0;
}