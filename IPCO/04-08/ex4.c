#include <stdio.h>
int main(){
    
    int i, n, resultado=1;

    printf("CALCULADORA DE FATORIAL\n");
    printf("Digite um numero inteiro maior ou igual a 0: ");
    scanf("%d",&n);

    while(n<0){
        printf("Erro. Digite um numero valido: ");
        scanf("%d",&n);
    }

    for(i=1;i<=n;i++){
        resultado = resultado*i;
    }

    printf("%d! = %d",n,resultado);

    return 0;
}