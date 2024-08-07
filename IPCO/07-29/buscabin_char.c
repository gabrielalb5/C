#include <stdio.h>
#define TAM 10

int PesqBin(int numeros[], int x);

int main(){
    // declaração da variáveis composta e inicialização
    int numeros[TAM] = {14, 18, 27, 32, 37, 60, 64, 70, 90, 95};
    int buscar, posicao;
    printf("Entre com o valor que deseja buscar: ");
    scanf("%d", &buscar);
    posicao = PesqBin(numeros, buscar);
    if(posicao == -1)
       printf("Valor nao encontrado");
    else
       printf("Valor encontrado na posicao %d", posicao+1);
    return 0;
}

int PesqBin(int numeros[], int x){
    int ini=0, fim=TAM, meio; 
	
	while(ini<=fim){ 
		meio=(ini+fim)/2; 
		if(numeros[meio]==x) return meio; // se achei o número, retorno o valor de meio
		if(numeros[meio]<x) ini=meio+1; // se o número está na frente, olho para a metade depois de meio
		if(numeros[meio]>x) fim=meio-1; // se o número está atrás, olho para a metade antes de meio
	}
	return -1;
}
