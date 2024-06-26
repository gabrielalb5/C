/*Escreva programas para converter uma temperatura dada em graus Fahrenheit para graus Celsius.*/
#include <stdio.h>

float FahrenheitCelsius(float tempF){
    float tempC = (tempF-32)/1.8;
    return(tempC);
}

int main(){
    float tempF;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &tempF);

    printf("Temperatura convertida em graus Celsius: %.2f °C", FahrenheitCelsius(tempF));
    getchar();
    return 0;
}