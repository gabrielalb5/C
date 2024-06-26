/*Escreva um programa para classificar um triângulo de lados de comprimentos dados em
escaleno (os três lados de comprimentos diferentes), isósceles (dois lados de comprimentos iguais)
ou equilátero (os três lados de comprimentos iguais).*/

#include <stdio.h>

int main(){
    float l1, l2, l3;

    printf("DIGITE OS LADOS DO TRIANGULO\n");
    printf("Lado 1: ");
    scanf("%f",&l1);
    printf("Lado 2: ");
    scanf("%f",&l2);
    printf("Lado 3: ");
    scanf("%f",&l3);
    
    if(l1==l2 && l1==l3){
        printf("Equilatero");
    }else if(l1!=l2 && l2!=l3 && l1!=l3){
        printf("Escaleno");
    }else{
        printf("Isoceles");
    }
    
    return 0;
}