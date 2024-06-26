/*Uma empresa opera com seguros de carros. De acordo com o tipo de
carro, existe uma taxa a ser cobrada sobre o preço do mesmo (carros que são mais
visados pelos assaltantes).
Tabela 1:
TIPO DE CARRO - Taxa 1
1. Pequeno ...... 1.5%%
2. Médio .......... 2%%
3. Grande ....... 1.7%%

De acordo com a região onde o carro será licenciado existe outra taxa (cidades ou
regiões onde existe maior índice de assaltos).
Tabela 2: 
REGIAO ------------------------------------- Taxa 2
1. Norte e Nordeste .......................... 0.3%%
2. Sul e Centro-Oeste ........................ 0.5%%
3. Sudeste (exceto São Paulo e Rio de Janeiro) 0.8%%
4. São Paulo ................................... 1%%
5. Rio de Janeiro ............................ 1.5%%

O valor do seguro do carro é calculado somando-se as taxas 1 e 2 aplicadas ao valor
do veículo. O valor da franquia é calculado de acordo com o valor do seguro.
Tabela 3: 
Cálculo da Franquia
Valor do Seguro -------- Valor da Franquia
Inferior a R$ 1000,00 ......... R$ 800,00
Entre R$ 1000,00 e R$ 1500,00 . R$ 1200,00
Superior a R$ 1500,00 ......... R$ 1600,00

Fazer um programa na Linguagem C para ler o preço do carro, o tipo do carro e a
região onde será licenciado, e calcular e mostrar o valor do seguro e o valor da
franquia.*/

#include <stdio.h>
int main(){

    int tipo, regiao;
    float preco, seguro, franquia, taxa1, taxa2;

    printf("SEGURO DE CARRO\n\n");

    printf("Qual o valor do seu veiculo? R$");
    scanf("%f",&preco);

    printf("\nTIPO DE CARRO - Taxa 1\n");
    printf("1. Pequeno ...... 1.5%%\n2. Medio .......... 2%%\n3. Grande ....... 1.7%%\n");
    printf("Qual seu tipo de carro? [1-3] ");
    scanf("%d",&tipo);

    printf("\nREGIAO ------------------------------------- Taxa 2\n");
    printf("1. Norte e Nordeste .......................... 0.3%%\n2. Sul e Centro-Oeste ........................ 0.5%%\n3. Sudeste (exceto Sao Paulo e Rio de Janeiro) 0.8%%\n4. Sao Paulo ................................... 1%%\n5. Rio de Janeiro ............................ 1.5%%");
    printf("\nQual a regiao? [1-5] ");
    scanf("%d",&regiao);

    switch (tipo){
        case 1:{
            taxa1 = 1.5;
            break;
        }case 2:{
            taxa1 = 2;
            break;
        }case 3:{
            taxa1 = 1.7;
            break;
        }default:{
            printf("\nTipo invalido.");
            break;
        }
    }

    switch (regiao){
        case 1:{
            taxa2 = 0.3;
            break;
        }case 2:{
            taxa2 = 0.5;
            break;
        }case 3:{
            taxa2 = 0.8;
            break;
        }case 4:{
            taxa2 = 1;
            break;
        }case 5:{
            taxa2 = 1.5;
            break;
        }default:{
            printf("\nRegiao invalida.");
            break;
        }
    }

    seguro = preco*((taxa1+taxa2)/100);

    if(seguro<1000){
        franquia = 800;
    }else if(seguro>=1000 && seguro<=1500){
        franquia = 1200;
    }else if(seguro>1500){
        franquia = 1600;
    }

    printf("\nValor do seguro: R$%.2f",seguro);
    printf("\nFranquia: R$%.2f",franquia);
    return 0;
}