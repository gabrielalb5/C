/*Escreva programas para converter uma temperatura dada em graus Fahrenheit para graus Celsius.*/
#include <stdio.h>
int main(){

    float tempF, tempC;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &tempF);

    tempC = (tempF-32)/1.8;

    printf("Temperatura convertida em graus Celsius: %.2f °C", tempC);
    getchar();
    return 0;
}