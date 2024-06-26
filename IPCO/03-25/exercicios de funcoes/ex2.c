/*Maior multiplo de um inteiro que cabe em um limite*/
#include <stdio.h>

int MaiorMultiplo(int inteiro, int maior);

int main(){
    int limite, n, resultado;

    printf("Digite o limite: ");
    scanf("%d", &limite);
    printf("Digite um número: ");
    scanf("%d", &n);
    
    resultado = MaiorMultiplo(limite, n);

    printf("\nO maior múltiplo de %d que cabe em %d é %d ", n, limite, resultado);
    getchar();
    return 0;
}

int MaiorMultiplo(int inteiro, int maior){
    int vezes, maiorMult;
    vezes = inteiro/maior;
    maiorMult = maior*vezes;
    return(maiorMult);
}