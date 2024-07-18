#include <stdio.h>
#include <string.h>
#define TAM 50

void lerVetor(char texto[TAM]);
void substituir(char texto[TAM], char l1[1], char l2[1]);
void imprimir(char texto[TAM]);

int main(){
    char texto[TAM], l1[1], l2[1];

    printf("Digite L1: ");
    scanf("%s",l1);
    printf("Digite L2: ");
    scanf("%s",l2);
    lerVetor(texto);
    substituir(texto,l1,l2);
    imprimir(texto);

}

void lerVetor(char texto[TAM]){
    printf("Digite a palavra: ");
    scanf("%s",texto);
}

void substituir(char texto[TAM], char l1[1], char l2[1]){
    int i;
    for(i=0;i<TAM;i++){
        if(texto[i]==l1[0]){
            texto[i]=l2[0];
        }
    }
    printf("%c",l1[0]);
    printf("%c",l2[0]);
}

void imprimir(char texto[TAM]){
    printf("Palavra: %s",texto);
}
