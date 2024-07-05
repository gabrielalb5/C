#include <stdio.h>
int main(){

    //Entrada
    int x,y;
    printf("Digite o coordenada x: ");
    scanf("%d",&x);
    printf("Digite o coordenada y: ");
    scanf("%d",&y);

    //Processamento
    while(x!=0 && y!=0){
        if(x>0 && y>0){
            printf("1 Quadrante\n"); //Saída
        }else if(x<0 && y>0){
            printf("2 Quadrante\n"); //Saída
        }else if(x<0 && y<0){
            printf("3 Quadrante\n"); //Saída
        }else{
            printf("4 Quadrante\n"); //Saída
        }

        printf("Digite o coordenada x: ");
        scanf("%d",&x);
        printf("Digite o coordenada y: ");
        scanf("%d",&y);
    }
    
    return 0;
}
