/*Um hotel deseja fazer uma promoção especial de final de semana, concedendo um
desconto de 25% na diária. O hotel possui 40 apartamentos e o valor normal da diária por
apartamento é R$ 267,00. Implemente um programa para calcular:
a) Valor promocional da diária.
b) Valor total a ser arrecadado caso a ocupação neste final de semana (2 diárias por
apartamento) atinja 100%.
c) Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%;
d) Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja
100%.
*/
#include <stdio.h>

int main() {
    float diaria, desc, diaria_desc, valor_tot, ocup_70, perda;
    int apts;

    printf("Digite o valor de diaria: R$");
    scanf("%f", &diaria);
    printf("Qual a porcentagem de desconto? ");
    scanf("%f", &desc);
    printf("Quantos apartamentos o hotel possui? ");
    scanf("%d", &apts);

    desc = desc/100; //desconto em porcentagem
    diaria_desc = diaria-(diaria*desc); //diaria-desconto
    valor_tot = apts*diaria_desc*2; //40aps*diaria_desc*2 por quarto*fim de semana
    ocup_70 = valor_tot*0.7;
    perda = (diaria*2*apts)-valor_tot;

    printf("\na) Valor promocional da diária: R$%.2f\n\n", diaria_desc);
    printf("Final de semana e 2 diárias por apartamento\n");
    printf("b) Valor total arrecadado 100%% ocupado: R$%.2f\n", valor_tot);
    printf("c) Valor total arrecadado 70%% ocupado: R$%.2f\n", ocup_70);
    printf("d) Quantidade perdida pela promoção em caso de ocupação de 100%%: R$ %.2f", perda);

    getchar();
    return 0;
    
}