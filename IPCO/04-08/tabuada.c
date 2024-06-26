#include <stdio.h>
void imprimirTabuada(int numero);
int main(){
    int numero;
    printf("Informe um número: ");
    scanf("%d", &numero);
    imprimirTabuada(numero);
    return 0;
}
void imprimirTabuada(int numero){
    int i;
    printf("Tabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++){
        printf("\n%d x %2d = %2d", numero, i, (numero * i));
    }
}
