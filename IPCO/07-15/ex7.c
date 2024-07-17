#include <stdio.h>
#include <string.h>
#define TAM 50

void lerVetor(char texto[TAM]);
void vogais(char texto[TAM]);
void imprimir(char texto[TAM]);

int main(){
    char texto[TAM];

    lerVetor(texto);
    vogais(texto);

    return 0;
}

void lerVetor(char texto[TAM]){
    printf("Digite a string: ");
    scanf("%s",texto);
}

void vogais(char texto[TAM]){
    int i, cont=0;
    for(i=0;i<TAM;i++){
        if(texto[i]=='a' || texto[i]=='A' ||texto[i]=='e' || texto[i]=='E' || texto[i]=='i' || texto[i]=='I' || texto[i]=='o' || texto[i]=='O' || texto[i]=='u' || texto[i]=='U'){
            cont++;
        }
    }
    printf("A string contém %d vogais",cont);
}