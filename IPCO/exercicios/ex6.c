/*Uma loja vende seus produtos no sistema de entrada mais duas prestações, sendo que o valor
da entrada deve ser igual ou maior do que as prestações. As prestações devem ser iguais.
Por exemplo:
• Se o valor da mercadoria for R$ 270,00, e a entrada for de R$ 90,00, as duas prestações serão
iguais a R$ 90,00;
• Se o valor da mercadoria for R$ 350,00, a entrada é de R$ 150,00 e as duas prestações são
iguais a R$ 100,00.*/
#include <stdio.h>
int main(){

    float valor, entrada, prestacao;

    printf("Digite o valor do produto: R$");
    scanf("%f", &valor);
    printf("Digite o valor de entrada: R$");
    scanf("%f", &entrada);

    prestacao = (valor-entrada)/2;

    printf("\n2 prestações de R$%.2f", prestacao);
    getchar();
    return 0;
}