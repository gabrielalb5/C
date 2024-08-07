#include <stdio.h>
#define TAM 10

int PesqSeq(char letras[], char x);

int main(){
    // declaração da variáveis composta e inicialização
    char letras[TAM] = {'a', 'r', 'P', 'q', 'M', 'l', 'v', 'x', 'I', 'D'};
    char letra;
    int posicao;
    printf("Entre a letra que deseja buscar: ");
    scanf("%d", &letra);
    posicao = PesqSeq(letras, letra);
    if(posicao == -1)
       printf("Valor nao encontrado");
    else
       printf("Valor encontrado na posicao %d", posicao+1);
    return 0;
}

int PesqSeq(char letras[], char x){
    int i = 0;
    while ((letras[i] != x) && (i < TAM))
        i = i + 1;
    if (i < TAM)
        return i;
    else
        return -1;
}