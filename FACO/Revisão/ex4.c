#include <stdio.h>
    int main(){

    //Entrada
    float x,y,z;

    printf("Digite o lado x: ");
    scanf("%f",&x);
    printf("Digite o lado y: ");
    scanf("%f",&y);
    printf("Digite o lado z: ");
    scanf("%f",&z);

    //Processamento
    if(x<y+z && y<x+z && z<x+y){
        if((x==y && y!=z) || (x==z && x!=y) || (y==z && z!=x)){
            printf("É um triângulo isóceles"); //Saída
        }else if( x==y && y==z){
            printf("É um triângulo equilátero"); //Saída
        }else{
            printf("É um triângulo escaleno"); //Saída
        }
    }else{
        printf("Não é um triângulo"); //Saída
    }
    
    return 0;
}