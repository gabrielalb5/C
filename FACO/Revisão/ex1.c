#include <stdio.h>
int main(){

    //Entrada
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d",&a);
    printf("Digite o valor de B: ");
    scanf("%d",&b);
    printf("Digite o valor de C: ");
    scanf("%d",&c);

    //Processamento
    if(a==b && a<c){
        printf("A=B, C"); //Saída
    }else if(a==b && a>c){
        printf("C, A=B"); //Saída
    }else if(b==c && b<a){
        printf("B=C, A"); //Saída
    }else if(b==c && b>a){
        printf("A, B=C"); //Saída
    }else if(c==a && a<b){
        printf("C=A, B"); //Saída
    }else if(c==a && a>b){
        printf("B, C=A"); //Saída
    }else if(a<b && a<c){
        if(b<c){
            printf("A, B, C"); //Saída
        }else{
            printf("A, C, B"); //Saída
        }
    }else if(b<a && b<c){
        if(a<c){
            printf("B, A, C"); //Saída
        }else{
            printf("B, C, A"); //Saída
        }
    }else if(c<a && c<b){
        if(a<b){
            printf("C, A, B"); //Saída
        }else{
            printf("C, B, A"); //Saída
        }
    }else{
        printf("A=B=C"); //Saída
    }

    return 0;
}
