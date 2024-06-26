/*Fahrenheit para Celsius com função*/
#include <stdio.h>

float FahrenheitToCelsius(int Fahrenheit);

int main(){
    int fah;
    float resultado;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%d", &fah);
    resultado = FahrenheitToCelsius(fah);
    printf("Temperatura convertida = %f°C",resultado);
    return 0;
}

float FahrenheitToCelsius(int f){
    float resultado;
    resultado = (f-32)/1.8;
    return resultado;
}