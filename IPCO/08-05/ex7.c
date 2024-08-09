#include <stdio.h>
#define LINHA 5
#define COLUNA 3

void lerMatriz(float mat[LINHA][COLUNA]);
void verifEstoque(float mat[LINHA][COLUNA]);
void custoProdutos(float mat[LINHA][COLUNA]);
void custoArmazem(float mat[LINHA][COLUNA]);

int main(){
    float mat[LINHA][COLUNA];
    lerMatriz(mat);
    verifEstoque(mat);
    custoProdutos(mat);
    custoArmazem(mat);

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

void verifEstoque(float mat[LINHA][COLUNA]){
    int totalArmazem, menorEstoque=0, menorEstoqueLoja=0, Produto2 = 0, Produto2Loja = 0;

    printf("\n\nTotal de itens por armazém\n");
    for(int i=0;i<LINHA-1;i++){
        totalArmazem = 0;
        for(int j=0;j<COLUNA;j++){
            totalArmazem += mat[i][j];
            if(j==1 && i==0){
                Produto2 = mat[i][j];
                Produto2Loja = i+1;
            }else if(j==1 && mat[i][j]>Produto2){
                Produto2 = mat[i][j];
                Produto2Loja = i+1;
            }
        }
        if(i==0){
            menorEstoque = totalArmazem;
            menorEstoqueLoja = i+1;
        }else if(totalArmazem<menorEstoque){
            menorEstoque = totalArmazem;
            menorEstoqueLoja = i+1;
        }
        printf("Armazém %d: %d itens\n",i+1,totalArmazem);
    }
    printf("\n\nArmazém %d tem o maior estoque do Produto 2 (%d itens)\n",Produto2Loja,Produto2);
    printf("\n\nArmazém %d tem o menor estoque (%d itens)\n",menorEstoqueLoja,menorEstoque);
}

void custoProdutos(float mat[LINHA][COLUNA]){
    float cp1=0, cp2=0, cp3=0;
    for(int i=0;i<LINHA-1;i++){
        for(int j=0;j<COLUNA;j++){ 
            switch(j){
                case 0: cp1 += mat[i][j];
                        break;
                case 1: cp2 += mat[i][j];
                        break;
                case 2: cp3 += mat[i][j];
                        break;
                default: printf("Erro ao acessar loja");
                         break;
            }
        }    
    }

    for(int j=0;j<COLUNA;j++){ 
        switch(j){
            case 0: cp1 *= mat[LINHA-1][j];
                    break;
            case 1: cp2 *= mat[LINHA-1][j];
                    break;
            case 2: cp3 *= mat[LINHA-1][j];
                    break;
            default: printf("Erro ao acessar loja");
                        break;
        }
    }
    printf("\n\nCusto total dos produtos\n");
    printf("Produto 1: R$%.2f\nProduto 2: R$%.2f\nProduto 3: R$%.2f\n",cp1,cp2,cp3);
}

void custoArmazem(float mat[LINHA][COLUNA]){
    float custoArmazem;

    printf("\n\nCusto por armazém\n");
    for(int i=0;i<LINHA-1;i++){
        custoArmazem = 0;
        for(int j=0;j<COLUNA;j++){ 
            custoArmazem += mat[i][j]*mat[LINHA-1][j];
        }
        printf("Armazém %d: R$%.2f\n",i+1,custoArmazem);
    }
}