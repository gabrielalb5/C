/* O cardápio de uma lanchonete é mostrado abaixo. Faça um programa que leia
o pedido do cliente, calcule e exiba o valor da sua conta. Caso o cliente peça para exibir o
valor da conta dividido, pergunte por quantas pessoas e exiba o valor correspondente.*/

#include <stdio.h>

int main(){

    int xsalada, xburger, hotdog, batata, refri, opcao, pessoas;
    float total;

    printf("-------- MENU --------\n");
    printf("X-salada .......... R$20\n");
    printf("X-burger .......... R$25\n");
    printf("Hot dog ........... R$15\n");
    printf("Batata frita ...... R$15\n");
    printf("Refrigerante (lata) R$8\n");

    printf("\nDIGITE A QUANTIDADE QUE VOCE DESEJA DE CADA ITEM\n");
    printf("X-salada: ");
    scanf("%d",&xsalada);
    printf("X-burger: ");
    scanf("%d",&xburger);
    printf("Hot dog: ");
    scanf("%d",&hotdog);
    printf("Batata frita: ");
    scanf("%d",&batata);
    printf("Refrigerante (lata): ");
    scanf("%d",&refri);

    xsalada = xsalada*20;
    xburger = xburger*25;
    hotdog = hotdog*15;
    batata = batata*15;
    refri = refri*8;

    total = xsalada+xburger+hotdog+batata+refri;

    printf("Total do pedido: R$%.2f",total);
    printf("\nDeseja dividir esse valor? [0] Nao [1] Sim\n");
    scanf("%d",&opcao);
    
    if(opcao==1){
        printf("Por quantas pessoas deseja dividir? ");
        scanf("%d",&pessoas);

        total = total/pessoas;

        printf("Valor por pessoa: R$%.2f\n",total);
    }

    printf("Pedido finalizado. Obrigado!");
    return 0;
}