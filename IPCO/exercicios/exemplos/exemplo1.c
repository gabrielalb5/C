/* Programa que determina a média de três números dados */
#include <stdio.h>
int main(){
    float a, b, c, media;

    puts("Digite três números");
    scanf("%f %f %f", &a, &b, &c);

    media = (a + b + c)/3;
    
    printf("A media dos números %f , %f e %f é igual a %f ", a, b, c, media);
    return 0;
} 