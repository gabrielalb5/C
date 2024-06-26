/*Calcule a média de um aluno na disciplina de ARQIPCO. Para isso solicite as notas das
avaliações e seus respectivos pesos. Mostre a média como resultado e caso ela seja maior ou igual
a 6.0, informe que o aluno foi aprovado.
Observação: para esse exercício não considere a frequência.*/

#include <stdio.h>

float MediaPonderada(float n1, float p1, float n2, float p2, float n3, float p3);

int main(){
    float n1, n2, n3, p1, p2, p3, media;
    printf("Digite os PESOS\n");
    printf("Peso dos exercícios: ");
    scanf("%f",&p1);
    printf("Peso da Avaliação 1: ");
    scanf("%f",&p2);
    printf("Peso da Avaliação 2: ");
    scanf("%f",&p3);

    printf("\nDigite as NOTAS\n");
    printf("Nota dos exercícios: ");
    scanf("%f",&n1);
    printf("Nota da Avaliação 1: ");
    scanf("%f",&n2);
    printf("Nota da Avaliação 2: ");
    scanf("%f",&n3);

    media = MediaPonderada(n1,p1,n2,p2,n3,p3);
    printf("Media = %.2f", media);
    
    if(media>=6){
        printf("\nAPROVADO!");
    }else{
        printf("\nREPROVADO.");
    }

    return 0;
}

float MediaPonderada(float n1, float p1, float n2, float p2, float n3, float p3){
    return(((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3));
}