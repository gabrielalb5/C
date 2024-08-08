#include <stdio.h>
#define LINHA 3
#define COLUNA 5

void lerMatriz(float mat[LINHA][COLUNA]);
void guardarMedia(float mat[LINHA][COLUNA]);
void imprimirMatriz(float mat[LINHA][COLUNA]);

int main(){

    float mat[LINHA][COLUNA];
    lerMatriz(mat);
    guardarMedia(mat);
    imprimirMatriz(mat);

    return 0;
}

void lerMatriz(float mat[LINHA][COLUNA]){
    printf("Leitura da matriz\n");
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA-1; j++){
            printf("Linha %d Coluna %d: ",i,j);
            scanf("%f",&mat[i][j]);
        }
    }
}

void guardarMedia(float mat[LINHA][COLUNA]){
    float media=0;
    for(int i = 0; i < LINHA; i++){
        media = 0;
        for(int j = 0; j < COLUNA; j++){
            media += mat[i][j];
            if(j==COLUNA-1){
                mat[i][j] = media/(COLUNA-1);
            }
        }
        printf("\n");
    }
}

void imprimirMatriz(float mat[LINHA][COLUNA]){
    printf("\nMatriz e média por linha\n");
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(j==COLUNA-1){
               printf("%.2f ", mat[i][j]); 
            }else{
                printf("%.0f ", mat[i][j]);
            }
        }
        printf("\n");
    }
}