#include <stdio.h>
#define LINHA 4
#define COLUNA 3

int main(){

    int i, j, mat[LINHA][COLUNA], maior= -999999, linha, coluna;

    for(i=0;i<LINHA;i++){
        for(j=0;j<COLUNA;j++){
            printf("Matriz linha %d coluna %d: ",i,j);
            scanf("%d",&mat[i][j]);
            if(mat[i][j]>maior){
                maior = mat[i][j];
                linha = i;
                coluna = j;
            };
        };
    };

    printf("\nMatriz\n");
    for(i=0;i<LINHA;i++){
        for(j=0;j<COLUNA;j++){
            printf("%d ",mat[i][j]);
        };
        printf("\n");
    };
    printf("\nMaior número %d localizado na linha %d e coluna %d", maior, linha, coluna);
    return 0;
}