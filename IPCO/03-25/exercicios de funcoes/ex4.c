/*Media ponderada*/

#include <stdio.h>

float MediaPonderada(float nota1, float peso1, float nota2, float peso2);

int main(){
    float n1, n2, p1, p2, media;
    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("Digite o primeiro peso: ");
    scanf("%f",&p1);
    printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    printf("Digite o segundo peso: ");
    scanf("%f",&p2);

    media = MediaPonderada(n1,p1,n2,p2);
    printf("Media = %.2f", media);
    return 0;
}

float MediaPonderada(float nota1, float peso1, float nota2, float peso2){
    float resultado = ((nota1*peso1)+(nota2*peso2))/(peso1+peso2);
    return resultado;
}