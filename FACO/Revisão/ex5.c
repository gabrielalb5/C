#include <stdio.h>
int main(){

    //Entrada
    int x,y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    //Processamento:
    while (x!=y){
        if (x>y){
            printf("Valores foram digitados em ordem decrescente\n");
        }else{
            printf("Valores foram digitados em ordem crescente\n");
        }

        printf("Digite o valor de X: "); //Saída
        scanf("%d", &x);
        printf("Digite o valor de Y: "); //Saída
        scanf("%d", &y);
    }
    
    return 0;
}
