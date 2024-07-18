#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){
    
    int i, j;
    char texto[TAM];
    char alfabeto[] = {"abcdefghijklmnopqrstuvwxyz"};
    
    printf("Digite o texto: ");
    scanf("%s",texto);
    
    for(i=0;i<TAM;i++){
        j=0;
        while(texto[i]!=alfabeto[j]){
            j++;
        }
        if(texto[i]=='x'){
            texto[i] = 'a';
        }else if(texto[i]=='y'){
            texto[i] = 'b';
        }else if(texto[i]=='z'){
            texto[i] = 'c';
        }else{
            texto[i] = alfabeto[j+3];
        }
    }
    
    printf("%s",texto);
    
    return 0;
}