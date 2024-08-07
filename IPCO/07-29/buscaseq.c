#include <stdio.h>
#define TAM 10

int PesqSeq(int numeros[], int x);

int main(){
    // declaração da variáveis composta e inicialização
    int numeros[TAM] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
    int buscar, posicao;
    printf("Entre com o valor que deseja buscar: ");
    scanf("%d", &buscar);
    posicao = PesqSeq(numeros, buscar);
    if(posicao == -1)
       printf("Valor nao encontrado");
    else
       printf("Valor encontrado na posicao %d", posicao+1);
    return 0;
}

int PesqSeq(int numeros[], int x){
    int i = 0;
    while ((numeros[i] != x) && (i < TAM))
        i = i + 1;
    if (i < TAM)
        return i;
    else
        return -1;
}