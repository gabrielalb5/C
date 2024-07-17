#include <stdio.h>
#include <string.h>
#define TAM 50
int main(){

    char p1[TAM], p2[TAM], p3[TAM];
    int org;

    printf("Palavra 1: ");
    scanf("%s",p1);
    printf("Palavra 2: ");
    scanf("%s",p2);
    printf("Palavra 3: ");
    scanf("%s",p3);

    if(strcmp(p1,p2)<0 && strcmp(p1,p3)<0){
        if(strcmp(p2,p3)<0){
            printf("Ordem alfabetica: %s, %s e %s",p1,p2,p3);
        }else{
            printf("Ordem alfabetica: %s, %s e %s",p1,p3,p2);
        }
    }else if(strcmp(p2,p3)<0 && strcmp(p2,p1)<0){
        if(strcmp(p1,p3)<0){
            printf("Ordem alfabetica: %s, %s e %s",p2,p1,p3);
        }else{
            printf("Ordem alfabetica: %s, %s e %s",p2,p3,p1);
        }
    }else if(strcmp(p3,p1)<0 && strcmp(p3,p2)<0){
        if(strcmp(p1,p2)<0){
            printf("Ordem alfabetica: %s, %s e %s",p3,p1,p2);
        }else{
            printf("Ordem alfabetica: %s, %s e %s",p3,p2,p1);
        }
    }else{
        printf("Palavras iguais");
    }

    return 0;
}