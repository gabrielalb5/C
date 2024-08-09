#include <stdio.h>
#include <string.h>
#define LINHA 5
#define COLUNA 5
#define TAM 50

void menos250(float mat[LINHA][COLUNA], char cidades[COLUNA][TAM]);
void todos(float mat[LINHA][COLUNA], char cidades[COLUNA][TAM], float consumo);
void distancia(float mat[LINHA][COLUNA], char cidades[COLUNA][TAM]);

int main(){

    char cidades[COLUNA][TAM] = {"Araraquara","São Carlos","Ribeirão Preto","Ibitinga","São Paulo"};
    float mat[LINHA][COLUNA] = {{0,44.2,92.2,73.3,277},{44.2,0,102,112,234},{92.2,102,0,145,314},{73.3,112,145,0,345},{277,234,314,345,0}};
    float consumo;

    printf("Digite o consumo de combustível (km por litro): ");
    scanf("%f",&consumo);

    menos250(mat, cidades);
    todos(mat, cidades, consumo);
    distancia(mat, cidades);
    
    return 0;
}

void menos250(float mat[LINHA][COLUNA], char cidades[COLUNA][TAM]){
    printf("\n\nPERCURSOS COM MENOS DE 250 KM\n");
    for(int i=0;i<LINHA;i++){
        for(int j=i+1;j<COLUNA;j++){
            if(mat[i][j]<=250){
                printf("%s - %s: %.2f km\n",cidades[i],cidades[j],mat[i][j]);
            }
        }
    }
}

void todos(float mat[LINHA][COLUNA], char cidades[COLUNA][TAM], float consumo){
    float combustivel;
    printf("\n\nTODOS OS PERCURSOS E GASTO DE COMBUSTÍVEL\n");
    for(int i=0;i<LINHA;i++){
        for(int j=i+1;j<COLUNA;j++){
            combustivel = mat[i][j]/consumo;
            printf("%s - %s: %.2f km, Consumo: %.2f litros\n",cidades[i],cidades[j],mat[i][j],combustivel);
        }
    }
}

void distancia(float mat[LINHA][COLUNA], char cidades[COLUNA][TAM]){
    float menorDist, maiorDist;
    char maiorOrigem[TAM], maiorDestino[TAM], menorOrigem[TAM], menorDestino[TAM];
    for(int i=0;i<LINHA;i++){
        for(int j=i+1;j<COLUNA;j++){
            if(i==0 && j==1){
                menorDist = mat[i][j];
                maiorDist = mat[i][j];
                strcpy(menorOrigem, cidades[i]);
                strcpy(menorDestino, cidades[j]);
                strcpy(maiorOrigem, cidades[i]);
                strcpy(maiorDestino, cidades[j]);
            }
            if(mat[i][j]<menorDist){
                menorDist = mat[i][j];
                strcpy(menorOrigem, cidades[i]);
                strcpy(menorDestino, cidades[j]);
            }
            if(maiorDist<mat[i][j]){
                maiorDist = mat[i][j];
                strcpy(maiorOrigem, cidades[i]);
                strcpy(maiorDestino, cidades[j]);
            }
            
        }
    }
    printf("\n\nMenor distância: %.2f de %s até %s\n",menorDist,menorOrigem,menorDestino);
    printf("Maior distância: %.2f de %s até %s\n",maiorDist,maiorOrigem,maiorDestino);
}