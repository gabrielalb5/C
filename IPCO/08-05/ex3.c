#include <stdio.h>
#define LINHA 3
#define COLUNA 3

void lerMatriz(int mat[LINHA][COLUNA]);
void imprimirMatriz(int mat[LINHA][COLUNA]);
int conta(int matriz[LINHA][COLUNA], int x);
void calcularfreq(int matriz[LINHA][COLUNA], int f[LINHA][COLUNA]);

int main(){
    int freq[LINHA][COLUNA];
    int mat[LINHA][COLUNA];
    lerMatriz(mat);
    imprimirMatriz(mat);
    calcularfreq(mat,freq);
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
printf("\n Dados armazenados na matriz \n");
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int conta(int matriz[LINHA][COLUNA], int num_guardado_matriz){
int cont_vezes = 0;
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(matriz[i][j] == num_guardado_matriz){
            cont_vezes++;
            }
        }
    }
    return(cont_vezes);
}

void calcularfreq(int matriz[LINHA][COLUNA], int f[LINHA][COLUNA]){
    int moda=0, qtd=0;
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            f[i][j] = conta(matriz, matriz[i][j]);
            if(f[i][j]>qtd){
                moda = matriz[i][j];
                qtd = f[i][j];
            }
        }
    }

    printf("\nDados armazenados na frequencia \n");

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            printf("%d = %d   ", matriz[i][j], f[i][j]);
        }
        printf("\n");
    }

    if(qtd<=1){
        printf("\nNão existe moda");
    }else{
        printf("\n\nModa %d que aparece %d vezes",moda,qtd);
    }

}