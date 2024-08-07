#include <stdio.h>
#define LINHA 3
#define COLUNA 3

void lerMatriz(int mat[LINHA][COLUNA]);
void imprimirMatriz(int mat[LINHA][COLUNA]);

int main(){

    int mat[LINHA][COLUNA];

    lerMatriz(mat);
    imprimirMatriz(mat);

    return 0;
}

void lerMatriz(int mat[LINHA][COLUNA]){
    int i, j, maior= -999999, menor= 999999;
    for(i=0;i<LINHA;i++){
        for(j=0;j<COLUNA;j++){
            printf("Matriz linha %d coluna %d: ",i,j);
            scanf("%d",&mat[i][j]);
            if(mat[i][j]>maior){
                maior = mat[i][j];
            }
            if(mat[i][j]<menor){
                menor = mat[i][j];
            }
        };
    };
    printf("\nAmplitude %d (%d-%d)", maior-menor, maior, menor);
}

void imprimirMatriz(int mat[LINHA][COLUNA]){
    int i, j;
    printf("\n\nMatriz\n");
    for(i=0;i<LINHA;i++){
        for(j=0;j<COLUNA;j++){
            printf("%d ",mat[i][j]);
        };
        printf("\n");
    };
}