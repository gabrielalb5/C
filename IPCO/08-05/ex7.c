#include <stdio.h>
#define LINHA 5
#define COLUNA 3

void lerMatriz(float mat[LINHA][COLUNA]);

int main(){

    int totalArmazem, menorEstoque=0, menorEstoqueLoja=0;
    float mat[LINHA][COLUNA];
    lerMatriz(mat);

    printf("\n\nTotal de itens por armazém\n");
    for(int i=0;i<LINHA-1;i++){
        totalArmazem = 0;
        for(int j=0;j<COLUNA;j++){
            totalArmazem += mat[i][j];
        }
        if(i==0){
            menorEstoque = totalArmazem;
            menorEstoqueLoja = i+1;
        }else if(totalArmazem<menorEstoque){
            menorEstoque = totalArmazem;
            menorEstoqueLoja = i+1;
        }
        printf("Armazém %d: %.0f itens\n",i+1,totalArmazem);
    }
    printf("\n\nArmazém %d tem o menor estoque (%d itens)\n",menorEstoqueLoja,menorEstoque);

    return 0;
}

void lerMatriz(float mat[LINHA][COLUNA]){
    printf("Estoque por armazém\n");
    for(int i=0;i<LINHA-1;i++){
        for(int j=0;j<COLUNA;j++){
            printf("Armazém %d - Produto %d: ",i+1,j+1);
            scanf("%f",&mat[i][j]);
        }
        printf("\n");
    }
    printf("\nPreços por produto\n");
    for(int j=0;j<COLUNA;j++){
        printf("Produto %d: R$",j+1);
        scanf("%f",&mat[LINHA-1][j]);
    }
}
