/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Faça um
algoritmo para ler o custo de fábrica do carro, a porcentagem do distribuidor, a porcentagem
dos impostos e exiba o custo ao consumidor. Caso o custo ao consumidor seja menor que
R$100,000.00, conceda um desconto de $1,000.00.*/

#include <stdio.h>

int main(){
    float fab, dist, v_dist, imp, v_imp, custo;

    printf("CUSTO DE CARRO NOVO\n");
    printf("Digite o custo de fabrica: R$");
    scanf("%f",&fab);
    printf("Digite a porcentagem do distribuidor: ");
    scanf("%f",&dist);
    printf("Digite a porcentagem dos impostos: ");
    scanf("%f",&imp);

    v_dist = fab*(dist/100);
    v_imp = fab*(imp/100);
    custo = fab+v_dist+v_imp;
    
    printf("Valor do distribuidor (%.2f%%): R$%.2f\n",dist,v_dist);
    printf("Valor dos impostos (%.2f%%): R$%.2f\n",imp,v_imp);
    printf("Custo total: R$%.2f\n",custo);

    if(custo<100000){
        custo = custo-1000;
        printf("\nVoce recebeu um desconto de R$1000\n");
        printf("Novo custo total: R$%.2f",custo);
    }

    return 0;
}