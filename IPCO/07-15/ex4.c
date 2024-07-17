#include <stdio.h>
#include <string.h>
#define TAM 50
int main(){

    char nome[TAM];
    int i;

    printf("Digite um nome: ");
    scanf("%s",nome);

    for(i=0;i<4;i++){
        printf("%c",nome[i]);
    }

    return 0;
}