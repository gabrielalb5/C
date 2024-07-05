#include <stdio.h>
int main(){

    //Entrada
    float n1, n2, media;
    printf("Digite a nota da primeira avaliação: ");
    scanf("%f", &n1);

    //Processamento
    while(n1<0 || n1>10){
        printf("Nota 1 inválida, intervalo apenas de 0 a 10\n");
        printf("Digite a nota da primeira avaliação: ");
        scanf("%f", &n1);
    }

    printf("Digite a nota da segunda avaliação: ");
    scanf("%f", &n2);

    while(n2<0 || n2>10){
        printf("Nota 2 inválida, intervalo apenas de 0 a 10\n");
        printf("Digite a nota da primeira avaliação: ");
        scanf("%f", &n2);
    }

    media = (n1+n2)/2;

    printf("A média semestral é: %.2f", media); //Saída
    
    return 0;
}
