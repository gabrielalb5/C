/*Criar um programa em C que informe a quantidade total de calorias de
uma refeição de acordo com as escolhas do usuário, que deverá informar o prato, a
sobremesa e a bebida.*/

#include <stdio.h>
int main(){

    int prato, sobremesa, bebida, cal;

    printf("REFEICAO E CALORIAS\n\n");
    printf("PRATO ------- Calorias\n");
    printf("1. Vegetariano 180kcal\n");
    printf("2. Peixe ..... 230kcal\n");
    printf("3. Frango .... 250kcal\n");
    printf("4. Carne ..... 350kcal\n");
    printf("Escolha um prato [1-4]: ");
    scanf("%d",&prato);

    printf("\nSOBREMESA ----------- Calorias\n");
    printf("1. Abacaxi ............ 75kcal\n");
    printf("2. Sorvete diet ...... 110kcal\n");
    printf("3. Mousse diet ....... 170kcal\n");
    printf("4. Mousse de chocolate 200kcal\n");
    printf("Escolha uma sobremesa [1-4]: ");
    scanf("%d",&sobremesa);

    printf("\nBEBIDA ----------- Calorias\n");
    printf("1. Cha ............. 20kcal\n");
    printf("2. Suco de laranja . 70kcal\n");
    printf("3. Suco de melao .. 100kcal\n");
    printf("4. Refrigerante diet 65kcal\n");
    printf("Escolha uma bebida [1-4]: ");
    scanf("%d",&bebida);

    switch (prato){
        case 1:{
            cal = 180;
            break;
        }case 2:{
            cal = 230;
            break;
        }case 3:{
            cal = 250;
            break;
        }case 4:{
            cal = 350;
            break;
        }default:{
            printf("\nPrato invalido.");
            break;
        }
    }

    switch (sobremesa){
        case 1:{
            cal += 75;
            break;
        }case 2:{
            cal += 110;
            break;
        }case 3:{
            cal += 170;
            break;
        }case 4:{
            cal += 200;
            break;
        }default:{
            printf("\nSobremesa invalida.");
            break;
        }
    }

    switch (bebida){
        case 1:{
            cal += 20;
            break;
        }case 2:{
            cal += 70;
            break;
        }case 3:{
            cal += 100;
            break;
        }case 4:{
            cal += 65;
            break;
        }default:{
            printf("\nBebida invalida.");
            break;
        }
    }

    printf("\nTotal de calorias da refeicao: %d kcal",cal);

    return 0;
}