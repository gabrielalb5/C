#include <stdio.h>
#define LINHA 12
#define COLUNA 2

void lerMatriz(float mat[LINHA][COLUNA]);
int mesExtenso(int mes);
void totalMes(float mat[LINHA][COLUNA]);
void totalQuinzena(float mat[LINHA][COLUNA]);
void totalAno(float mat[LINHA][COLUNA]);

int main(){

    float mat[LINHA][COLUNA];
    lerMatriz(mat);
    totalMes(mat);
    totalQuinzena(mat);
    totalAno(mat);    

    return 0;
}

void lerMatriz(float mat[LINHA][COLUNA]){
    printf("Quanto foi vendido?\n");
    for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            printf("Mês %d - Quinzena %d: ",i+1,j+1);
            scanf("%f",&mat[i][j]);
        }
    }
}

void totalMes(float mat[LINHA][COLUNA]){
    float total;
    printf("\n\nTotal de vendas por mês\n");
    for(int i=0;i<LINHA;i++){
        total = 0;
        for(int j=0;j<COLUNA;j++){
            total += mat[i][j];
        }
        mesExtenso(i+1);
        printf("%.2f\n",total);
    }
}

void totalQuinzena(float mat[LINHA][COLUNA]){
    float q1=0, q2=0;
    printf("\n\nTotal de vendas por quinzena\n");
    for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            if(j==0){
                q1 += mat[i][j];
            }else{
                q2 += mat[i][j];
            }
        }
    }
    printf("Primeira: R$%.2f\n",q1);
    printf("Segunda: R$%.2f\n",q2);
}

void totalAno(float mat[LINHA][COLUNA]){
    float total=0;
    for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            total += mat[i][j];
        }
    }
    printf("\n\nTotal de vendas no ano: R$%.2f\n", total);
}

int mesExtenso(int mes){
    switch(mes) {
        case 1:
            printf("Janeiro: R$");
            break;
        case 2:
            printf("Fevereiro: R$");
            break;
        case 3:
            printf("Março: R$");
            break;
        case 4:
            printf("Abril: R$");
            break;
        case 5:
            printf("Maio: R$");
            break;
        case 6:
            printf("Junho: R$");
            break;
        case 7:
            printf("Julho: R$");
            break;
        case 8:
            printf("Agosto: R$");
            break;
        case 9:
            printf("Setembro: R$");
            break;
        case 10:
            printf("Outubro: R$");
            break;
        case 11:
            printf("Novembro: R$");
            break;
        case 12:
            printf("Dezembro: R$");
            break;
        default:
            printf("Mês inválido.");
            break;
    }
}