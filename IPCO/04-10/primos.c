//IMPRIMIR NÚMEROS PRIMOS
#include <stdio.h>
int main(){

    int num, cont=0;

    printf("Digite um numero inicial: ");
    scanf("%d",&num);

    while(cont<100){
        if(num%2!=0 && num%3!=0 && num%5!=0 && num%7!=0){
            printf("%d ",num);
            cont++;
        }else if(num==2 || num==3 || num==5 || num==7){
            printf("%d ",num);
            cont++;
        }
        num++;
    }

    return 0;
}