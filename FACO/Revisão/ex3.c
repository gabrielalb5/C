#include <stdio.h>
    int main(){
    
    //Entrada
    int x, y, aux;

    printf("Digite o X: ");
    scanf("%d",&x);
    printf("Digite o Y: ");
    scanf("%d",&y);

    //Processamento
    if(x>y){
        aux=x;
        x=y;
        y=aux;
    }else{
        x*=2;
        y*=3;
    }

    //Saída
    printf("x = %d e y = %d",x,y);
    
    return 0;
}
