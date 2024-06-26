/*programa exemplo de modularizacao
  criacaao de uma funcao que faz o calculo
  da area de um retangulo*/

// biblioteca padrao de entrada/saida (printf, scanf)
#include <stdio.h>

//assinatura da UDF
int area_retangulo(int b, int h);

//funcao principal
int main(){
    //declaracao das variaveis
    int base, altura;
    int area;

    //entrada de dados do usuario
    printf("Entre com a base: ");
    scanf("%d", &base);
    printf("Entre com a altura: ");
    scanf("%d", &altura);

    //caculo da formula da area
    area = area_retangulo(base, altura);

    printf("A area = %d", area);
    return 1;
}

//funcao que calcula a area do retangulo
//recebe como parametros os valores da base
//e da altura e retorna a formula
int area_retangulo(int b, int h){
    int resultado = b*h;
    return resultado;
}