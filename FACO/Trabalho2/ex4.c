/*Dados os conjuntos: x = {0, 1, 3, 4, 6, 9, 11} e y = {1, 3, 6, 9, 11, 13, 15} escreva um algoritmo que calcule:*/
#include <stdio.h>
#include <stdbool.h>
int main(){
    int x[7] = {0, 1, 3, 4, 6, 9, 11}, y[7] = {1, 3, 6, 9, 11, 13, 15};
    int somatorio_x=0, somatorio_y=0, primos_x=0, primos_y=0, i, j;
    bool encontrado;

    for(i=0;i<7;i++){
        somatorio_x += x[i];
        somatorio_y += y[i];
    }
    printf("A) Multiplicação dos somatórios = %d",somatorio_x*somatorio_y);

    printf("\nB) Intersecção de x e y:");
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
           if(x[i]==y[j]){
            printf(" %d",x[i]);
            } 
        }
    }
    
    printf("\nC) União de x e y:");
    for(i=0;i<7;i++){
        printf(" %d",x[i]);
    }
    for(i=0;i<7;i++){
        encontrado = false;
        for(j=0;j<7;j++){
           if(y[i]==x[j]){
                encontrado = true;
                break; 
           }
        }
        if(!encontrado){
            printf(" %d",y[i]);
        }
    }
    
    for(i=0;i<7;i++){
        if((x[i]==2 || x[i]==3 || x[i]==5 || x[i]==7) || (x[i]%2!=0 && x[i]%3!=0 && x[i]%5!=0 && x[i]%7!=0)){
            primos_x += 1;
        }
        if((y[i]==2 || y[i]==3 || y[i]==5 || y[i]==7) || (y[i]%2!=0 && y[i]%3!=0 && y[i]%5!=0 && y[i]%7!=0)){
            primos_y += 1;
        }
    }
    
    printf("\nD) Primos em x: %d | Primos em y: %d",primos_x,primos_y);
    
    return 0;
}