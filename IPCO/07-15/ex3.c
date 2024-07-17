#include <stdio.h>
#include <string.h>
#define TAM 50
int main(){

    char nome[TAM];

    printf("Digite um nome: ");
    scanf("%s",nome);

    if(nome[0] == 'c' || nome[0] == 'C'){
        printf("A primeira letra do nome é C");
    }else{
        printf("O nome não começa com C");
    }

    return 0;
}