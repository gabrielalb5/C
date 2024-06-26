/*Escreva um programa que determine o número de dias de um mês de acordo com o
mês e o ano informado pelo usuário*/

#include <stdio.h>

int main(){
    int dias, mes, ano;

    printf("QUANTIDADE DE DIAS DE UM MES E ANO\n");
    printf("Informe o numero do mes (1 ao 12): ");
    scanf("%d",&mes);
    printf("Informe o ano: ");
    scanf("%d",&ano);

    if(mes<=0 || mes>12){
        printf("INFORME UM MES VALIDO");
        return 0;
    }
    if(mes==2){
        if((ano%4==0 && ano%100!=0)||(ano%400==0)){
            dias = 29;
        }else{
            dias = 28;
        }
    }else if(mes==4 || mes==6 || mes==9 || mes==11){
        dias = 30;
    }else{
        dias = 31;
    }

    printf("O mes %d de %d tem %d dias",mes,ano,dias);
    
    return 0;
}