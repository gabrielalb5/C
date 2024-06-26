/*Faça um programa em Linguagem C que leia a idade e o tempo de
serviço de um trabalhador, e escreva se ele pode ou não se aposentar. As condições
para aposentadoria são:
- Ter pelo menos 65 anos
- Ou ter trabalhado pelo menos 35 anos
- Ou ter pelo menos 60 anos e trabalhado pelo menos 30 anos.
*/

#include <stdio.h>
int main(){
    int idade;
    float servico;

    printf("APOSENTADORIA\n");
    printf("Digite a idade: ");
    scanf("%d",&idade);
    printf("Digite o tempo de servico: ");
    scanf("%f",&servico);

    if((idade==65)||(servico==35)||((idade==60) && (servico==30))){
        printf("Voce pode se aposentar.");
    }else{
        printf("Ainda nao e possivel se aposentar.");
    }

    return 0;
}