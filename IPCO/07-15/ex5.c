#include <stdio.h>
#include <string.h>
#define TAM 50
int main(){

    char texto[TAM];
    int i, cont;

    printf("Digite a string:");
    scanf("%s",texto);

    for(i=0;i<TAM;i++){
        if(texto[i]=='1'){
            cont++;
        }
    }

    printf("A string contém %d vezes o número 1",cont);
}