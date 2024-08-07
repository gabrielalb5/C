#include <stdio.h>
#define TAM 10

int PesqBin(char letras[], int x);

int main(){
    // declaração da variáveis composta e inicialização
    char letras[TAM] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char letra;
    int  posicao;
    printf("Entre com o valor que deseja buscar: ");
    scanf(" %c", &letra);
    posicao = PesqBin(letras, letra);
    if(posicao == -1)
       printf("Valor nao encontrado");
    else
       printf("Valor encontrado na posicao %d", posicao+1);
    return 0;
}

int PesqBin(char letras[], int x){
    int ini=0, fim=TAM, meio; 
	
	while(ini<=fim){ 
		meio=(ini+fim)/2; 
		if(letras[meio]==x) return meio;
		if(letras[meio]<x) ini=meio+1;
		if(letras[meio]>x) fim=meio-1;
	}
	return -1;
}
