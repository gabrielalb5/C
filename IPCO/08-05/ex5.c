#include <stdio.h>
#define LINHA 3
#define COLUNA 4

void lerMatriz(int mat[LINHA][COLUNA]);
void imprimirMatriz(int mat[LINHA][COLUNA]);
void imprimirTabela(int mat[LINHA][COLUNA]);

int main(){

    int mat[LINHA][COLUNA];
    lerMatriz(mat);
    imprimirMatriz(mat);
    imprimirTabela(mat);

    return 0;
}

void lerMatriz(int mat[LINHA][COLUNA]){
    printf("Leitura da matriz\n");
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            printf("Linha %d Coluna %d: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void imprimirMatriz(int mat[LINHA][COLUNA]){
    printf("\nMatriz\n");
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void imprimirTabela(int mat[LINHA][COLUNA]){
    int menor_col, menor_val;
    printf("\nTabela de menores valores\n");
    printf("Linha | Menor valor | Coluna\n");
    for(int i = 0; i < LINHA; i++){
        menor_val = 0; menor_col = 0;
        for(int j = 0; j < COLUNA; j++){
            if(j==0){
                menor_col = j;
                menor_val = mat[i][j];
            }else if(mat[i][j]<menor_val){
                menor_col = j;
                menor_val = mat[i][j];
            }
        }
        printf("  %d   |      %d      |    %d ",i+1,menor_val,menor_col+1);
        printf("\n");
    }
}