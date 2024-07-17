#include <stdio.h>
#include <string.h>
#define TAM 50
int main(){

    char p1[TAM], p2[TAM];
    int org;

    printf("Palavra 1: ");
    scanf("%s",p1);
    printf("Palavra 2: ");
    scanf("%s",p2);

    org = strcmp(p1,p2);
    if(org==0){
        printf("Palavras iguais");
    }else if(org<0){
        printf("Palavras ordenadas: %s, %s",p1,p2);
    }else{
        printf("Palavras ordenadas: %s, %s",p2,p1);
    }

    return 0;
}