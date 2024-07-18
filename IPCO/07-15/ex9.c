#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){

    int i=0, cont=0, maior=0, menor=999;
    int idade[TAM];
    char nome[TAM][TAM];

    printf("Nome: ");
    scanf(" %s", nome[i]);
    printf("Idade: ");
    scanf(" %d",&idade[i]);

    while(idade[i]>0 && cont<TAM){
        cont++;
        i++;
        printf("\nNome: ");
        scanf(" %s", nome[i]);
        printf("Idade: ");
        scanf(" %d",&idade[i]);
        if(idade[i]<menor && idade[i]>0){
            menor = i;
        }
        if(idade[i]>maior){
            maior = i;
        }
    }
    
    if(cont==0){
        printf("\nNinguém cadastrado");
    }else if(cont==1){
        printf("Apenas uma pessoa cadastrada. %s é a pessoa mais velha e mais nova (%d anos)",nome[i-1],idade[i-1]);
    }else{
        printf("\n--- Pessoas ---\n");
        for(i=0;i<cont;i++){
            if(idade[i]>0){
                printf("%s tem %d anos\n",nome[i],idade[i]); 
            }
        }
        printf("Mais velha: %s - %d anos\n",nome[maior],idade[maior]);
        printf("Mais novo: %s - %d anos",nome[menor],idade[menor]);   
    }

    return 0;
}